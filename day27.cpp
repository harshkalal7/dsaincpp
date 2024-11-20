// #include <iostream>
// using namespace std;
// class Box
// {
// public:
//     double length;
//     double *wide;
//     Box(double length, double mrp)
//     {
//         this->length = length;
//         this->wide = new double;
//         *wide = mrp;
//     }
//     Box(Box &obj)
//     {
//         this->length = obj.length;
//         this->wide = new double;
//         *wide = *obj.wide;
//     }
//     void getInfo()
//     {
//         cout << length << " " << *wide<<endl;
//     }
//     ~Box()
//     {
//         delete wide;
//     }
// };
// int main()
// {
//     Box v1(12.0, 5.5);
//     Box v2(v1);
//     v1.getInfo();
//     *(v2.wide) = 6.5;
//     v1.getInfo();
//     return 0;
// }

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(int a, string n)
    {
        this->age = a;
        this->name = n;
    }
     void pprint()
    {
        cout  << age << name << endl;
    }
};
class Student : public Person
{
public:
    int roll_no;
    Student(int r, int a, string n) : Person(a, n)
    {
        this->roll_no = r;
    }
    void sprint()
    {
        cout << roll_no << age << name << endl;
    }
};

class Class12 : public Student
{
public:
    string branch;
    Class12(string b, int r, int a, string n) : Student(r, a, n)
    {
        this->branch = b;
    }
    void cprint()
    {
        cout << branch << roll_no << age << name << endl;
    }
};
int main()
{
    // Class12 stu;
    // stu.name = "harsh";
    // stu.age = 20;
    // stu.branch = "cs";
    // stu.roll_no = 123;
    Class12 stu("cs", 123, 20, "harsh");
    stu.cprint();
    stu.sprint();
    stu.pprint();
    return 0;
}