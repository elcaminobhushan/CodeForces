#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n],h[n]={0},l=0,k=1;
    for(int i=0; i<n;i++)
        cin>>a[i];
    int height=1,len=0,x=1,y;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
                h[i]++;
            
                
        }
    }    
    
   for(int i=0;i<n;i++){
        if(h[i]>h[i+1])
            height=h[i];
   }
    while(k<height+1){
        l=0;
        for(int i=0;i<n;i++){
            if(h[i]==k)
                l++;
        }
        len=len+l/k;
       
        k++;
    }
    
    
    
    cout<<height<<" "<<len<<endl;
    
}
