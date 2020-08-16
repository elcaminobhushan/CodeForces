#include <bits/stdc++.h>

using namespace std;
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n],c[n];
        int j=0,k=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                c[k]=a[i];
                k++;
            }
            else{
                b[j]=a[i];
                j++;
            }
        }
       if(x%2==0){
           k--;
           j--;
           
       }
       else{
           k--;
           
       }
       
        int ans1=0,ans2=1;
        if(k==-1)
        cout<<"NO"<<endl;
        else{
            if(x%2==0){
               if((j/2+k/2)>x-3)
                    ans1=1;
            }
            else{
               if((j/2+k/2)>x-2)
                    ans1=1;
            }
        
            if(ans1*ans2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        } 
        
    }
}
