#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n-1;i++){
        swap(a[i],a[i+1]);
    }
    
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    
    
}
