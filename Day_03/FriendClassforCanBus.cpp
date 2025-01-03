#include<iostream>
using namespace std;

class CanBus
{
private:
    string Message;
public:
    friend class ECU;

};

class ECU
{
private:
string data;
public:
    ECU(string str):data(str){}
    void sendMessage(CanBus &A1)
    {
        A1.Message=data;
        cout<<"Message sent is: "<<A1.Message<<endl;
    }
    void receiveMessage(CanBus &A2)
    {
        this->data =A2.Message;
        cout<<"Message received is: "<<this->data<<endl;
    }
    

};

int main()
{
    CanBus C1;
    ECU E1("speed");//constructor
    E1.sendMessage(C1);
    E1.receiveMessage(C1);

}