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
class student
{
    int roll_no;

public:
    void setRollNo(int r)
    {
        this->roll_no = r;
    }
    void pRollNo()
    {
        cout << this->roll_no;
    }
};
int main()
{
    student s1;
    s1.setRollNo(123);
    s1.pRollNo();
    return 0;
}
