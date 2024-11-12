// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//   int age;
//   string name;
//   int classs;
//   void print(){
// cout<<name<<endl<<age<<endl<<classs;
//   }
// };

// int main()
// {
//     Student s1;
//     s1.name = "Harsh";
//     s1.age = 19;
//     s1.classs = 12;
//     // s1.print();
//     s1.age = 22;
//     s1.print();
//     return 0;
// }




#include<iostream>
using namespace std;
class Vegetables{
public:
string name;
double *price;
Vegetables (string name, double mrp){
    this-> name = name;
    this -> price = new double;
    *price = mrp;
}
Vegetables(Vegetables &obj)
{
    this -> name = obj.name;
    this -> price = new double;
    *price = *obj.price;
}
void getInfo ()
{
    cout<<name << " " << *price;
}
Vegetables()
{
    delete price;
}
};
int main ()
{
    Vegetables v1("ladyfinger", 5.5);
    Vegetables v2(v1);
    v1.getInfo();
    *(v2.price) = 6.5;
    v1.getInfo ();
    return 0;
}
