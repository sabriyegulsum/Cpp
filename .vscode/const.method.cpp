#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    A();
    A(int);
    int getx()const;
};
A::A()
{
    x=10;
}
A::A(int x)
{
    this->x=x;
}
int A::getx() const
{
    int _x=2*x;
    return x;
}
int main()
{
    A n(20);
    cout<<n.getx();
    return 0;
}
