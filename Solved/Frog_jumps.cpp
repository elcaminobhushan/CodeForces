#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // s=s+'L';
        int count,j=0,max=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='L'){
            count=1;
            
            while(s[i+1]=='L'){
                count++;
                i++;
            }
            if(count>max){
                max=count;
            }
            }
        }
        if(s.length()==1 && s[0]=='L'){
            max=1;
            
        }
        cout<<max+1<<endl;
        
    }
}
