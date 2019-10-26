#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    cout<<"1"<<endl;
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 or j==i)cout<<i;
            else cout<<"0";
        }
        cout<<endl;
    }
}
