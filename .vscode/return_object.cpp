#include<iostream>
using namespace std;
class A{
    private:
        int x,y;
    public:
        void print();
        A(int ,int);
        A topla(const A&); //ilk const aldığın nesne sabit, ikinci bu fonksiyonu çağıran (kullanan) nesne sabit
};
A::A(int x, int y)
{
    this->x=x;
    this->y=y;
}
A A::topla(const A& n)
{
    int x=this->x+n.x;
    int y=this->y+n.y;
    return A(x,y);
}
void A::print()
{
    cout<<x<<","<<y;
}
int main()
{
    A n(10,5),m(2,3);
    A n3=n.topla(m);        //n3(n.topla(m))    n3 ün içine bu dönen nesneyi yazmış olduk
    n3.print();
    return 0;
    
}