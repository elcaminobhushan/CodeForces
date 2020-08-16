#include <bits/stdc++.h>

using namespace std;



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
            if(a[i]%x==0){
                c[k]=a[i];
                k++;
            }
            else{
                b[j]=a[i];
                j++;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+a[i];
        
        if(sum% x ==0){
            if(j>0)
                cout<<n-1<<endl;
            else
                cout<<"-1"<<endl;
        }
        else
            cout<<n<<endl;
        
        
    }
}
