#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--) {
        int n,a,b,i=0;
        cin>>a>>b>>n;
        while(a<=n && b<=n){
            i++;
            if(a>b)
                b= a+b;
            else
                a=a+b;
                
                
        }
        cout<<i<<endl;
       
    }
}