/**
 * @file TCPEstablished.h
 * @brief Establiashed state class for TCPConnection object.
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#ifndef TCPESTABLISHED_H_INCLUDED
#define TCPESTABLISHED_H_INCLUDED

#include <iostream>
#include "TCPConnection.h"

class TCPEstablished : public TCPState
{
    public:
        static TCPEstablished* Instance();
        virtual void Send(TCPConnection *tc);
        virtual void Recieve(TCPConnection *tc);
        virtual void Close(TCPConnection *tc);
        virtual string CurrentState(){return m_currState;}

    private:
        TCPEstablished():m_currState("Established"){}
        static TCPEstablished* m_ti;
        string m_currState;
};


#endif // TCPESTABLISHED_H_INCLUDED
