//asssume all numbers are prime
for ex if n=15
2 3 4 5 6 7 8 9 10 11 12 13 14 15
are prime so all prime[k]=1
then strt from 2 and struck all its multiples similarly for 3 upto sqrt(n)

struck means set primes [i*j]==0

all the 1s are prime thus


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    n=n+1;
    int primes[n+1]={1};
     for(int k=0;k<n;k++)
        primes[k]=1;
        
          
    
    for(int i=2;i<=sqrt(n);i++){
        for(int j=2;i*j<n;j++){
            primes[i*j]=0;
        }
    }
    for(int k=2;k<n+1;k++){
            if(primes[k]==1)
            cout<<k<<" ";
    }
}
