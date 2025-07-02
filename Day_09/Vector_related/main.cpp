#include"array.h"

int main()
{
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector v(arr,size);

    v.print();
    cout << "Reversing the vector..." << endl; 
    cout<<"_____________"<<endl;    
    v.reverse();
    v.print();
    cout<<"_____________"<<endl;
    cout << "Sorted vector:" << endl;
    v.sort();
    v.print();
    cout<<"_____________"<<endl;
}