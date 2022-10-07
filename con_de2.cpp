#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"conststuctor executed"<<endl;
    }
    ~A()
    {
        cout<<"destructor executed"<<endl; 
    }
};
int main()
{
    A a,b,c,d;
    return 0;
}
//her obje için ayrı ayrı constructor ve desturctor fonksiyonları çalışır