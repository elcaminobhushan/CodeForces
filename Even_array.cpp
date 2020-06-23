#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--) {
        int n,e,o,e1=0,o1=1,e2=0,o2=0;
        
        cin>>n;
        int a[n]={};
        for(int i=0; i<n;i++)
            cin>>a[i];
        while(e1<n){
            if(a[e1]%2 != 0){
                e2++;
            }
            e1=e1+2;
        }

         while(o1<n){
            if(a[o1]%2 == 0){
               
                o2++;
            }
            o1=o1+2;
        }
      
        if(o2==e2)
            cout<<o2<<endl;
        else
            cout<<"-1"<<endl;
        

                
        
       
       
    }
}