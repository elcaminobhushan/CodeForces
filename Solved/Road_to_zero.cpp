#include<bits/stdc++.h>

using namespace std;

long long int min(long long int a,long long int b){
    if(a>b)
        return b;
    else
        return a;
}
long long int max(long long int a,long long int b){
    if(b>a)
        return b;
    else
        return a;
}
long long int find(long long int x,long long int y,long long int a,long long int b){
     long long int dol=0;
    
       if(b<2*a)
            dol=b*min(x,y)+(max(x,y)-min(x,y))*a;
        else
            dol=(x+y)*a;
        
        
    return dol;
}

int main() {
    int t;
    cin>>t;
    while(t--){
       long long int x,y;
       cin>>x>>y;
       long long int a,b;
       cin>>a>>b;
        
    if(x*y>0){
       cout<<find(x,y,a,b)<<endl;
    }
        
    else if(x==0 || y==0){
        if(x==0)
            cout<<abs(y*a)<<endl;
        else
            cout<<abs(x*a)<<endl;
    } 
    else{
        if(x<0 )
            cout<<find(-x,y-2*x,a,b)<<endl;
        else {
             cout<<find(x-2*y,-y,a,b)<<endl;
        }
        
    }
        
    }
}
