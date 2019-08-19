#include<iostream>
using namespace std;
int main()
{
int t,p,q,z,r;
cin>>t;
while(t--)
{
cin>>p>>q>>r;
z=(p+q)/r;
if(z%2==0)
cout<<"CHEF"<<endl;
else
cout<<"COOK"<<endl;
}
}

