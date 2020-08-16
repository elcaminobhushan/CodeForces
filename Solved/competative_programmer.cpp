#include<bits/stdc++.h>

using namespace std;



int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        bool zero=false;
        int ind=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zero=true;
                ind=i;
            }
        }
        
        int div2=0 ,div3=0;
        if(zero){
            for(int i=0;i<ind;i++){
                 int y=(s[i])-'0';
                if(y%2==0)
                    div2=1;
            }
            for(int i=ind+1;i<s.length();i++){
               int y=(s[i])-'0';
                if(y%2==0)
                    div2=1;
            }
            int l=0;
             for(int i=0;i<s.length();i++)
                l=l+(s[i]-'0');
                
             if(l%3==0)
                div3=1;
                
                if(div2== 1 && div3==1)
                    cout<<"red"<<endl;
                else    
                    cout<<"cyan"<<endl;
        }
        else
            cout<<"cyan"<<endl;
    }
    
}
