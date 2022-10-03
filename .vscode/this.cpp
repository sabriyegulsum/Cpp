#include<iostream>
using namespace std;
class A{
    public:
    int x;
    int getx();
    void setx(int );
};
int A::getx()
{
    return x;
}
void A::setx(int x)
{
    this->x=x;
}
int main()
{
    A a;
    a.setx(13);
    cout<<a.getx();
    return 0;
}