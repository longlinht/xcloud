#ifndef LOG_H
#define LOG_H

#include <QFile>

class Logger {
public:
    enum logverb {LOG_ERROR = 0,LOG_WARN,LOG_CRITICAL,LOG_INFO};

    static void log(logverb v,QString msg);
    static bool init(logverb v);
    static void close();

private:
    Logger();
    static QFile *file;
    const static int maxlog = 20971520;
    static logverb verb;
};

#endif // LOG_H
