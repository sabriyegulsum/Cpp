#include<iostream>  //istream ve ostream ikisinin dahil olduğu library
using namespace std;
class A{
    public:
    int x;
    friend istream& operator>>(istream&,A&);  //yazdığım kısayol fonksiyonunu hangi sınıfta kullanmak istiyorsam onunla arkadaş yaparım:))
    friend ostream& operator<<(ostream&,A&); 
};
/*şimdi açıklayalım hocam ilk önce return tipimimz istream ve ostream cin ve cout un aslında objesi yani onların adresini returnlemeye çalışıyorum
parametre olarak ise iki değer alıyorum birincisi cin veya cout iken ikincisi ise mainde cin ve cout kullandığımda sadece class ın ismini yazdığımda 
ondan clas ın içindekini elde etmekti.ama ondada ref (&)kullanırım */
istream& operator>>(istream&input, A&a)
{
    input>>a.x;
    return input;
}
ostream& operator<<(ostream& output,A&a )
{
    output<<a.x<<endl;
    return output;
}
int main()
{
    A a;
    cin>>a; //ben burda x i direkt yazdım ama olmaz çümkü x i kullanıyorum
    cout<<a;
    return 0;
}