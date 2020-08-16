#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        long long d=a*n;
        bool ans=false;
        if((d+b)>=s){
                long int div=s/n;
                long long int z=div*n;
                if(s-(z)>=0){
                    if(z+b>=s)
                        ans=true;
                    
                }
            
            if(ans)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
                    
        
        }
        else
            cout<<"NO"<<endl;
    }   
    
}
