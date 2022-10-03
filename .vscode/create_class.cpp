#include<iostream>
using namespace std;
class student{
    public:
    int no;
    string name;
    void func1()
    {
        cout<<"Enter student name";
        cin>>name;
    }
    void func2()
    {
        cout<<name;             //direk main gibi düşün sınıfın içindesin 
    }
    void func3(int a)
    {
       no=a;   // no ya student.diye ulaşmama gerek yokm zaten içindesin :))
    }
};
int main()
{
    int i;
    student ogr;
    ogr.func1();
    ogr.func2();
    cout<<endl<<"ogrenci no giriniz";
    cin>>i;
    ogr.func3(i);
    cout<<ogr.no;

    return 0;
}