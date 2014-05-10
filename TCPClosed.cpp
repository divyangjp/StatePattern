/**
 * @file TCPClosed.cpp
 * @brief Closes state 
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#include "TCPClosed.h"
#include "TCPConnection.h"
#include "TCPOpen.h"

using namespace std;

TCPClosed* TCPClosed::m_ti = 0;

TCPClosed* TCPClosed::Instance()
{
    if(!m_ti)
    {
        m_ti = new TCPClosed();
    }
    else
    {
        return m_ti;
    }

    return m_ti;
}

void TCPClosed::Open(TCPConnection *tc)
{
    cout << "Connection open" << endl;
    ChangeState(tc, TCPOpen::Instance());
}
