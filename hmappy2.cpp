#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{

    unsigned long long int t,n,a,b,k,temp,i,c,g,l,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        temp=a*b;
        g=gcd(a,b);
        l=temp/g;
        x=n/a;
        y=n/b;
        z=(n/l)*2;
        c=x+y-z;
        if(c>=k)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
}




