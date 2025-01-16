#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<string>
using namespace std;

class Emp
{
private:
string EmpName;
int EmpID;
public:
Emp();
Emp(string EmpName="Moreshwar", int EmpID=100);

void getEmpName();
};
#endif