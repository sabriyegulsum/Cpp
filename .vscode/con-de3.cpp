#include<iostream>
using namespace std;
int counter=0;
class A{
    public:
    A()
    {
        counter++;
        cout<<counter<<".obje constuctor executed"<<endl;
    }
    ~A()
    {
        cout<<counter<<".obje destuctor executed"<<endl;
        counter--;
    }
};
int main()
{
    A a,b,c,d;
    return 0;
}
//LIFO last ınput first out
//buradaki mesele şu ilk objeyi açıp sonra bırakmaz son objeye kadar açar son objeyi açtığında ilk son objeyi kapatır
