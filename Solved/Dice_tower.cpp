#include<bits/stdc++.h>

using namespace std;



int main() {
    long long int n;
    cin>>n;
    long long int a[n],z=0;
    for(long long int i=0;i<n;i++)
        cin>>a[i];
    for(long long int i=0;i<n;i++){
        z=(a[i]-1)/14;
        if(a[i]>14*z && 14*z+7>a[i] && z>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    
}
