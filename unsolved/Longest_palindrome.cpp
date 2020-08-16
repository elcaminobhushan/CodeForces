#include<bits/stdc++.h>

using namespace std;
int pal(string a,string b,int m){
        int i=0;
        while(a[i]==b[m-1-i] && i<m) 
            i++;
        
        if(i!=m)
            return 0;
        else
            return 1;
            
    
}

int same(string a,int m){
    if( m%4==0){
        int ans=1;
       for(int i=0;i<m;i++)
            if(a[i]!=a[m-1-i])
                ans=0;
        
        if(ans ==0)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}
int main() {

    int n,m;
    cin>>n>>m;
    string a[n],s;
    string b[n*m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int i=0,j,k=0;
    
    while(i<n){
        j=i+1;
        while(j<n){
            
            if(pal(a[i],a[j],m)==1){
                b[k]=a[i];
            
            k++;
            }
            
            j++;
        }
        i++;
    }
    
    int l=0,len;
    len=2*k*m;
    int len1=len;
    string a1,b1;
    for(int i=0;i<k;i++){
        
        s=s+b[i];
        
    }
    
     for(int i=k-1-l;i>=0;i--){
        
        for(int j=0;j<m;j++){
        
        s=s+b[i][m-1-j];
        }
    }
    
    
    string fin;
    for(int i=len/2-m/2;i<len/2+m/2;i++)
        fin=fin+s[i];
    
    int z=0;
      for(int i=0;i<n;i++){
          if(a[i]==fin){
            z=1;
            len=len +m;
          }
      } 
      for(int i=0;i<n;i++){
    if(same(a[i],m)==1){
        len =len+m;
    }
      }
      cout<<len<<endl;
      
    for(int i=0;i<len1/2;i++)
        cout<<s[i];
    if(z==1)
        cout<<fin;
    for(int i=0;i<n;i++){
    if(same(a[i],m)==1){
        cout<<a[i];
    }
    }
    for(int i=len1/2;i<len1;i++)
        cout<<s[i];
    
    
}

