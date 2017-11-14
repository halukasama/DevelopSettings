#ifndef DEBUGLOGGER_H
#define DEBUGLOGGER_H

#include <QDebug>
#ifdef QT_NO_DEBUG
#define NO_WJL_OUTPUT
#endif

#ifdef NO_WJL_OUTPUT
#define WJL print("some place had marco <QT_NO_DEBUG>");//QMessageLogger().noDebug()
#else
#define WJL (qDebug().nospace() \
    << "   Loc: [" << __FILE__ << "(" << __LINE__ << ")]:").space()
#endif

#define MARK do { WJL << "func:" << __FUNCTION__; } while (0)
#define JL WJL << "\t"

#endif // DEBUGLOGGER_H
