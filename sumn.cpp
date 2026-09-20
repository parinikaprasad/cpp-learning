#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;   
    }
    cout<<"sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;   
}