#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

bool pos(int b[],int i,int j){
    if(b[i]!=b[j])
        return true;
    else
        return false;
    
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
        bool put=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    swap(b[j],b[j+1]);
                    if(!pos(b,j,j+1))
                        put=pos(b,j,j+1);
                    
                }
            }
        }
        if(put)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
   }
}
