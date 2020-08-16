#include<bits/stdc++.h>

using namespace std;
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
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
void heapSort(int arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i=n-1; i>0; i--) 
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
        string p;
        string h;
        cin>>p;
        cin>>h;
        
        bool abc=false;
        int len=p.length();
        int a[len],b[len];
        int z,i;
        
        for(int i=0 ; i<len ; i++)
                b[i]=p[i]-96;
        
        int j=0;
        if(h.length()>=len){
        while(j<h.length()-len+1){
            z=0;
            i=0;
            string pp;
            for(int i=j ; i<len+j ; i++)
                pp=pp+h[i];
            
            for(int i=0 ; i<len ; i++){
                a[i]=pp[i]-96;
                
            }
           
            heapSort(a, len);
            heapSort(b, len);
            while(a[i]==b[i] && i<len){
                z++;
                i++;
                if(z==len)
                    abc=true;
            }
                j++;
                
        }
        }
        
        if(abc)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
        
    }
    
}
