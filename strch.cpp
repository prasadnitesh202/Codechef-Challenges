#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    unsigned long long int t,n,i,focc,ms,sum,d,j,si,l,flag;

    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        int a[n];
        char c[n];
        char x;

        cin>>c>>x;
        //cout<<c;
        j=0;
        for(i=0;i<n;i++)
        {
            if(c[i]==x)
                {
                    a[j]=i;
                    j++;
                    flag=1;

                }
        }


       // size_t found = str.find(str1);
         if (flag==0){
            cout<<"0"<<endl;
            continue;
         }

        else{
                focc=a[0];
                si=0;
                sum=0;
                for(i=0;i<j;i++)
                {
                    l=abs(n-si);
                    d=abs(focc-si);
                    sum=sum+(abs(l-d)*(d+1));
                    //cout<<sum<<endl;
                    focc=a[i+1];
                    si=a[i]+1;
                }
        }
        cout<<sum<<endl;
         }


         }



