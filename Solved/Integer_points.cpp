#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
            cin>>b[i];
        
        int odd1=0,odd2=0,even1=0,even2=0;
        for(int i=0;i<n;i++){
            if(a[i]%2 == 0)
                even1++;
            else
                odd1++;
        }
        for(int i=0;i<m;i++){
            if(b[i]%2 == 0)
                even2++;
            else
                odd2++;
        }
        cout<<odd1*odd2+even1*even2<<endl;
        
    }
    
    
}
