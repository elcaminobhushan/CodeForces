#include<bits/stdc++.h>

using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        long int n,ans=0;
        cin>>n;
        while(n>1){
            int i=0;
            long int sol=0;
            while(n>=sol){
                i++;
                sol=(i*(3*i+1))/2;
                
            }
            
            n=n-((i-1)*(3*i-2))/2;
           
            ans++;
        }
        cout<<ans<<endl;
       
    }
}
