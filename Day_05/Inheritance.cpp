//inheritance 

#include <iostream>
using namespace std;

class CanBus
{
protected:
string Message;

public:
//CanBus(string M):Message(M){}

void setMessage(string msg)
{
    Message = msg;
    cout<<"The value of message is "<<Message<<endl;
}

    string getMessage()
    {
        return Message;
    }
};

class CanBus2
{
protected:
string Message2;

public:
//CanBus(string M):Message(M){}

void setMessage2(string msg)
{
    Message2 = msg;
    cout<<"The value of message2 is "<<Message2<<endl;
}

    string getMessage2()
    {
        return Message2;
    }
};

class ECU:public CanBus, public CanBus2
{
private:
    string data;
public:
    ECU(string d)
    {
    data = d;
    }

    void sendMessage(string d) 
    {
        data =d;
        setMessage(data);
        cout<<"We are in derived class and sending Message"<<endl;
    }

    void ReceiveMessage() 
    {
        getMessage();
        cout<<"We are in derived class and receiveing Message is: "<<getMessage()<<endl;
    }

    void sendMessage2(string d) 
    {
        data =d;
        setMessage2(data);
        cout<<"We are in derived class and sending Message2"<<endl;
    }

    void ReceiveMessage2() 
    {
        getMessage2();
        cout<<"We are in derived class and receiveing Message2 is: "<<getMessage()<<endl;
    }

};

int main()
{
    ECU E1("Speed");
    E1.sendMessage("Speed1");
    E1.ReceiveMessage();

    ECU E2("Milage");
    E2.sendMessage("Milage");
    E2.ReceiveMessage();
    E2.sendMessage2("Milage");
    E2.ReceiveMessage2();
}