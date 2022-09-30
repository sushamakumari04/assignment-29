/* 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.
Example-
int main(){
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;}
*/
#include<iostream>
using namespace std;
class Time
{
private:
    int minute;
public:
     Time(){}
     Time(int d)
     {
      cout<<"pc is called for Time"<<endl;
      minute = d;
     }
     void display()
     {
      cout<<"minute : "<<minute<<endl;
     }


};
int main()
{
int duration;
cout<<"Enter time duration in minutes"<<endl;
cin>>duration;
Time t1 = duration;//int ko time
t1.display();

return 0;
}
