#include<bits/stdc++.h>

using namespace std;

bool search(int a[],int m,int i){
    bool ans=false;
    for(int j=0;j<i;j++ ){
        if(a[j]==m){
            ans=true;
            j=i-1;
        }
            
            
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
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        bool ans=true;
        bool oP=false;
        for(int i=0;i<n;i++){
            
            if(a[i]!=b[i]){
                    oP=search(a,1,i)+search(a,-1,i);
                    if(!oP){
                        if(b[i]>a[i])
                            ans=search(a,1,i);
                        else
                            ans=search(a,-1,i);
                        
                        if(!ans)
                            i=n-1;
                    }
                    else{
                        ans=true;
                        i=n-1;
                    }                
            }
        }
        
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
   }
}
