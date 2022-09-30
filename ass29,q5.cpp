/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);//pc of invent1
Invent2 d1;//dc of invent2
float tv;// variable
tv=s1;// userdifined ko float me karna h ,operatior float in s1 object class invent1
d1=s1;// invent2 ko upper bana phir operator invent2 ho jayega
return 0;
}
*/
#include<iostream>
using namespace std;
class Invent2
{
private:
    int x;
    int y;
public:
    Invent2()
    {
    }
    Invent2(int s)
    {
      x=s;
      y=s;
    }
    void display()
    {
     cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};
class Invent1
{
private:
    int a,b;
public:
    Invent1(){}
    Invent1(int x,int y)
    {
     a=x;
     b=y;
    }
    operator float()
    {
     cout<<"float() called for Invent1"<<endl;
     return a+b;
    }
    operator Invent2()
    {
     cout<<"Invent2() called for Invent1"<<endl;
     return b;
    }
    operator int()
    {

    }

};
int main()
{
Invent1 s1=(4,5);//pc of invent1//intialization.
Invent2 d1;//dc of invent2
float tv;// variable
tv=s1;// userdifined ko float me karna h ,operatior float in s1 object class invent1
cout<<tv<<endl;
d1=s1;// invent2 ko upper bana phir operator invent2 ho jayega
d1.display();
return 0;
}
