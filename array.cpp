#include<iostream>
using namespace std;
class Array{
    private:
        int *p;
        int i;
    public:
        Array(int=1);
        ~Array();       
        void print();
        const int get()const {return i;}    //birinci const return edilen değer sabit olsun değişmesin der.ikinci const bu methodun herhangi bir özelliği değiştirmediğini ifade eder
        Array sum(const Array &);
        void setboyut(int);
        void set(int ,int );
        int * adres();             
        Array(const Array&);        //copy constructor
        Array carpma(const Array &);
};
void Array:: setboyut(int i){this->i=i; }
Array:: ~Array(){delete[] p;}            //dizi olduğu için delete ederken [] konur
void Array::set(int indis, int value)
{
    if(indis<i)
    p[indis]=value;
}                                 
Array::Array(const Array&n)                 //kopyalama fonksiyonunda ismi classın isminde olmalı ve bir nesne içerisine atılmalı
        {                                  //bir var. oluştururup içerisine copy etmek istediğim bir nesne atıcam
            this->i=n.i;                   //yeni oluşturduğum nesnenin pointerina yer aldım 
            p=new int [i];                  
            for(int j=0;j<i;j++)
                p[j]=n.p[j];
            cout<<"kopyalama işlemi gerçekleşti"<<endl;
        }
Array Array::sum(const Array &n)
{
    if(i==n.i)
    {
        Array temp;
        temp.i=n.i;     //yeni oluşturduğum temp nesnesininde boyutunu belirtmeliyiz
        for(int j=0;j<i;j++)
        temp.p[j]=p[j]+n.p[j]; //topladığını nerede saklayacaksın :)
        return temp;
    }
    else
        return 0;
}
Array:: Array(int i):i(i)//kurucu fonksiyona i parametre olarak alınır ama i ye ilk değer atamasıda bu şekilde yapılır constan farklı olarak
        {
            //bu ilk değer mevzusu neden var?  neden fonksiyonun içinde değil?
            //fonk un içinde yazsam tekrardan aynı değeri vermi olurum.her fonku çagirdiğimda
            //aynı olur değiştiremem. ben for(imt i=0;...)şeklinde döngünün içinde farklı değerler alabilmesi için ilk değer ataması 
            //yapıyorım. buradada aynı mantık var.Fonksiyonun içnde farklı değerler alabilir sadece ilk değer ataması yapıyorum.ama eğer değer girmezse bu geçerli
            //peki içindeki bu i(i) de ne dersen o; eğer user bir değer girerse o girdiği değeri eşitle i sayısına demektir
            p=new int[i];          //pointer için yer alımı kurucu fonk.da
            cout<<i<<" elemanlı bir dizi oluşturuldu"<<endl;
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
Array Array::carpma(const Array& n)
{
    if(i==n.i)
    {
        Array temp(i);         //sonucu saklamak için.  temp.i=n.i bu şekildede boyut eşitlemesi yapılabilir
        for(int j=0;j<i;j++)
            temp.p[j]=p[j]*n.p[j];
            return temp;
    }
    else 
        return 0;
}
int main()
{
    Array Array1(3);   
    Array1.set(0,3);     
    Array1.set(1,4);
    Array1.set(2,5);     
    Array Array2(Array1);
    cout<<"Array1:"<<endl;
    Array1.print();
    cout<<"Array2:"<<endl;
    Array2.print();
    cout<<Array1.adres()<<endl;
    cout<<Array2.adres();
    cout<<endl<<endl;
    (Array1.sum(Array2)).print();
    cout<<endl<<"carpma:\n";
    (Array1.carpma(Array1)).print();
    
    return 0;
}
//derleyici neden ilk değerlerin hepsini sıfır atıyor random rakamlar olmalıydı
//dikkat! bir nesne oluşturduktan (içerisinde popinter olan) sonra ikinci nesneye birincisini
//kopyaladım ve ikisinin pointerları aynı değerleri tutmasına rağmen adresleri farklı
//çünkü; ikisi farklı pointer dizileri aynı elemanlara sahip farklı diziler gibi düşünülebilir