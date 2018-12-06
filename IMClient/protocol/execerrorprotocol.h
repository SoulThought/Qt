#ifndef EXECERRORPROTOCOL_H
#define EXECERRORPROTOCOL_H

#include <QObject>

#include "common.h"
#include "errorprotocol.h"

class ExecErrorProtocol : public QObject
{
    Q_OBJECT

public:
    ExecErrorProtocol(QObject *parent = 0);
    ~ExecErrorProtocol();
    void run() Q_DECL_OVERRIDE ;

    void execErrorType(void);
    void execErrorTypeNone(void);
    void execErrorNoneCorrectBack(void);
    void execErrorNoneHeartTest(void);
    void execErrorNoneHeartBack(void);

    void execErrorTypeData(void);

    void execErrorTypeAuth(void);
    void execErrorTypeServ(void);

private:
    ErrorProtocol m_errorProtocol;
};

#endif // EXECERRORPROTOCOL_H
