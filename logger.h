#ifndef LOGGER_H
#define LOGGER_H

#include <QString>
#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>

class Logger
{
public:
    static Logger& instance();

    void init(const QString& logFilePath = "logs/app.log", size_t max_file_size = 1048576 * 5, size_t max_files = 3);
    void info(const QString& msg);
    void warn(const QString& msg);
    void error(const QString& msg);
    void debug(const QString& msg);

private:
    Logger() = default;
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

private:
    std::shared_ptr<spdlog::logger> m_logger;
    bool m_initialized = false;
};

#endif // LOGGER_H
