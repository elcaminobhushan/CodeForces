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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l,r;
        int ans=0,len=s.length();
        bool bol=false;
        for(int i=0;i<len;i++){
            if(s[i]=='1')
                bol=true;
            if(s[i]=='1')
                r=i+1;
            
            
        }
         for(int i=0;i<len;i++){
            
            if(s[i]=='1'){
                l=i+1;
                i=len;
            }
         }
            
        if(!bol)
            cout<<n<<endl;
        else{
            int left=2*(r);
            int right=2*(n-l+1);
            cout<<max(left,right)<<endl;
            
        }
    }
    
}
