#include<bits/stdc++.h>

using namespace std;

int main() {

    long long int n;
    cin>>n;
   long int ways=0;
    if(n%4 == 0)
        ways=-1;
    if(n%2 == 0)
        ways=ways+n/4;
    else 
        ways=0;
    
    cout<<ways<<endl;
}
