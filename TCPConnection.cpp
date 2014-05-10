/**
 * @file TCPConnection.cpp
 * @brief Context object in state design pattern
 * @author Divyang Patel <divyang.jp@gmail.com>
 * @version 1.0
 * @date 2014-05-10
 */

#include "TCPConnection.h"
#include "TCPClosed.h"

using namespace std;

TCPConnection::TCPConnection()
{
    //m_st = new TCPState();
    m_st = TCPClosed::Instance();
    //Init();
}

TCPConnection::~TCPConnection()
{
    delete m_st;
}

void
TCPConnection::Init()
{
    m_st->Init(this);
}
void
TCPConnection::Open()
{
    m_st->Open(this);
}

void
TCPConnection::Close()
{
    m_st->Close(this);
}

void
TCPConnection::Send()
{
    m_st->Send(this);
}

void
TCPConnection::Recieve()
{
    m_st->Recieve(this);
}

void
TCPConnection::Listen()
{
    m_st->Listen(this);
}

string
TCPConnection::CurrentState()
{
    return m_st->CurrentState();
}

void
TCPConnection::ChangeState(TCPState* a_st)
{
    m_st = a_st;
}
