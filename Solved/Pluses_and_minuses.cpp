#include<bits/stdc++.h>

using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
            string s;
            cin>>s;
            int res = 0,loop=0,count=0,ind=0,count1=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='-'){
                    ind=i;
                    count1++;
                }
            }
            
            for(int i=0;i<ind;i++){
                if(s[i]=='+')
                    count +=1;
                
            }
            
            loop=count1+1-count;
            int ans=0,t=0;
            for(int i=0;i<s.length();i++){
                int c=0,size=0;
                if(s[i]=='-'){
                    ans=ans+loop-t;
                    t++;
                   // cout<<loop<<" l "<<t<<" t "<<endl;
                }
                else{
                    
                    c++;
                    size++;
                    while(c>=0 && i+1<s.length()){
                            
                        if(s[i+1]=='+'){
                            c++;
                        }
                        else if(s[i+1]=='-'){
                            c--;
                           
                        }
                       i++;
                       size++;
                            
                    }
                    
                    
                    ans=ans+(size)*(loop-t);
                    t++;
                  // cout<<size<<" s "<<loop<<" l "<<t<<"  t "<<endl;
                }
                
            }
           // cout<<endl;
            cout<<ans<<endl;
       
    }
}
