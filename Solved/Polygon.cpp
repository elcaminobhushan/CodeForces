#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        string a[n];
        int t=n;
        int i=0;
        while(t--){
            cin>>a[i];
            i++;
        }
        
       
        bool ans=true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(a[i][j]=='1'){
                    if(a[i][j+1]=='0' && a[i+1][j]=='0'){
                        //cout<<i<<" "<<j<<" "<<endl;
                        ans=false;
                        j=n;
                        i=n;
                    }
                }
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
