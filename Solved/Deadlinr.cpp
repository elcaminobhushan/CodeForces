#include <bits/stdc++.h>

using namespace std;


int main()
{
   int t;
   cin>>t;
   while(t--){
        long long int n,d;
        cin>>n>>d;
        if(d<=n)
            cout<<"YES"<<endl;
        else if(n<d && n*n>d ){
           long long int t=(n+1)*(n+1)-4*d;
            if(t>-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
   }
    
}
