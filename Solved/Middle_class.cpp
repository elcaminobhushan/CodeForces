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
        long long int n,x;
        cin>>n>>x;
        long long int a[n];
        for(long long int i=0;i<n;i++)
            cin>>a[i];
            
         long  long int total=0;
        for(long long int i=0;i<n;i++){
            total +=a[i];
        }
        
            
        heapSort(a, n); 
        
        long long int j=0,ans=0;
        while(j<n){
            long long int abc=total/(n-j);
            // cout<<abc<<" BB  "<<x<<" x "<<j<<" j "<<endl;
            
            if(abc>=x){
                
                ans=n-j;
                j=n-1;
            }
            total=total-a[j];
            j++;
        }
        cout<<ans<<endl;
   }
}
