#include"header.h"
Emp::Emp()
{
    this->EmpName="Moru";
    this->EmpID =101;
}
Emp::Emp(string n, int ID)
{
    this->EmpName=n;
    this->EmpID =ID;
}
void Emp::getEmpName()
{
    cout<<"This name of employee is "<<this->EmpName<<"And ID is "<<this->EmpID<<endl;
}