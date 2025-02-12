#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
        {
    long long int fact=1;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
     }
     cout<<fact<<endl;
     }
}
