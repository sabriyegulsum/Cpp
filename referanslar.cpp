#include<iostream>
using namespace std;
void fonk(int &i)
{
    i=15;
}
int main()
{
    int a=10;
    int &ref=a;
    //referansları tanımladığın yerde tanımlamak gerekiyor bir aşağıda tanımlayamazsın hata verir
    fonk(ref);
    cout<<a<<endl;
    return 0;
}