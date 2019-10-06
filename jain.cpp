#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,T;
    cin>>T;
    for(n=0;n<T;n++)
    {

        map<string,ll> m;
        m["a"]=0; m["e"]=0; m["i"]=0; m["o"]=0; m["u"]=0; m["ae"]=0; m["ai"]=0; m["ao"]=0; m["au"]=0; m["ei"]=0;
        m["eo"]=0; m["eu"]=0; m["io"]=0; m["iu"]=0; m["ou"]=0; m["aei"]=0; m["aeo"]=0; m["aeu"]=0; m["eio"]=0;
         m["eou"]=0; m["iou"]=0; m["aio"]=0; m["aiu"]=0; m["aou"]=0;
        m["eiu"]=0; m["aeio"]=0; m["aeiu"]=0; m["aiou"]=0; m["aeou"]=0; m["eiou"]=0; m["aeiou"]=0;

        ll N;
        cin>>N;
        if(N==1)
        {
            cout<<"0"<<"\n";
            break;
        }
        string str;


        for(ll k=0;k<N;k++)
        {
            cin>>str;
            set<char>s;
        ll i=0;
        while(i!=str.length())
        {
            s.insert(str[i]);
            i++;
        }
        str="";
        for(auto i=s.begin();i!=s.end();i++)
        {
            str+=*i;

        }
            (m[str])++;
        }
        ll fin1,fin21,fin22,fin31,fin32,fin3s,fin4s,fin5;
        fin1=(m["a"]*m["eiou"])+(m["e"]*m["aiou"])+(m["i"]*m["aeou"])+(m["o"]*m["aeiu"])+(m["u"]*m["aeio"]);
        fin21=(m["ae"]*(m["iou"]+m["aiou"]+m["eiou"]))+(m["ai"]*(m["eou"]+m["aeou"]+m["eiou"]))+(m["ao"]*(m["eiu"]+m["aeiu"]+m["eiou"]))+(m["au"]*(m["eio"]+m["aeio"]+m["eiou"]))+(m["ei"]*(m["aiou"]+m["aou"]+m["aeou"]));
        fin22=(m["eo"]*(m["aiu"]+m["aiou"]+m["aeiu"]))+(m["eu"]*(m["aio"]+m["aeio"]+m["aiou"]))+(m["io"]*(m["aeu"]+m["aeou"]+m["aeiu"]))+(m["iu"]*(m["aeo"]+m["aeou"]+m["aeio"]))+(m["ou"]*(m["aei"]+m["aeiu"]+m["aeio"]));
        fin31=(m["aei"]*(m["aiou"]+m["aeou"]+m["eiou"]))+(m["aeo"]*(m["aeiu"]+m["aiou"]+m["eiou"]))+(m["aeu"]*(m["aeio"]+m["aiou"]+m["eiou"]))+(m["eio"]*(m["aeiu"]+m["aeou"]+m["aiou"]))+(m["eou"]*(m["aeio"]+m["aeiu"]+m["aiou"]));
        fin32=(m["iou"]*(m["aeio"]+m["aeiu"]+m["aeou"]))+(m["aio"]*(m["aeou"]+m["eiou"]+m["aeiu"]))+(m["aiu"]*(m["aeou"]+m["eiou"]+m["aeio"]))+(m["aou"]*(m["aeio"]+m["aeiu"]+m["eiou"]))+(m["eiu"]*(m["aeio"]+m["aiou"]+m["aeou"]));
        fin3s=(m["aei"]*(m["eou"]+m["iou"]+m["aou"]))+(m["aeo"]*(m["iou"]+m["aiu"]+m["eiu"]))+(m["aeu"]*(m["eio"]+m["iou"]+m["aio"]))+(m["eio"]*(m["aiu"]+m["aou"]))+(m["eou"]*(m["aio"]+m["aiu"]))+(m["aio"]*m["eiu"])+(m["aou"]*m["eiu"]);
        fin4s=(m["aeio"]*(m["aeiu"]+m["aiou"]+m["aeou"]+m["eiou"]))+(m["aeiu"]*(m["aiou"]+m["aeou"]+m["eiou"]))+(m["aiou"]*(m["aeou"]+m["eiou"]))+(m["aeou"]*m["eiou"]);
        ll temp;
        temp=m["aeiou"]*(N-m["aeiou"]);
        fin5=m["aeiou"]*(m["aeiou"]-1);
        fin5=fin5/2;

        ll fin;
        fin=fin1+fin21+fin22+fin32+fin31+fin3s+fin4s+temp+fin5;
        cout<<fin<<"\n";


    }
}
