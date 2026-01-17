#include<iostream>
#include<cstring>
using namespace std;

class String1
{
    private:
        char* data;
        size_t length;
    
    public:
        
        String1(const char* str)
        {
            length = std::strlen(str);
            data = new char[length + 1];
            
            std::strcpy(data, str);
            std::cout<<"Parameterized Constructor"<<std::endl;
        }
        
        String1(String1 && other)
        {
            data = other.data;
            length = other.length;
            other.data = nullptr;
            other.length = 0;
            std::cout<<"Move constructor called"<<std::endl;
        }
        
        String1 & operator= (String1 && other)
        {
            if(this !=&other)
            {
                delete [] data;
                data = other.data;
                
                length = other.length;
                other.data = nullptr;
                other.length = 0;
                std::cout<<"Move assignment operator called"<<endl;
            }
            return *this;
        }
        
        ~String1()
        {
            delete [] data;
            std::cout<<"Destructor called"<<endl;
        }
        
        void display() const
        {
            std::cout<<"String is "<<(data ?data:"nullptr")<<std::endl;
        }
};

int main()
{
    String1 str1("Hello World");
    String1 str2("Good Bye!");
    str2= std::move(str1);
    str1.display();
    str2.display();
}
