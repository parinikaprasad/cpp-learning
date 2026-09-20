#include<iostream>
using namespace std;
int main()
{
    int n,dig,rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10 +dig;
        n=n/10;
    }
    cout<<"Reverses form of "<<n<<" is "<<rev<<endl;
    return 0;
}