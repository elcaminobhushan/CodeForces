#include<bits/stdc++.h>

using namespace std;


void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
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
        
            
        bool swapped=true;
        while(swapped){
            for(int i=0;i<n;i++)
            b[i]=a[i];
            for(int i=0;i<n;i++)
            b[i]= b[i]-i;
            
            swapped=false;
            
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    if( b[i]==b[j]){
                        swap(a[i],a[j]);
                        swapped=true;
                    }
                
                }
            } 
            
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
            
    }    
}
