#include<bits/stdc++.h>

using namespace std;

int min(int a,int b){
    if(a>b)
        return b;
    else    
        return a;
        
}
bool present(int a[],int b,int n){
    bool ans=false;
    for(int i=0;i<n;i++){
        if(a[i]==b)
            ans=true;
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
        for(int i=0;i<n;i++)
            cin>>a[i];
        int e[n],o[n],j=0,k=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                e[j]=a[i];
                j++;
            }
            else{
                o[k]=a[i];
                k++;
            }
                
        }
        if(j%2==0)
            cout<<"YES"<<endl;
        else{
            bool ans=false;
            for(int i=0;i<k;i++)
                o[i]++;
            for(int i=0;i<k;i++){
                if(present(e,o[i],j)){
                    ans=true;
                    i=k-1;
                }
            }
                
            for(int i=0;i<k;i++)
                o[i] -=2;
            for(int i=0;i<k;i++){
                if(present(e,o[i],j)){
                    ans=true;
                    i=k-1;
                }
            }
            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
        
        
        
    }
}
