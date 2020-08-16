#include<bits/stdc++.h>

using namespace std;


int main() {
   int t;
   cin>>t;
   while(t--){
        long int n,x,m;
        cin>>n>>x>>m;
        
        int a[2*m];
        for(long long int i=0;i<2*m;i++)
            cin>>a[i];
        long long int left=0,right=0;
            
        long long int i=0;
        while(i<2*m){
            if(a[i]<=x && x<=a[i+1] ){
                if(a[i]<left || left==0)
                    left=a[i];
                if(a[i+1]>right || right==0)
                right=a[i+1];
            }
            if(a[i]<left &&a[i+1]>=left)
                left=a[i];
            if(a[i+1]>right && a[i]<=right)
                right=a[i+1];
          //cout<<left<<" l "<<right<<" r "<<endl;
            i +=2;
        }
        cout<<right-left+1<<endl;
        
   }
}
