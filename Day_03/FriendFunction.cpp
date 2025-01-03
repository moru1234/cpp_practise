#include<iostream>
using namespace std;

//canbus class signal -> int data
//display - fun using friend function
class CanBus
{
private:
 int data;
public:

    void setMessage(int datarecevied)
    {
        this->data= datarecevied;
    }

    friend void DisplayMessage(CanBus A);
};

void DisplayMessage(CanBus B)
{
    cout<<"The message value :"<<B.data<<endl;
}

int main()
{
    CanBus B1;
    B1.setMessage(10);
    DisplayMessage(B1);
    B1.setMessage(15);
    DisplayMessage(B1);
}