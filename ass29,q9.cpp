/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion
Example-
int main(){
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}*/
#include<iostream>
using namespace std;
class Dollar
{
private:
    int y;
public:
    Dollar(){}
    Dollar(int a)
    {
     cout<<"pc called"<<endl;
      y=a;
    }
    void display()
    {
     cout<<y<<endl;
    }
};
int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
 return 0;
}
