#include<iostream>
using namespace std;
class Nokta{
    private:
    int x;
    public:
    int get();
    void set(int);
    friend void foo(Nokta&);
};
int Nokta:: get()
{
    return x;
}
void Nokta::set(int _x)
{
    x=_x;
}
void foo(Nokta & a)
//evet class Nokta ve foo kankalar ama burada fonksiyonu globalde tanımlarken hersese duyurmana gerek yok 
//sadece class Nokta kankayız desin yeterli :))
{
    a.x=100;
}
int main()
{
    Nokta n;
    n.set(1);
    cout<<n.get()<<endl;
    foo(n);            //sadece foo yu çağırdım ve içine değiştirmek istediğim özlliğin bulundığu nesne yi attım ve x adres kullandığım için değişmiş oldu 
    cout<<n.get()<<endl;
    return 0;
}