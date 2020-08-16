#include<bits/stdc++.h>

using namespace std;
int min(long int a,long int b){
    if(a>b)
        return b;
    else 
        return a;
}
int max(long int a,long int b){
    if(a<b)
        return b;
    else 
        return a;
}

int check(long int a){
    if(a==2)
        return 1;
    else if(a==0)
        return 2;
    else if(a==3)
        return 2;
    else if(a==1)
        return 2;
    else if(a==4)
        return 2;
    else
        return ((a-2)/3)*2+check(a%3);
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long int a,b;
        cin>>a>>b;
        if(max(a,b)>=2*min(a,b))
            cout<<min(a,b)<<endl;
        else if(2*min(a,b)-max(a,b)==1)
            cout<<max(a,b)-min(a,b)<<endl;
        else if(min(a,b)==0)
            cout<<"0"<<endl;
        else{
            int z=max(a,b)-min(a,b)+check(2*min(a,b)-max(a,b));
            cout<<z<<endl;
        }
    }
}
