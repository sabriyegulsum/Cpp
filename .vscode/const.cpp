#include<iostream>
using namespace std;
class A{
    private:
        int x;
        const int  a;   //constlar private yerine publicte de olabilir adı üstünde const sabit :) ***bu kısımdada tanımlanabilir
    public:
        int getx();
        int geta();
        A() :a(23)    //özel initialize yöntemi const lar için
        {
            x=10;
            //a=23;     hatalıdır const değerleri atama şeklinde yazılamaz ilk tanımlandığı anda değer verilmeli 
        }
};
int A::getx()
{
    return x;
}
int A::geta()
{
    return a;
}
int main()
{
    A n;
    cout<<n.getx()<<"\na:"<<n.geta();
    return 0;
}
//kurucu fonksiyon çağırılmadan önce atama yapmalıyız
    