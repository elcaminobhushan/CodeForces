#include <bits/stdc++.h>

using namespace std;

long int dig(long int n){
    long int ans=0;
    while(n!=0){
        n /=10;
        ans++;
    }
    return ans;
}
long int num(long int d){
    long int ans=0,i=0;
    while(d--){
        ans=ans+pow(10,i);
        i++;
    }
    return ans;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
        long int n;
        cin>>n;
        long int count=0;
        long int t=num(dig(n));
        long int d=dig(n);
        while(n>=t){
            n -=t;
            count++;
        }
        cout<<(d-1)*9+count<<endl;
        
       //cout<<num(dig(2))<<endl;
   }
    
}
