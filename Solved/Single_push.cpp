#include<bits/stdc++.h>

using namespace std;

bool check(int a[],int b[],int n){
    bool ans=true;
     for(int i=0;i<n;i++){
        if(a[i]!=b[i])
            ans=false;
     }
     return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n],b[n];
      int l=0,r=0;
      for(int i=0;i<n;i++)
        cin>>a[i];
      for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=i+1;
            i=n-1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i+1;
            i=0;
        }
    }
    // cout<<l<<r<<"  "<<endl;
    int k=b[l-1]-a[l-1];
    if(k>=0){
        for(int i=l-1;i<r;i++){
        
            a[i] +=k;
         }
    }
    
    // for(int i=0;i<n;i++)
    //     cout<<a[i];
    //     cout<<endl;
    //  for(int i=0;i<n;i++)
    //     cout<<b[i];
    //     cout<<endl;
        
        
    if(check(a,b,n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }   
    
}
