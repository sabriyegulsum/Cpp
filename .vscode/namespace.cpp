#include<iostream>
using namespace std;

namespace programci1{
    int x=10;
    void foo()
    {
        int x=5;
        cout<<x<<endl;
    }
}
namespace programci2{
    int x=30;
    void foo()
    {
        int x=15;
        cout<<x<<endl;
    }
}
int main()
{
    int x=1;
    cout<<x<<endl;
    cout<<programci1::x<<endl;
    //namespace bir scope açmaktır fonksiyonsuz mainden bağımsız
    //bu scpoe bir projede çalışan farklı kişiler için kullanılabilir
    // aynı fonksiyon ismide olsa farklı uzaylarda olduğu için sorun olmaz
    //içerisindeki bir değeri yazdırırken aynı main gibi olur
    // iki tane :: olmalı
    programci1::foo();
    //func cagırırken de aynıdır 
    //temel mantık space in adı name 
    cout<<programci2::x<<endl;
    programci2::foo();
    //yani onuda main gibi düşünüp sadece o maine geçmek için space in adını yazıp iki nokta iki tane 😊
    return 0;
}
