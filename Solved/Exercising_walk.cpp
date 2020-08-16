#include<bits/stdc++.h>

using namespace std;

long int max(long int a,long int b){
    if(a>b)
        return a;
    else    
        return b;
        
}

int main() {
   int t;
   cin>>t;
   while(t--){
        long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long int x,y,x1,x2,y1,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        x1 -=x;
        x2-=x;
        y1-=y;
        y2-=y;
        long int h,g,t;
        int ans1,ans2;
        t=x2-x1;
        
        g=max(a,b);
        if(t>=g ){
            ans1=1;
        }
        else
            ans1=0;
        t=y2-y1;
        h=c+d;
        g=max(c,d);
        if(t>=g){
            ans2=1;
        }
        else
            ans2=0;
         if(ans1*ans2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
   }
}
