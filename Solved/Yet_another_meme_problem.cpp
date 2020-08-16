#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
        int a,b;
        cin>>a>>b;
        b++;
        int dig=-1;
        while(b!=0){
            b /=10;
            dig++;
        }
        cout<<a*dig<<endl;
        
   }
    
}
