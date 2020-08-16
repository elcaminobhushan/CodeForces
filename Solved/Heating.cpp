#include<bits/stdc++.h>

using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        int c,s;
        
        cin>>c>>s;
        int a[c];
        if(s>=c){
            for(int i=0;i<c;i++)
                a[i]=s/c;
            
            for(int i=0;i<s%c;i++)
                a[i]++;
            for(int i=0;i<c;i++)
                a[i]=a[i]*a[i];
            for(int i=0;i<c-1;i++)
                a[i+1]=a[i+1]+a[i];
            cout<<a[c-1]<<endl;
                
        }
        else{
            cout<<s<<endl;
        }
    }   
    
}
