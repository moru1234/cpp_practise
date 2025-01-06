//inheritance 

#include <iostream>
using namespace std;

class CanBus
{
private:
string Message;

protected:
int length;

public:
CanBus(){}
CanBus(string M,int l=10):Message(M), length(l){}

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

class ECU:public CanBus
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
        cout<<"The message length is: "<<length<<Message<<endl;
        setMessage(data);
        cout<<"We are in derived class and sending Message"<<endl;
    }

    void ReceiveMessage() 
    {
        getMessage();
        cout<<"We are in derived class and receiveing Message is: "<<getMessage()<<endl;
    }

};
int main()
{
    ECU E1("Speed");
    E1.sendMessage("Speed1");
    E1.ReceiveMessage();

}