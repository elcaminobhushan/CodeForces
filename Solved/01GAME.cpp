#include <iostream>
#include <stack>

using namespace std;
int min(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}

int main() {
   int t;
   cin>>t;
   
   while(t--){
       
       string s;
       cin>>s;
       int no0=0,no1=0;
       for(int i=0;i<s.length();i++){
            if(s[i]=='0')
                no0++;
            else
                no1++;
       }
       int steps =min(no0,no1);
       if(steps%2 == 0)
        cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
   }    
}
