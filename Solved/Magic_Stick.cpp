#include<bits/stdc++.h>

using namespace std;

void spell1(long long int &a){
    if(a%2==0)
        a=(a*3)/2;
    else
        a=3;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        long long int x,y,k;
        bool fall=true;
        cin>>x>>y;
        
        if(x>=y)
            cout<<"YES"<<endl;
        else{
            
                while(x<y && fall){
                    if(x%2!=0)
                         x--;
                    spell1(x);
                    k=x;
                    spell1(k);
                    
                    if(x==k)
                        fall=false;
                }
                if(x>=y)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
           
        }
    }   
    
}
