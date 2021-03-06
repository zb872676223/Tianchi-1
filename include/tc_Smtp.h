// *********************************************************************************************************************
// Tianchi share library for Qt (C++)
// 天池共享资源库
// =====================================================================================================================
// 邮件发送器
// =====================================================================================================================
// 创建/更新/维护人员:
// Date         Name        IM              Email               Description
// ---------------------------------------------------------------------------------------------------------------------
// 2013.04.10   Jonix Fu    QQ:23552351     jonix@qtcn.org      初创
//
// =====================================================================================================================
// Confirmation/确认:
// Date         Name        OS/Compiler     Description
// ---------------------------------------------------------------------------------------------------------------------
// 2013.04.10   Jonix Fu    Win8/VC2010     仅编译通过
//
// *********************************************************************************************************************
/// @file tc_Smtp.h 邮件发送器
// *********************************************************************************************************************
#ifndef TIANCHI_SMTP_H
#define TIANCHI_SMTP_H

#include "tc_qglobal.h"

#include <QString>

namespace Tianchi
{
class Q_DECL_EXPORT Smtp
{
public:
    Smtp(const QString& host="", int port=25);

private:
    QString m_Host;
    int     m_Port;

public:
    inline void setHost(const QString& host, int port=25)
    {
        m_Host = host;
        m_Port = port;
    }

    bool send();
};
};

#endif // TIANCHI_SMTP_H
