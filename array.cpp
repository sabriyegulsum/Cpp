#include<iostream>
using namespace std;
class Array{
    private:
        int *p;
        int i;
    public:
        Array(int=1);
        ~Array(){delete[] p; cout<<"destructor çalıştı"<<endl;}        //dizi olduğu için delete ederken [] konur
        void print();
        const int get()const {return i;}    //birinci const return edilen değer sabit olsun değişmesin der.ikinci const bu methodun herhangi bir özelliği
                                            //değiştirmediğini ifade eder
        void set(int i) {this->i=i;}
        int * adres();
        Array(const Array&);      //kopyalama fonksiyonunda ismi classın isminde olmalı ve bir nesne içerisine atılmalı
};



Array:: Array(int i):i(i)//kurucu fonksiyona i parametre olarak alınır ama i ye ilk değer atamasıda bu şekilde yapılır constan farklı olarak
        {
            //bu ilk değer mevzusu neden var?  neden fonksiyonun içinde değil?
            //fonk un içinde yazsam tekrardan aynı değeri vermi olurum.her fonku çagirdiğimda
            //aynı olur değiştiremem. ben for(imt i=0;...)şeklinde döngünüün içinde farklı değerler alabilmesi için ilk değer ataması 
            //yapıyorım. buradada aynı mantık var.Fonksiyonun içnde farklı değerler alabilir sadece ilk değer ataması yapıyorum.ama eğer değer girmezse bu geçerli
            //peki içindeki bu i(i) de ne dersen o; eğer user bir değer girerse o girdiği değeri eşitle i sayısına demektir
            p=new int[i];          //pointer için yer alımı kurucu fonk.da

            cout<<i<<" elemanlı bir dizi oluşturuldu"<<endl;
        }
Array::Array(const Array&n)         //kopyalama fonksiyonu
{                                   //bir var. oluştururup içerisine copy etmek istediğim bir nesne atıcam
    this->i=n.i;                    
    p=new int [i];                  //yeni oluşturduğum nesnenin pointerina yer aldım
    for(int j=0;j<i;j++)
    {
        p[j]=n.p[i];
    }
    cout<<"kopyalama işlemi gerçekleşti"<<endl;
}
void Array::print() 
{
    for(int j=0;j<i;j++)
        cout<<p[j]<<" ";
        cout<<endl;
}
int *Array::adres()
{
    return p;
}
int main()
{
    Array Array1(5);
    Array Array2=Array1;
    Array1.print();
    Array2.print();
    cout<<Array1.adres()<<endl;
    cout<<Array2.adres();
    return 0;
}
//derleyici neden ilk değerlerin hepsini sıfır atıyor random rakamlar olmalıydı
//dikkat! bir nesne oluşturduktan (içerisinde popinter olan) sonra ikinci nesneye birincisini
//kopyaladım ve ikisinin pointerları aynı değerleri tutmasına rağmen adresleri farklı
//çünkü; ikisi farklı pointer dizileri aynı elemanlara sahip farklı diziler gibi düşünülebilir