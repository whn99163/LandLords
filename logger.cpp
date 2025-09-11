#include "Logger.h"
#include <QDir>

Logger& Logger::instance()
{
    static Logger loggerInstance;
    return loggerInstance;
}

void Logger::init(const QString& logFilePath, size_t max_file_size, size_t max_files)
{
    if (m_initialized) return;

    // 创建目录
    QFileInfo fileInfo(logFilePath);
    QDir dir = fileInfo.absoluteDir();
    if (!dir.exists()) {
        dir.mkpath(".");
    }

    // 初始化 spdlog 旋转日志
    m_logger = spdlog::rotating_logger_mt("qt_logger", logFilePath.toStdString(), max_file_size, max_files);
    m_logger->set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] %v");
    m_logger->set_level(spdlog::level::debug); // 设置日志级别为 debug

    m_initialized = true;
}

inline void Logger::info(const QString& msg)
{
    if (m_logger) m_logger->info(msg.toStdString());
}

void Logger::warn(const QString& msg)
{
    if (m_logger) m_logger->warn(msg.toStdString());
}

void Logger::error(const QString& msg)
{
    if (m_logger) m_logger->error(msg.toStdString());
}

void Logger::debug(const QString& msg)
{
    if (m_logger) m_logger->debug(msg.toStdString());
}
