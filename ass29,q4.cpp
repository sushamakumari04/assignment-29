/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
Item i1;
Product p1;

p1.setData(3,4);
i1=p1;
return 0;
} */
#include<iostream>
using namespace std;
class Item
{
private:
    int x;
public:
    Item(){}
    Item(int i)
    {
     cout<<"pc called for item"<<endl;
     x=i;
    }
    void display()
    {
     cout<<" x = "<<x<<endl;
    }
};
class Product
{
private:
     int a,b;
public:
     Product()
     {
     }
     Product(int m,int n)
     {
      cout<<"pc called for product"<<endl;
      a=m;
      b=n;
     }
     void setData(int m,int n)
     {
       a=m;
       b=n;
     }
     int getP()
     {
      return a+b;
     }
     void display()
     {
      cout<<" a = "<<" b = "<<b<<endl;
     }
     operator Item()
     {
      cout<<"Item() called for product"<<endl;
       return a;
     }
};
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
i1.display();

return 0;
}
