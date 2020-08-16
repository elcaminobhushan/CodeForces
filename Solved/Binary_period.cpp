#include<bits/stdc++.h>

using namespace std;
bool period1(string s){
    
    bool ans=true;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1])
            ans=false;
    }
    return ans;
}

bool period2(string s){
    bool ans=true;
     for(int i=0;i<s.length()-2;i++){
        if(s[i]!=s[i+2])
            ans=false;
    }
    return ans;
}
char add(char a){
    if(a=='0')
        return '1';
    else
        return '0';
}

int main() {
   int t;
   cin>>t;
   while(t--){
        string t,s;
        cin>>t;
        if(period1(t) || period2(t))
            cout<<t<<endl;
        else{
            for(int i=0;i<t.length()-1;i++){
                s +=t[i];
                if(t[i]==t[i+1]){
                    
                    s += add(t[i]);
                }
            }
            //cout<<t[t.length()]<<"  }| "<<endl;
            s=s+t[t.length()-1];
            cout<<s<<endl;
        }
        
   }
}
