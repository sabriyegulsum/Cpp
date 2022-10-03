#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    A();
    A(int);
    int getx();
};
A::A()
{
    x=20;
}
A::A(int x)
{
    this->x=x;
}
int A::getx()
{
    int _x=2*x; 
    x=25;
    cout<<x<<endl;        //bu değişilik class la yani class ın içindeki özelliklerle ilgili değil 
    return 2*x;            //hatalı yazım değildir düşün x i değiştirdin mi? hayır. Const nesnenin ilgilendiği şey  onun özelliklerini değiştirme
}
int main()
{
    A n1;
    A const n2;
    cout<<n1.getx()<<endl;
    //cout<<n2.getx();        hatalı  
    //const olan nesnelerin fonksiyonlarınada ulaşamazsın public olsa bile  
    //genelde const nesne, bir fonksiyona parametre olarak  gönderilir hiç bir özelliği değiştirilemesin diye
    return 0;
}
//class ın içinde const fonksiyon olması ve classının mainde const oluşturrulması farklı şeylerdir
/*  class const olduğunda içerisindeki methodlara ulaşılmaz mainde çağırıp ulaşamazsın ama clasının içinde özllikerli değiştirebilirsin
ama eğer clasında ki methodlardan biri const ise */