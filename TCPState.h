/**
 * @file TCPState.h
 * @brief Abstract state class from which concrete state classes are derived
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#ifndef TCPSTATE_H_INCLUDED
#define TCPSTATE_H_INCLUDED

#include <iostream>
#include <string>
#include "TCPConnection.h"

using namespace std;

class TCPConnection;

class TCPState
{
    public:
        TCPState(){};
        virtual ~TCPState(){};
        virtual void ChangeState(TCPConnection *tc, TCPState* ts);
        virtual void Init(TCPConnection *tc);
        virtual void Open(TCPConnection *tc);
        virtual void Close(TCPConnection *tc);
        virtual void Send(TCPConnection *tc);
        virtual void Recieve(TCPConnection *tc);
        virtual void Listen(TCPConnection *tc);
        virtual string CurrentState() = 0;
};


#endif // TCPSTATE_H_INCLUDED
