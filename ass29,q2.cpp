/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}
*/
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
    void setData(int x,int y)
    {
     real=x;
     img=y;
    }
    operator int()
    {
     cout<<"int() call for Complex"<<endl;
     return real;
    }

};
int main()
{
int x;
Complex c1;
c1.setData(3,4);
x=c1;
cout<<x;

return 0;
}
