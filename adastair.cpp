#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,t,newst,c,k,i,diff;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>k;
        unsigned long long a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

            if(a[0]>k)
            {

                if(k==1)
                c=a[0]-1;
                else
                    diff=a[0];
                if(diff%k==0)
                    c=(diff/k)-1;
                else
                    c=diff/k;


            }
            if(n==1)
                cout<<c<<endl;

            else{



        for(i=0;i<n;i++)
        {

             if(k==1&&(a[i+1]-a[i]>k))
            {

                c=c+a[i+1]-a[i]-1;


            }

        else if(a[i+1]-a[i]>k){
                diff=a[i+1]-a[i];
                if(diff%k==0)
                {
                    diff=diff/k;
                    diff=diff-1;
                }
                else
                diff=diff/k;
                c=c+diff;


            }
            if(i==n-2)
                break;


        }
        cout<<c<<endl;


    }
    }
}
