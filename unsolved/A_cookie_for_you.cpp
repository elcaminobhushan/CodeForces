#include<bits/stdc++.h>

using namespace std;

int find(long long a,long long b,long long n,long long m){
    int ans=0;
    if(n==0){
        if(a>b){
            if(b>=m)
                ans=1;
        }
        else{
            if(a>=m)
                ans=1;
        }
            
            
    }
    else if(m==0){
        if(a+b>=n){
            ans=1;
        }
    }
    return ans;
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,n,m;
        cin>>a>>b>>n>>m;
        long int d=1000*1000;
        if((a+b)>=(n+m)){
        
        
        
            while(a>=0 && b>=0 && n>0 && m>0){
            if(a>b){
                if(n>m){
                    n -=m;
                    a -=m;
                }
                else{
                    m -=n;
                    b -=n;
                }
            }
            else{
                if(a<=b){
                    if(n>m){
                        n -=m;
                        b -=m;
                    }
                else{
                    m -=n;
                    a -=n;
                }
            }
            }
            
            }
            if(find(a,b,n,m)==1)
                cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
        
        else
            cout<<"NO"<<endl;
        
    
}
}
