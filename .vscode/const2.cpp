#include<iostream>
using namespace std;
class Nokta{
    private:
    int x,y;
    public:
    const int t;
    Nokta();
    Nokta(int ,int ,int);
    void info();
};
Nokta::Nokta():t(13)        //kurucu fonksiyona tanımlama şekli
{
    x=1;
    y=2;
}
Nokta::Nokta(int x,int y=7,int t=13):t(t)          //parametre olarak gelen t yi nesnenin içerisindeki t ye at
{
    this->x=x;
    this->y=y;
    //this->t=t;        hatalı
}
void Nokta:: info()
{
    cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"t"<<t;
}
int main()
{
    Nokta n(3,4);
    n.info();
    return 0;
}

//const tipindeki özellikler kurucu fonksiyon gövde kısmına geçmeden tanmılanmalıdır
//parametreli kurucu fonksiyonda yine t(t) şeklinde tanımlamak gerekiyor yoyksa must explicitly initialze the const member t hatası alısrsın
//her yapıcı fonksiyonda ayrı ayrı tanımlanamalı