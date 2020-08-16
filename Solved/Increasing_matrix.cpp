#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    if(a[n-1][m-1]==0)
        a[n-1][m-1]=8000;
    for(int i=n-2;i>-1;i--){
        if(a[i][m-1]==0)
            a[i][m-1]=a[i+1][m-1]-1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=m-1;j>-1;j--){
            if(a[i][j]==0){
                a[i][j]=a[i][j+1]-1;
                
            }
        }
            
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<m;j++){
            if(a[i][j]<=a[i-1][j]){
                a[i-1][j]=a[i][j]-1;
                
            }
        }
            
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            sum +=a[i][j];
      int ans=true;
     for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]>=a[i][j+1]){
                ans=false;
                j=m;
                i=n;
            }
        }
     }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]>=a[i+1][j]){
                ans=false;
                j=m;
                i=n;
            }
        }
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]!=0)
            if(b[i][j]!=a[i][j])
                ans=false;
        }
    }
    if(ans){
        cout<<sum<<endl;
    }
    else
        cout<<"-1"<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
