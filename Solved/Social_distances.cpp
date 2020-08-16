#include<bits/stdc++.h>

using namespace std;




int main() {
   int t;
   cin>>t;
   while(t--){
        int n,k;
        cin>>n>>k;
        string t,s;
        cin>>t;
        s=t;
        if(s[0]=='0'){
            int j=1;
            bool put=true;
            while(j<=k && put){
                
                if(s[j]=='1')
                    put=false;
                j++;
                    
            }
            if(put)
                s[0]='1';
        }
        for(int i=0;i+k+1<n;i++){
            if(s[i]=='1'){
                 int j=1;
                bool put=true;
                while(j<=2*k+1){
                    if(s[j]=='1')
                     put=false;
                     j++;
            }
            if(put)
                s[i+k+1]='1';
            }
        }
        int totals=0,totalt=0;
        for(int i=0;i<n;i++){
            
            int is = s[i] - '0';
            int it = t[i] - '0';
            totals=totals+is;
            totalt=totalt+it;
        }
        cout<<totals-totalt<<endl;
   }
}
