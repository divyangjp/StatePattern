/**
 * @file TCPState.cpp
 * @brief Abstract state class
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#include "TCPState.h"
#include "TCPClosed.h"

using namespace std;

void TCPState::ChangeState(TCPConnection *tc, TCPState* ts)
{
    tc->ChangeState(ts);
}
void TCPState::Init(TCPConnection *tc)
{
    //tc->ChangeState(TCPClosed::Instance());
}
void TCPState::Open(TCPConnection *tc)
{
    cout << "Can't open" << endl;
}
void TCPState::Close(TCPConnection *tc)
{
    cout << "Can't close" << endl;
}
void TCPState::Send(TCPConnection *tc)
{
    cout << "Can't send" << endl;
}
void TCPState::Recieve(TCPConnection *tc)
{
    cout << "Can't receive" << endl;
}
void TCPState::Listen(TCPConnection *tc)
{
    cout << "Can't listen" << endl;
}
