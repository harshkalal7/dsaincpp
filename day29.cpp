// #include <iostream>
// using namespace std;
// class mobile
// {
// public:
//     int price;
//     string name;
//     int sold;
//     mobile(int p, int s)
//     {
//         this->price = p;
//         // this->name = n;
//         this->sold = s;
//     }
//     mobile(int p, string n, int s)
//     {
//         this->price = p;
//         this->name = n;
//         this->sold = s;
//     }
//     void print1()
//     {
//         cout << name << endl;
//     }
// };
// class revenue : public mobile
// {
// public:
//     revenue(int price, int sold) : mobile(price, "rrr", sold)
//     {
//     }
//     int cal()
//     {
//         return price * sold;
//     }
// };

// class profit
// {
// public:
//     int margin;
//     profit(int m)
//     {
//         this->margin = m;
//     }
// };
// int main()
// {
//     revenue m1(50000, 50);
//     cout << m1.cal();
//     m1.print1();
// }

#include <iostream>
using namespace std;
class mobile
{
public:
    string name;
    int price;
};
class offline : mobile
{
public:
    string gift;
};
class online : mobile
{
public:
    string discount;
};
int main()
{
        
}