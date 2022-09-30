/* 7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;} */
#include<iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
public:
    Time(int h,int m)
    {
      cout<<"pc is called for Time"<<endl;
      hour = h;
      minute=m;
    }
    int getMin()
    {
     return minute;
    }
    void display()
    {
     cout<<"hour :"<<hour<<" minute : "<<minute<<endl;
    }
};
class Minute
{
private:
    int mn;
public:
    Minute(){mn=0;}
    Minute (int mm)
    {
      cout<<"pc is called for Minute"<<endl;
      mn = mm;
    }
    void display()
    {
     cout<<" minute : "<<mn<<endl;
    }
    Minute(Time t)
    {
     cout<<"Minute(time) called for class Minute"<<endl;
      mn = t.getMin();
    }

};
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1; // Fetch minute from time
t1.display();
m1.display();

return 0;
}
