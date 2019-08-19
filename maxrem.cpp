#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;

    // To store index of next unique element
    int j = 0;

    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];

    arr[j++] = arr[n-1];

    return j;
}
int main()
{
    unsigned long long int t,n,i;


        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }



            sort(a,a+n);
              n = removeDuplicates(a, n);
           /* for(i=0;i<n;i++)
                cout<<a[i]<<endl;
                */
                if(n==1)
                    cout<<"0"<<endl;
                else


            cout<<a[n-2]<<endl;




}
