#include<iostream>
using namespace std;
class Nokta{
    private:
    int x,y;
    public:
    int getx();
    int gety();
    void setx(int);
    void sety(int);
};
//dısarıya classta ki methodları taşımak için o uzayı unutmuyoruz
void Nokta::setx(int _x)
{
    x=_x;
}
void Nokta:: sety(int _y)
{
    if(_y<5)
        y=0;
    else
        y=_y;
}
int Nokta::getx()
{
   //burada yeniden x oluşturmana gerek yok çünkü :: ile zaten o scoptasın o scaptaykende private lere ulaşabilirsin
   return x;
}
int Nokta::gety()
{
    return y;
}
int main()
{
    Nokta n1;               //struct gibi tanımladık
    n1.setx(23);           //direkt olarak x e ulaşamıyoruz fakat public olan methodlara ulaşıyorum ve ulaştığım method da x e değer vermemi sağlıyor
    cout<<n1.getx()<<endl;      //class ıın içinde ki private x i yazdırmak istiyorum ama bunun için yine public olan method kullanıyorum ve x i return ediyorum
    n1.sety(15);
    cout<<n1.gety()<<endl;
    return 0;
}
// bu setter ı kullnama sebeplerimizden bir tanesi koşul sağlayıp sadece istediğimiz değerleri(özellikleri) elde edebilmek