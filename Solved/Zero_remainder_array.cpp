#include<bits/stdc++.h>

using namespace std;

void heapify(long long int arr[], long long int n, long long int i) 
{ 
    long long int largest = i; // Initialize largest as root 
    long long int l = 2*i + 1; // left = 2*i + 1 
    long long int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(long long int arr[], long long int n) 
{ 
    // Build heap (rearrange array) 
    for (long long int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (long long int i=n-1; i>0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
  
int main() {
   int t;
   cin>>t;
   while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%k!=0)
                a[i]=k-a[i]%k;
            else
                a[i]=0;
        }
       heapSort(a, n); 
        // cout<<" b "<<endl;
        //  for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        //     cout<<endl;
       // cout<<" a "<<endl;
        long long int z=0;
        while(z<n){
            long long int t=z;
            if(a[z]!=0){
                while(a[t]==a[z+1]){
                    a[z+1]=k*(z-t+1)+a[z+1];
                    z++;
                }
            }
            z++;
        }
        heapSort(a, n); 
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        //     cout<<endl;
        if(a[n-1]!=0)
            cout<<a[n-1]+1<<endl;
        else
            cout<<"0"<<endl;
   }
}
