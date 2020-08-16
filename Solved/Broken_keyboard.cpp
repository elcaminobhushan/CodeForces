#include<bits/stdc++.h>

using namespace std;

bool present(string s,char a){
    bool ans=false;
    for(int i=0;i<s.length();i++){
        if(s[i]==a)
            ans=true;
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s,z;
        cin>>s;
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]!=s[i]){
                z=z+s[i];
                
            }
            else
                i++;
        }
        if(s[s.length()-1]!=s[s.length()-2])
            z=z+s[s.length()-1];
        string h;
        for(int i=0;i<z.length();i++){
            if(!present(h,z[i]))
                h=h+z[i];
        }
         int g[h.length()];
        for(int i=0;i<h.length();i++){
            g[i]=h[i]-97;
        }
        
        sort(g,g +h.length());
        
        for(int i=0;i<h.length();i++){
             char abc='a'+g[i];
             cout<<abc;
        }
        cout<<endl;
    }
}
