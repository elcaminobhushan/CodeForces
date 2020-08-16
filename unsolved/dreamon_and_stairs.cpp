#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    int steps,res,z=1,l;
    steps=n/2+n%2;
    l=m;
    if(steps<m)
        res=-1;
    else if(steps == m)
        res=steps;
    else{
        while(steps>l){
             l=m;   
             l*=z;
            z++;
        }
        res=l;
    }
    cout<<res<<endl;
}
