#include<iostream>
using namespace std;
int main()
{

    unsigned long long int n,k,div;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        div=n/k;
        if(div>=k && div%k==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


}
