/*8. Create a Rupee class and convert it into int. And Display it.

Example-
int main()
{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee
{
private:
    int x;
public:
    Rupee(){}
    Rupee(int a)
    {
        cout<<"pc is called for rupee"<<endl;
     x=a;
    }
    operator int()
    {
     cout<<"int() called for rupee"<<endl;
     return x;
    }


};

int main()
{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
 }
