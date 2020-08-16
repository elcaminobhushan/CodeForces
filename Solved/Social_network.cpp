#include <bits/stdc++.h>

using namespace std;
// bool prsnt(queue<int> q,int n) 
// {   bool ans=false;
//     while (!q.empty()) 
//     { 
//         if(q.front()==n){
//             ans=true;
//         }
//         q.pop(); 
//     } 
//     return ans;
//     cout << endl; 
// } 

bool prsnt(long int a[],long int m,long int n){
    long int ans=false;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            ans=true;
            i=n;
        }
    }
    return ans;
}
void done(long int b[],int k){
    for(long int i=0;i<k-1;i++){
        b[i]=b[i+1];
    }
}
int main()
{
    long int n,k;
    cin>>n>>k;
     
    long int a[n];
    for(long int i=0;i<n;i++){
        cin>>a[i];
    }
        
    long int b[k],j=0,ind=0;
    for(long int i=0;i<n && j<k;i++){
        if(!prsnt(b,a[i],j)){
            b[j]=a[i];
            j++;
            ind=i;
        }
    }
    for(long int i=ind+1;i<n ;i++){
        if(!prsnt(b,a[i],j)){
            done(b,k);
            b[k-1]=a[i];
        }
    }
    cout<<j<<endl;
    for(long int i=j-1;i>-1;i--)
        cout<<b[i]<<" ";
    
    
}
