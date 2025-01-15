#include <iostream>
using namespace std;
int circle(double r);
int rectangle(double r, double p);
int triangle(double l, double b);
int main()
{
    char cho;
    double g, h ; 
    cout<<"if you want to calculate radius of a circle press (c)\nif rectangle press (r)\nif triangle press(t)";
    cin>>cho;
    switch(cho)
    {
        case 'C':
        {
            
            cout<<"\nEnter the radius of the circle \n";
            cin>>g;
            
            cout<<"\nthe area is : "<<circle(g);
        }
        break;
        case 'c':
        {
            
            cout<<"\nEnter the radius of the circle \n";
            cin>>g;
            cout<<"\nthe area is : "<<circle(g);
        }
        break;
        case 'r':
        {
            
            cout<<"\nEnter the length of retangle \n";
            cin>>g;
            cout<<"\nEnter the BASE of retangle \n";
            cin>>h;
            cout<<"\nthe area is : "<<rectangle(g,h);
        }
        break;
        case 'R':
        {
            
            cout<<"\nEnter the length of retangle\n ";
            cin>>g;
            cout<<"\nEnter the BASE of retangle \n";
            cin>>h;
            cout<<"\nthe area is : "<<rectangle(g,h);
        }
        break;
        case 't':
        {
            cout<<"Enter the base of the triangle\n";
            cin>>g;
            cout<<"enter the height of triangle\n ";
            cin>>h;
           cout<<"\nthe area is : "<< triangle(g,h);
        }
        break;
        case 'T':
        {
            cout<<"Enter the base of the triangle\n";
            cin>>g;
            cout<<"enter the height of triangle\n ";
            cin>>h;
           cout<<"\nthe area is : "<< triangle(g,h);
        }
        break;
        default:{cout<<"galati krte ho app\n";}
    }


}
int circle(double r)
{
    double ar;
    ar = 3.14 *(r * r);
    return ar;

}
int rectangle(double r, double p)
{
    double ar;
    ar = r * p;
    return ar;
}
int triangle(double l, double b)
{
    double ar;
    ar = (l*b)/2;
    return ar;
}