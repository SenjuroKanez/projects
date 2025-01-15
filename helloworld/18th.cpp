//Write a function that calculate the length of a string (using pointer)
#include <iostream>
using namespace std;
int sls(string a);
int sl(string a);
int main()
{
    string a;
    cout<<" Enter a string\n ";
    getline(cin, a);
    cout<<"App ki is tehreer me: "<<sl(a)<<" :haroof he"; 
    cout<<"\nApp ki is tehreer me: "<<sls(a)<<" :bagair space ke haroof he"; 
}
int sl(string a){
    int j = 0;
    for( char w : a  )
    {
        j++;
    }
    return j;
}
int sls(string a){
    int j = 0;
    for(char l : a)
    {
        if (l != ' '){
        j++;
        }
    }
    return j;
}