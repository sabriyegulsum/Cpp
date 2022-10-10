#include<iostream>
using namespace std;

class Identity{
protected:
    string name;
    int age;
};
class Student:public Identity{
protected:
    string department;
    int no;
public:
    Student();
    Student(string,int);
};
/*class Academician:public Identity{
protected:
    string department;
    int salary;
public:
    Academician();
    Academician(string);
};
class Personal:public: Identity{
protected:
    string job;
    int salary;
};*/
//Student::Student(){department="ayşe";no=123;}
//Student::Student(string department, int no): department(department),no(no){}
int main()
{
    Student std;
    std.department="tıp";
    std.no=234;
    cout<<std.department<<" "<<std.no<<endl;
    return 0;
}

