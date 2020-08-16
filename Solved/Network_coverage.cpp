https://codeforces.com/contest/1373/problem/F








#include<bits/stdc++.h>

using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        
        int min=0;
        for(int i=0;i<n-1;i++){
            if(b[min]<b[i])
                min=i;
        }
        if(a[n-1]<a[min])
            min=n-1;
        for(int i=min;i<n-1;i++){
            if(a[i]<=b[i]){
                if(a[i]>=0)
                    a[i+1]=a[i+1]-b[i]+a[i];
                else
                    a[i+1]=a[i+1]-b[i];
                a[i]=0;
                
            }
            else{
                a[i]=a[i]-b[i];
            }
        }
        if(a[n-1]<=b[n-1]){
                 if(a[n-1]>=0)
                    a[0]=a[0]-b[n-1]+a[n-1];
                else
                     a[0]=a[0]-b[n-1];
                a[n-1]=0;
            }
            else{
                a[n-1]=a[n-1]-b[n-1];
            }
        for(int i=0;i<min;i++){
             if(a[i]<=b[i]){
                
                if(a[i]>=0)
                    a[i+1]=a[i+1]-b[i]+a[i];
                else
                    a[i+1]=a[i+1]-b[i];
                
                a[i]=0;
            }
            else{
                a[i]=a[i]-b[i];
            }
            
        }
        bool ans=true;
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<"  ";
        //     cout<<endl;
       for(int i=0;i<n;i++){
            if(a[i]>0)
                ans=false;
    }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}
