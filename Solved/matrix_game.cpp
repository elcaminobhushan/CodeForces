#include<bits/stdc++.h>

using namespace std;

int min(int a,int b){
    if(a>b)
        return b;
    else    
        return a;
        
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int row=n,col=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    row--;
                    j=m-1;
                }
                    
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[j][i]==1){
                    col--;
                    j=m-1;
                }
                    
            }
        }
        if(min(row,col)%2==0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;
        
    }
}
