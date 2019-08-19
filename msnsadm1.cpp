#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      int a[n];
      int b[n];
      int c[n];
      for(i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]*20;
      }
      for(i=0;i<n;i++){
        cin>>b[i];
        b[i]=b[i]*10;
      }
      for(i=0;i<n;i++){
        c[i]=a[i]-b[i];
        if(c[i]<0)
        c[i]=0;

      }
      sort(c,c+n);
      cout<<c[n-1]<<endl;




    }

}
