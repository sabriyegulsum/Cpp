#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"constructor execudetd"<<endl;
    }
    ~A()
    {
        cout<<"destructor executed"<<endl;
    }
};
int main()
{
    A a;
    return 0;
}
//sadece bir tane obje oluşturduğumuzda bile con ve de structor çalışır 