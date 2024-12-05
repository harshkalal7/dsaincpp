// // exceptions handling
// #include <iostream>
// using namespace std;
// int main()
// {
//     try
//     {
//         int age = 15;
//         if (age >= 18)
//         {
//             cout << "Access granted - you are old enough.";
//         }
//         else
//         {
//             throw 505;
//         }
//     }
//     catch (...)
//     {
//         cout << "Access denied - You must be at least 18 years old.\n";
//     }
//     return 0;
// }

// overridden
// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//    virtual void print()
//     {
//         cout << "Base class";
//     }
// };
// class Derived : public Base
// {
// public:
//     void print()
//     {
//         cout << "Derived class";
//     }
// };
// int main()
// {
//     // Base b1;
//     // // b1.print();
//     // Derived d1;
//     // d1.print();
//     /////////////////////////
//     Base *b1;
//     Derived d1;
//     b1 = &d1;
//     // d1.print();
//     b1->print();
//     return 0;
// }

//goto 
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"raj"<<endl;
//     goto asdf;
//     cout<<"hello"<<endl;
//     asdf:
//     cout<<"123";
//     return 0;
// }

//template
// #include<iostream>
// using namespace std;
// template <typename T>
// T add (T a, T b)
// {
//     return a + b;
// }
// int main()
// {
//     cout<<"Addition of integers:"<<add(3, 7)<<endl;
//     cout<<"Addition of doubles:"<<add(3.5, 2.1)<<endl;
//     return 0;
// }