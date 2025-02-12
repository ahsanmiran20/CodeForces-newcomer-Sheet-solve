#include<iostream>
using namespace std;
int main()
{
    int x,i,count=0;
    cin>>x;
    for(i=2;i<x;i++)
    {
    if(x%i==0)
    {
    count++;
    break;
    }
    }
    if(count==0)
    {
    cout<<"YES"<<endl;
     }
     else
     {
     cout<<"NO"<<endl;
     }
}
