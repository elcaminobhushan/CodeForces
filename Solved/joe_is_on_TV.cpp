#include<bits/stdc++.h>

using namespace std;

int main() {
    float n;
    cin>>n;
    float total=1/2;
    
    
    
    while(n>0){
        total=total+1/n;
        n--;
    }
    
    cout<<total;
    
}
