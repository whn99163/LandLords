#ifndef SINGLETON_H
#define SINGLETON_H
#include <qdebug.h>
class Singleton
{
public:
    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }

private:
    Singleton();

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

#endif // SINGLETON_H
