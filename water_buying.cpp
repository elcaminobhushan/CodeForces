#include<bits/stdc++.h>

using namespace std;

int main() {
  

    int t=1;
    cin>>t;
    
   
    while(t--) {
        
        long long int n,x,a,b,y;
       // int a,b;
       
        cin>>n>>a>>b;
       if(a <=b/2)
           cout<<n*a<<endl;
        else{
            if(n%2==0)
                cout<<n*b/2<<endl;
            else
            {
                cout<<((n/2)*b+a)<<endl;
            }
            
            
        }
       
    
    }
}