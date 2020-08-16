#include <bits/stdc++.h>

using namespace std;
int min(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
        int n,s,k;
        cin>>n>>s>>k;
        int a[k],ind=0;
        bool ans=false;
        for(int i=0;i<k;i++){
            cin>>a[i];
            if(a[i]==s){
                ans=true;
                ind=i;
            }
        }
        
        int x=0,y=0;
        if(!ans){
            cout<<"0"<<endl;
        }
        else{
            
            sort(a,a+k);
            
            for(int i=0;i<k;i++){
                if(a[i]==s)
                    ind=i;
            }
            //cout<<endl<<endl;
            int i=0;
            while(a[ind+i]==a[ind]+i  && ind +i <k){
                x++;
                i++;
            }
            i=0;
            while(a[ind-i]==a[ind]-i  && ind-i>=0){
                y++;
                i--;
            }
            if(a[ind+x-1]==n)
                x=n+1;
            if(a[ind+x]==a[k-1])
                x++;
            if(a[ind-y+1]==1)
                y=n+1;
             if(a[ind-y]==a[0])
                y++;
        cout<<min(x,y)<<endl;
        }
   }
    
}
