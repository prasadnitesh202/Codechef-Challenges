#include<iostream>
using namespace std;
int main()
{
    int n,m,t,s,c,i;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        s=2*n;
        int a[s];
        for(i=0;i<s;i++)
            cin>>a[i];
        for(i=0;i<s;i+=2)
        {
            if(a[i+1]-a[i]>5)
                c++;

        }
        cout<<c<<endl;
    }
}
