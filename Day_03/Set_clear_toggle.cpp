#include<iostream>
using namespace std;

class BitHandler
{
private:
int BitPosition;
int NumVar;

public:
int setBit(int num,int pos)
{
    this->NumVar=num;
   this->NumVar|=1<<pos;
   return this->NumVar;
}

int setBit(int num, int pos, bool defaultBit)
{
    

    this->NumVar=num;
    this->NumVar|=1<<pos;
    return this->NumVar|=defaultBit;

}

int  clearBit(int num,int pos)
{
    this->NumVar=num;
    this->NumVar&= ~1<<pos;
    return this->NumVar;
}   

int  toggleBit(int num,int pos)
{
    this->NumVar=num;
    this->NumVar ^= 1<<pos;
    return this->NumVar;
}

    
};



int main()
{
BitHandler B;
int num =10;

for (int i=0;i<10;i++)
{
    num = B.setBit(num,2,1);
    cout<<"The result of operation is: "<<num<<endl;
}
}

// #include <iostream>
// using namespace std;

// class BitHandler {
// public:
//     int setBit(int num, int pos) {
//         return num | (1 << pos);
//     }

//     int clearBit(int num, int pos) {
//         return num & ~(1 << pos);
//     }

//     int toggleBit(int num, int pos) {
//         return num ^ (1 << pos);
//     }

// };
// //1010=10 ->input
// //1110=14 ->set 
// //1010=10 ->input
// //1110= 14 ->toggle


// int main() {
//     BitHandler B;
//     int num = 0xFF;
    
//     for(int i=0; i<10;i++)
//     {
//         num = B.toggleBit(num, 2);
//         cout<<"The result is: "<<hex<<uppercase<<num<<endl;
//     }   

//     return 0;
// }
