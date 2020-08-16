#include<bits/stdc++.h>

using namespace std;
bool mult(int a){
    int t=a;
    bool ans;
    while(t%2==0){
        t=t/2;
    }
    if(t==1)
        ans=true;
    else
        ans= false;
        
    return ans;
    
}
int primes(int n){
    int total=0;
    for(int i=1; 2*i+1<n;i++){
        int t=2*i+1;
        int z=n;
        while(z%t==0){
            total++;
            z=z/t;
        }
    }
    return total;
}

int main() {
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        int count=0;
        if(n%2!=0 && n!=1)
            count=1;
        else if(n==1)
            count=0;
        else if(n==2)
            count=1;
        else{
           
               if(mult(n)){
                   count =0;
                   
               }
               else{
                   if(n%4==0){
                       count=1;
                       
                   }
                   else{
                       if(primes(n)>1)
                            count=1;
                        else
                            count=0;
                   }
               
               }
            
            
            
        }
         
        if(count%2==0)
            cout<<"FastestFinger"<<endl;
        else
            cout<<"Ashishgup"<<endl;
   }
}
