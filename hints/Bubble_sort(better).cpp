Bubble sort takes O(n*n) time this algo takes less time than that because it occurs only if atleast one swap has occured or else it terminates
so for a sorted algo bubble sort will take o(n*n) time but this will take only O(n) time


bubble sort algo fixes the max element at the last in one traverse











#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;
}

int main() {
    int a[5]={16,12,1,14,45};
    int last = 3;
    bool n=true;
    while(n){
        n=false;
    for(int i=0;i<=last;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            n=true;
        }
    }     
    last--;
    }
    for(int i=0;i<5;i++)
        cout<<a[i]<<"  ";
        
}
