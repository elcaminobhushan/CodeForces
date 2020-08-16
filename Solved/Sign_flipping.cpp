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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                if(a[i]<0)
                    a[i]= -a[i];
            }
            else{
                if(a[i]>0)
                    a[i]= -a[i];
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
   }
}
