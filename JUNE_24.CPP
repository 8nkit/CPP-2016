//DESTRUCTOR 1st PROGRAM    (run by ALT+F5)
#include<iostream.h>
#include<conio.h>
class student
{
public:
student()
{
cout<<"\nConstructor";
}
~student()
{
cout<<"\nDestructor";
}
};
void main()
{
clrscr();
student d;
getch();
}
