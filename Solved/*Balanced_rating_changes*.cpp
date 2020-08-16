#include <bits/stdc++.h>

using namespace std;
int sum(int c[],int n){
    int tot=0;
    for(int i=0;i<n;i++)
        tot +=c[i];
    return tot;
}
int main()
{

    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
        b[i]= a[i]/2;
        d[i]=b[i];
        if(a[i]%2!=0 && (a[i]!=1 || a[i]!=-1)){
            if(b[i]>0)
            c[i]=1;
            else
                c[i]=-1;
        }
        else
            c[i]=0;
            
        if(a[i]==1 )
                c[i]=1;
        else if(a[i]==-1 )
                c[i]=-1;
    }
    
    
    int s=sum(b,n);
    //cout<<s<<endl;
    int i=-1;
    int g=abs(s);
    while(g>0){
        i++;
        if(s>0){
        while(c[i]!=-1 )
            i++;
        b[i]--;
        g--;
        }
        else{
             while(c[i]!=1 )
                i++;
        b[i]++;
        g--;
        }
    }
        
    for(int i=0;i<n;i++)
        cout<<b[i]<<endl;
        
    
}
