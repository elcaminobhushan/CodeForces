#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    k=4*((n+1)/2)+1+3*(1-n%2);
    cout<<k<<endl;
    // int g=0;
    // if(n%2==0)
    //     g=2;
    // else
    //     g=1;
    if(n!=1){
    for(int i=1;i<=(n+1)/2;i++)
        cout<<i<<" "<<"0"<<endl;
    for(int i=0;i<(n+1)/2+2;i++)
        cout<<i<<" "<<"1"<<endl;
    for(int i=0;i<n/2+2;i++)
        cout<<i<<" "<<"2"<<endl;
    for(int i=1;i<=n/2;i++)
        cout<<i<<" "<<"3"<<endl;
    }
    else{
        for(int i=1;i<=(n+1)/2;i++)
        cout<<i<<" "<<"0"<<endl;
    for(int i=0;i<(n+1)/2+2;i++)
        cout<<i<<" "<<"1"<<endl;
    
        cout<<"1"<<" "<<"2"<<endl;
    
    }
    
}
