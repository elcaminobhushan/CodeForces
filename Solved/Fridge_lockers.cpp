#include <bits/stdc++.h>

using namespace std;

void prnt(int n){
    for(int i=1;i<n;i++)
        cout<<i<<" "<<i+1<<endl;
    cout<<n<<" "<<1<<endl;
}
int s(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++)
        ans=ans+a[i];
    return ans;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
        long int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n!=m)
            cout<<"-1"<<endl;
        else{
            if(n>2){
                int sum=0;
                sum=2*s(a,n);
                cout<<sum<<endl;
                prnt(n);
            }
            else
                cout<<"-1"<<endl;
        }
   }
    
}
