#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long t,bit,nibble,byte,c,r,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        r=n/26ull;
        if(n%26==0)
            r=r-1;
        c=pow(2,r);


        n=n-(26*r);
        if(n<=2){
        bit=c;
        nibble=0;
        byte=0;}
        else if(n<=10){
        nibble=c;
        byte=0;
        bit=0;}
        else{
        byte=c;
        bit=0;
        nibble=0;}
    cout<<bit<<" "<<nibble<<" "<<byte<<endl;
    }


    }

