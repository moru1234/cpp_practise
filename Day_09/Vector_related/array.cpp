#include"array.h"

vector::vector()
{
    ptr =NULL;
    size =0;
}

vector::vector(int *p, int s)
{
    size =s;ptr =new int[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=p[i];

    }   
}

vector::vector(vector &v)
{
    size = v.size;
    ptr = new int [size];
    for (int i=0;i<size;i++)
    {
        ptr[i]=v.ptr[i];
    }

}

void vector::print()
{
    for (int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" "<<endl;
    }
}

void vector::reverse()
{
    int start =0;int end=size-1;
    while(start<end)
    {

        int temp = ptr[start];
        ptr[start]=ptr[end];
        ptr[end]=temp;
        start++;
        end--;
    }
}

void vector::sort()
{
    for (int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp = ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}