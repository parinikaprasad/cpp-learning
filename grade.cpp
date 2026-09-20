#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter students marks: ";
    cin>>m;
    if(m>=90)
    {
        cout<<"A grade"<<endl;
    }
    else 
    if(m>=75)
    {
        cout<<"B grade"<<endl;
    }
    else 
    if(m>=50)
    {
        cout<<"C grade"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    return 0;
}