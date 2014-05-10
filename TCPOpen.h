/**
 * @file TCPOpen.h
 * @brief Open state of TCPConnection object. Derived from TCPState abstract class
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#ifndef TCPOPEN_H_INCLUDED
#define TCPOPEN_H_INCLUDED

#include <iostream>
#include "TCPConnection.h"

class TCPOpen : public TCPState
{
    public:
        static TCPOpen* Instance();
        virtual void Listen(TCPConnection *tc);
        virtual string CurrentState(){return m_currState;}
    private:
        TCPOpen():m_currState("Open"){}
        static TCPOpen* m_ti;
        string m_currState;
};


#endif // TCPOPEN_H_INCLUDED
