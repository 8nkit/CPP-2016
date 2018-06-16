#include<iostream.h>
#include<conio.h>
class student
{
private:
int rn;
float m;
char n[10];
public:
void getdata();
void show();
};
void student::getdata()
{
cout<<"\nEnter the rn, name & marks";
cin>>rn>>n>>m;
}
void student::show()
{
cout<<"\nYour rn is "<<rn;
cout<<"\nYour name is"<<n;
cout<<"\nYour marks is"<<m;
}
void main()
{
student s;
clrscr();
s.getdata();
s.show();
getch();
}