//çok zor değil sadece oku :)
#include<iostream>
using namespace std;
class A{
    private:
    int x;
    int y;          //çoğunlukla özellikler private tanımlanır  erişilememesi için
    public:
    A()             //kurucu fonksiyon  normalde class bunu kendisi otomatik olarak kurar ama biz bir tane kurucu fonk kurarsak örn parametreli
    {               //o zman bir tane de parametresiz kurmamız gerekir yani eğer bir tane kurucu fonksiyon kurarsan class  otomatik kurucu fonksiyon kurmayacaktır
        x=0;        //class ın kurduğu constructer parametresiz ve ilk değeri olmayan bir fonk tur.
        y=0;       
    }
    A(int _x,int _y=8)  // burada ilk değer atamasını bütün parametreler için yaparsan parametreli olsun diye kurduğun
    {                   // fonksiyon otomatikman parametresiz hale gelecektir ve senin diğer (eğer varsa) parametresiz constructor ın ile
        x=_x;           //karıştıracaktır. Ama poli parametre olan bir constructor da en az bir değer verilmemiş bir parametre bırakırsan kod
        y=_y;           // karıştırmaz hangi kurucu fonk. olduğunu
    }                    //--!!!ama eğer senin prametresiz kurucu fonksiyonun yoksa ve bir tanede parametreli bir kurucu fonksiyon oluşturup 
                        //(gizli parametresiz yaparsan)yani iki parametreyede değer verirsen mainde fonk u çağırdığında hiç bir değer vermedende çalışabilir çünkü 
                        //burada değer verdin ama ambiguis hatası vermez bir kurucu fonk var.xçünkü iki parametreye de değer vererek aslında bu fonksiyonu 
                        //parametresiz olarak kullanılabilir hale getiriyoruz
        
    void show();
};

void A::show()
{
    cout<<x<<","<<y<<endl;
}
int main()
{
    A a;    //eğer parametresiz constructor ile açılan bir obje istersen hiç fonk belirtisi açma direkt int x der gibi oluştur  *** ama bu pointer için geçerli değil
            //çünkü ona bellekten yer ayırıyoruz fonk ifadesini ekleriz constructor 2 de dizi ve poiterdan bahsedicem detaylı bilgi için oraya bakabilirsin
    A b(1); //bir prmtr verdiğinde ilkini eşitler ama ikincisini ilk verdiğin değerden alır. 
            //Ama unutma eğer pmtrsiz bir kurucu func varsa ve burada boş bir tane açarsna karıştırıyor ambiguis hatası
            //şimdi eğer kurucu fonk parametresiz ise burada fonk cağırma (); ifadesini koymaya gerek yok
    a.show();
    
    b.show();
    return 0;
}
/* Kurucu fonksiyon kullanma sebebimiz set ve get kullanmadan main kısmında değer verebilmek yada yapıcı fonksiyonun içinde
buradaki gibi değerler parametre olarak verilebir ya da fonksiyonun içinde tanımlanablir :)
A:A()
{
    x=10; seşklinde atayabirim
    //yada parametre olarak verebilirsin yukarıdakilere dikkat ederek :)
}*/