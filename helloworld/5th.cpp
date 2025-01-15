#include<iostream>
using namespace std;
main( )
{
int s[2][2];
int i, j;
cout<<"\n2D Array Input:\n";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"\ns["<<i<<"]["<<j<<"]= ";
cin>>s[i][j];
}
}
cout<<"\nThe 2-D Array is:\n";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<"\t"<<s[i][j];
}
cout<<endl;
}
}
