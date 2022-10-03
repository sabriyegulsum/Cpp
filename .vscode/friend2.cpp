#include<iostream>
using namespace std;
class B;
class A{
    private:
        int x;
    public:
        int getx();
        friend void foo(A&);        //foo fonksiyonu class A ile arkadaş
        void sety(B&);             //aynı getx() fonksiyonu gibi farkı yok yapmaya çaliştıştığım şey b nin içinde ki private olan sayıyı A class ındaki 
                                  //fonksiyon ile değiştirmek
};
class B{
    private:
        int y;
    public:
        int gety();
        friend class A;
};
int A::getx(){return x;}
int B::gety(){return y;}
void foo(A&a){a.x=100;}     //foo ile A arkadaş olduğu içindeki private olan x e erişebilirim Arkadaşlık bunu gerektirir 🙂
void A::sety(B&b){b.y=49;}  //bak canım fonk u yazarken A nın uzayında oldğunu belirtmen gerekiyor

int main()
{
    A n;
    B m;
    foo(n);
    cout<<n.getx()<<endl;    //cout<<n.x<<endl; simdi baby böyle bir hata yaparsan private olan bir değere erişmeye çalışırsın olmaz unutma ona
    n.sety(m);              //dışarıya çektiğin getx fonksiyonuyla ulaşabilirsin :)
                           //ama çağırıken bunu yazmana gerek yok :)Unutma
    cout<<m.gety()<<endl; //şimdi önemli bir not var şöyle ki getx e ulaşırken nasıl n.getx(); diye ulaşıyorsun çünkü o bağımsız duran bir fonksiyon değil
                         //o A class ına bağlı o yüzden set y nasıl bağımsız gibi dursada bağımsız değil so çağırırken n.sety(); yazmalıyız
    return 0;
}
//ben bu kod da class ların içindeki privatelar bir(sadece okunur) değere sahip olmamasına ve set method u bulunmamasına rağmen onlara 
//friend fonksiyon ve friend class ile değer verdim :)



