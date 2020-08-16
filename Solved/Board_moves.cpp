#include <iostream>


using namespace std;


int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        if(n>1){
        long long int a=(n*n-1)/2;
        
        long long int b[n/2];
        for(long long int i=0 ;i<n/2 ;i++){
            b[i]=(2*i+1);
        }
        
        
        for(long long int i=0 ; i<=(n-3)/2 ; i++){
            b[i] *=i+1;
        }
            
        
        
        for(long long int i=0 ; i<n/2 ; i++){
            b[i+1] +=b[i];
        }
            
        cout<<a+4*b[(n-3)/2]<<endl;
        }
        else
            cout<<"0"<<endl;
        
            
            
    }
}
