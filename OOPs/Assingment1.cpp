//call by value.
/*#include <iostream>
#include <conio.h>
using namespace std;
void swap(int x,int y)
{
    int temp = y;
    y=x;
    x=temp;
    cout<<"\nAfter swapping\nX: "<<x<<"\nY: "<<y;
}
int main()
{
    int x,y;
    cout<<"Enter the value for X: ";
    cin>>x;
    cout<<endl<<"Enter the value for y: ";
    cin>>y;
    cout<<"\nBefore swapping\nX: "<<x<<"\nY: "<<y;
    swap(x,y);
    _getch();
    return 0;
}*/

//call by reference
#include <iostream>
#include <conio.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp = y;
    y=x;
    x=temp;
}
int main()
{
    int x,y;
    cout<<"Enter the value for X: ";
    cin>>x;
    cout<<"\nEnter the value for Y: ";
    cin>>y;
    cout<<"\nBefore swapping\nX: "<<x<<"\nY: "<<y;
    swap(x,y);
    cout<<"\nAfter swapping\nX: "<<x<<"\nY: "<<y;
    return 0;
}