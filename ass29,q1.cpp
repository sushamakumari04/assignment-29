/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
} */
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;
public:
    Complex()
    {
    }
    Complex(int x)
    {
      real =x;
      img = x;
    }

    void display()
    {
     cout<<"real : "<<real<<" img : "<<img<<endl;
    }

};
int main()
{
Complex c1;
int x=5;
c1=x;
c1.display();

return 0;
}
