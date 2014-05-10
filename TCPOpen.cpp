/**
 * @file TCPOpen.cpp
 * @brief Concrete state class for open state of TCPConnection object
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#include "TCPOpen.h"
#include "TCPEstablished.h"

using namespace std;

TCPOpen* TCPOpen::m_ti = 0;

TCPOpen* TCPOpen::Instance()
{
    if(!m_ti)
    {
        m_ti = new TCPOpen();
    }
    else
    {
        return m_ti;
    }

    return m_ti;
}
void TCPOpen::Listen(TCPConnection *tc)
{
    cout << "Listening" << endl;
    ChangeState(tc, TCPEstablished::Instance());
}
