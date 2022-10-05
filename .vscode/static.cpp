#include<iostream>
using namespace std;
          //burada counter in ilk değeri verilir class içinde hata verir
class A{
    private:
        int x,y;
        static int counter;
    public:
        void print();
        A(int ,int );
        void set_sayac(int );
        A(const A&);
        int get_sayac();
     
};
int A:: counter=0;
A::A(int x,int y)
{
    this->x=x;
    this->y=y;
    counter++;
}
void A::print()
{
    cout<<"x"<<x<<"  y"<<y<<endl;
}
void A::set_sayac(int i)
{
    counter=i;
}
A::A(const A&n)
{
    x=n.x;
    y=n.y;
    counter++;
}
int A::get_sayac()
{
    return counter;
}
int main()
{
    A n1(3,5);
    A n2(n1);
    cout<<n1.get_sayac()<<endl;
    n2.set_sayac(100);          //şuan 102 yazmalı diyebilirsin ama iki eleman varken  counter ini 100 e eştledin
    cout<<n1.get_sayac()<<endl;  //fonksiyona () don't forget please 

    return 0;
}