#include<bits/stdc++.h>

using namespace std;

int main() {

    long long int a,b=1,c,i=0,d;
    cin>>a;
    while(i==0){
       c=a+b;
       if(c<0)
        d=-c;
       else
        d=c;
        while(d>0 ){
            if(d%10==8 ){
                i=1;
                break;
            }
            else
                d /=10;
            
    
            
        }
        b++;
    }
   
        cout<<b-1<<endl;
    
}
