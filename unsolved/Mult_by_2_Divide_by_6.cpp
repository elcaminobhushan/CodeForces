#include <iostream>

using namespace std;
int exp(int a){
    if(a==0)
        return 1;
    else
        return 6*exp(a-1);
}
int check(int a){
    int i=0;
    while(a>exp(i)){
        i++;
    }
    return i;
    
}

int main() {
   int t;
   cin>>t;
   
   while(t--){
       long int n,ans=0;
       cin>>n;
       int pow=check(n);
       
       int t=exp(pow)/n;
       
       int abc=2;
       while(abc<t){
            abc *=2;
            ans++;
       }
       cout<<pow<<"   "<<t<<"  "<< ans<<"   "<<abc<<endl;
       if(abc==t)
            cout<<pow+ans<<endl;
        else
            cout<<-1<<endl;
       
   }
    
    
}
