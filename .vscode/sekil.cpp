#include<iostream>
using namespace std;

class Sekil{
    public:
        int alan;
        string birim;
        string sekilTuru;
    public:
        Sekil()    //constructor da her özelliği tanımlamana gerek yok.Kalıtım yapıcaksan her bir classında aynı olacak değeri tanımlayabilirsin
        {
            birim="cm2";
            cout<<"Sekil() çağırıldı\n";
        }
        Sekil(int alan):alan(alan){
            cout<<"Sekil(int alan):alan(alan) çağırıldı"<<endl;
        }

        void Alanyaz() 
        {
            cout<<sekilTuru<<" "<<alan<<" "<<birim<<" alana sahiptir"<<endl;
        }
};
class Ucgen:public Sekil {        //inhericante. Sekilden kalıtım alarak bir Ucgen class ı oluşturuldu
    public:
        int kenar;
        int yukseklik;
    public:

        Ucgen() :Sekil(10)
        {
            sekilTuru="Üçgen";
            cout<<"Ucgen() çağırıldı\n";
        }
};
class Kare:public Sekil {
    public:
        int kenar;
        Kare():Sekil(40)
        {
            sekilTuru="Kare";
            cout<<"Kare() çağırıldı\n";
        }
};
class Eskenar:public Ucgen{
    public:
    Eskenar()
    {
        cout<<"eskenar () çağırıldı"<<endl;
    }
};
int main()
{
    Ucgen k1;       //nerede tanımlarsan o satırda kurucular çalışır
    Kare k2;
    Eskenar k3;
    k1.birim="m2";
    k1.kenar=2;
    k1.yukseklik=6;
    k1.alan=(k1.kenar*k1.yukseklik)/2;
    k1.Alanyaz();
    
    k2.kenar=10;
    k2.alan=k2.kenar*k2.kenar;
    k2.Alanyaz();
    k3.Alanyaz();
    return 0;
}
//kalıtım alarak oluşturduğun classın kurucu fonksiyonunda kalıtım aldığın classın değerlerine ulaşıp onları değiştirebilirsin ve bu özellik her bir nesne 
//için farklı olabilir
//kaltım aldığın temel sınıfın farklı constructor ları varsa istediğini çağırabilirsin ama belitmezsen kendi default olarak bir tane kurucu çağırır
//ama eskenarda sekilin parametrelisini çağıramadım :(
//Ucgen de kurucuyu sekil in parametrelisi ile çağırdım ama sekilin parametresizini nasıl alıcam ???
