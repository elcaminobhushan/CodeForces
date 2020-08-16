#include<bits/stdc++.h>

using namespace std;



int main() {
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
         int a[n],b[n];
        for( int i=0;i<n;i++)
             cin>>a[i];
        b[0]=a[0];
        int k=1;
        
            for( int i=1;i<n-1;i++){
                int x,y;
                if((a[i-1]-a[i])>0)
                    x=1;
                else
                    x=-1;
                    
                if((a[i+1]-a[i])>0)
                    y=1;
                else
                    y=-1;
               int t=x*y;
                if(t>0) {
                    b[k]=a[i];
                    k++;
                    
                }
                
            }
            b[k]=a[n-1];
            k++;
        cout<<k<<endl; 
        for(long int i=0;i<k;i++)
            cout<<b[i]<<" ";
            cout<<endl;
   }
}
