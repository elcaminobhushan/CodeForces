#include<bits/stdc++.h>

using namespace std;

char add(char a,char b){
    if(a=='a'){
        if(b=='a')
            return 'b';
        else if(b=='b')
            return 'c';
        else if(b=='c')
            return 'b';
        else
            return 'b';
        
    }
    
    else if(a=='b'){
        if(b=='a')
            return 'c';
        else if(b=='b')
            return 'c';
        else if(b=='c')
            return 'a';
        else
            return 'c';
    }
    
    else if(a=='c'){
        if(b=='a')
            return 'b';
        else if(b=='b')
            return 'a';
        else if(b=='c')
            return 'a';
        else
            return 'a';
    }
    else if(a=='?'){
        if(b=='a')
            return 'b';
        else if(b=='b')
            return 'a';
        else if(b=='c')
            return 'a';
        else
            return 'a';
    }
    else
        return 'a';
}
char add1(char a){
    if(a=='a')
        return 'b';
    else if(a=='b')
        return 'c';
    else if(a=='c')
        return 'a';
    else if(a=='?')
        return 'a';
    else
        return 'a';
}

bool check(string s){
    bool ans=true;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])
            ans=false;
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       for(int i=1;i<s.length()-1;i++){
           if(s[i]=='?'){
               s[i]=add(s[i-1],s[i+1]);
           }
       }
       if(s[0]=='?')
            s[0]=add1(s[1]);
        if(s[s.length()-1]=='?')
            s[s.length()-1]=add1(s[s.length()-2]);
        
        if(check(s))
            cout<<s<<endl;
        else
            cout<<"-1"<<endl;
        
    }   
    
}
