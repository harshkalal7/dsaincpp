#include <iostream>
using namespace std;
class productprice
{
public:
    int price;
    productprice(int p)
    {
        this->price = p;
    }
    void pprint()
    {
        cout << price << endl;
    }
};
class username : private productprice
{
public:
    string name;
    username(int p, string n) : productprice(p)
    {
        this->name = n;
    }
    void uprint()
    {
        cout << price << " " << name << endl;
    }
};
// class application : private username
// {
// public:
//     string app;
//     application(string a, int p, string n) : username(p, n)
//     {
//         this->app = a;
//     }
//     void print()
//     {
//         cout << app << " "  << " " << name;
//     }
// };

int main()
{
    // productprice p1(499);
    // p1.print();
    username u1(499, "harsh");
    u1.uprint();
    // application a1("flipkart", 499, "harsh");
    // a1.print();

    return 0;
}

// #include <iostream>
// using namespace std;
// class Person
// {
// private:
//     string name;

// public:
//     Person(string n)
//     {
//         this->name = n;
//     }
//     void update(string n)
//     {
//         this->name = n;
//     }
//     void print()
//     {
//         cout << name;
//     }
// };
// int main()
// {
//     Person p1("hello");
//     p1.print();
//     p1.update("harsh");
//     p1.print();
//     return 0;
// }