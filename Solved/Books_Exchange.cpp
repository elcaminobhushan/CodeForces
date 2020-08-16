#include<bits/stdc++.h>

using namespace std;


int check(int a[],int n,int i){
    int ind=1,t=i;
    while((i+1)!=a[t]){
        ind++;
        t=a[t]-1;
    }
    return ind;
}

int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
      cout<<check(a,n,i)<<" "; 
      
      cout<<endl;
    }
    
}
