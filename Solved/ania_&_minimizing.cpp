#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,k;
    cin>>n>>k;
    long int t;
    cin>>t;
    long int a[n],i=n-1;
    if(n!=1){
        while(i>-1){
            a[i]=t%10;
            t /=10;
            i--;
        }
    // for(long int i=0;i<n;i++)
    //     cout<<a[i];
    //     cout<<endl;
        i=0;
        if(a[0]==1)
            i++;
    
        while(k>0 && i<n){
            if(a[i]!=0){
                a[i]=0;
                k--;
            }
            i++;
        }
        if(a[0]==0)
            a[0]=1;
        for(long int i=0;i<n;i++)
            cout<<a[i];
    }
    else
        cout<<"0"<<endl;
}
