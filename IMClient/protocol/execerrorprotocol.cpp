#include "execerrorprotocol.h"

#include <QDebug>

ExecErrorProtocol::ExecErrorProtocol(QObject *parent)
    :QObject(parent)
{

}

ExecErrorProtocol::~ExecErrorProtocol()
{

}

void ExecErrorProtocol::execErrorType(void)
{
    qDebug() << "void ExecErrorProtocol::execErrorType(void)";
    switch (m_errorProtocol.m_errorType) {
    case ErrorType_None: execErrorTypeNone(); break;
    case ErrorType_Data: execErrorTypeData(); break;
    case ErrorType_Auth: execErrorTypeAuth(); break;
    case ErrorType_Serv: execErrorTypeServ(); break;
    default: break;
    }
}

void ExecErrorProtocol::execErrorTypeNone(void)
{
    qDebug() << "void ExecErrorProtocol::execErrorType(void)";
    switch (m_errorProtocol.m_errorType) {
    case ErrorNone_CorrectBack: execErrorNoneCorrectBack(); break;
    case ErrorNone_HeartTest: execErrorNoneHeartTest(); break;
    case ErrorNone_HeartBack: execErrorNoneHeartBack(); break;
    default: break;
    }
}

void ExecErrorProtocol::execErrorTypeData(void)
{

}

void ExecErrorProtocol::execErrorTypeAuth(void)
{

}

void ExecErrorProtocol::execErrorTypeServ(void)
{

}

void ExecErrorProtocol::execErrorNoneCorrectBack(void)
{

}

void ExecErrorProtocol::execErrorNoneHeartTest(void)
{

}

void ExecErrorProtocol::execErrorNoneHeartBack(void)
{

}

