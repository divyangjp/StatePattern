/**
 * @file TCPEstablished.cpp
 * @brief Established state
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#include "TCPEstablished.h"
#include "TCPClosed.h"

using namespace std;

TCPEstablished* TCPEstablished::m_ti = 0;

TCPEstablished* TCPEstablished::Instance()
{
    if(!m_ti)
    {
        m_ti = new TCPEstablished();
    }
    else
    {
        return m_ti;
    }

    return m_ti;
}
void TCPEstablished::Send(TCPConnection *tc)
{
    cout << "Sending data" << endl;
    ChangeState(tc, TCPEstablished::Instance());
}
void TCPEstablished::Recieve(TCPConnection *tc)
{
    cout << "Receiving data" << endl;
    ChangeState(tc, TCPEstablished::Instance());
}
void TCPEstablished::Close(TCPConnection *tc)
{
    cout << "Closing connection" << endl;
    ChangeState(tc, TCPClosed::Instance());
}
