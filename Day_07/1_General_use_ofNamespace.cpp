//A namespace is a feature in C++ used to organize code into logical groups and prevent name conflicts. 
//This is especially helpful in large projects where multiple libraries or modules may have the same identifiers (e.g., function names, variables, or classes).
//Use namespaces to avoid naming conflicts.
//Access members using :: or using keywords.
//Avoid using namespace in global scope for large projects.
//Use nested namespaces and aliases for better organization in larger codebases.

#include <iostream>

using namespace std;

class Time
{
public:
void funcTime()
{
    cout<<"This is Time hello"<<endl;
}
};

namespace std1 
{
    void FuncHello(void)
    {
        cout<<"FuncHello"<<endl;
    }
}

int main()
{
    Time T1;
    //using namespace std1;
    std1::FuncHello();
    cout<<"THis is Hellow world"<<"\n";
    T1.funcTime();
    
}