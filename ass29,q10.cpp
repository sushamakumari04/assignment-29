/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example-
int main(){
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0; */
#include<iostream>
using namespace std;
class Rupee
{
private:
    float rs;
public:
    Rupee(){}
    Rupee(float x)
    {
     rs=x;
    }
    void display()
    {
     cout<<" rupee is : "<<rs<<endl;
    }
    float getR()
    {
     return rs;
    }
};
class Dollar
{
private:
    float dol;
public:
    Dollar(){}
    Dollar(float y)
    {
     dol=y;
    }
    Dollar(Rupee r)
    {
      dol=r.getR()/100;
    }
    void display()
    {
     cout<<"dollar is : "<<dol<<endl;
    }
    operator Rupee()
    {
     return dol*100;
    }
};
int main()
{
Rupee r = 23;
Dollar d =(Rupee) r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();

return 0;
}
