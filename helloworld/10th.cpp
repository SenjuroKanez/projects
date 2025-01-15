#include <iostream>
using namespace std;
void a();
void b();
void c();
void d();
void e();
int main()
{
    cout<<"1 ";
    a();
    b();
    c();
    return 0;
}
void a()
{
    cout << " 2 ";
    d();
}
void b()
{
    cout <<" 3 ";
    e();
}
void c()
{
    cout << " 4 ";

}
void d()
{
    cout << " 5 ";
}
void e()
{
    cout << " 6 ";
}