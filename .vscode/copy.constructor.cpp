#include<iostream>
using namespace std;
class A{
    private:
        int x;
        int *z;
    public:
        void get();
        A();
};
A::A()
{
    x=10;
   
}
void A::get()
{
    cout<<"x:"<<x<<endl<<"t:"<<*t;
}
int main()
{
    A n;
    n.get();
    return 0;
}
//copy constructor un parametre olarak nesne alır ve nesneyi ref & olarak alır