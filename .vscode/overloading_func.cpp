#include<iostream>
using namespace std;
void func(void)
{
    cout<<"Hello";
}
void func(string name)
{
    cout<<"Hello"<<" "<<name;
}
int main()
{
    string name="sabriye";
    func();
    cout<<endl;
    func(name);
    return 0;
}
//aynı fonsiyonu hem parametreli hemde parametresiz oluşturdum 
//burada fonksiyon overload ettim yanı bir üst versiyon gibi düşünebiliriz
