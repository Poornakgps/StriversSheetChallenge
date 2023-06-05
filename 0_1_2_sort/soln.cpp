#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   int l=0, r=n-1, mid=0;
   while(mid<=r){

      if(arr[mid]==0){
         swap(arr[l],arr[mid]);
         l++,mid++;
         continue;
      }
      else if(arr[mid]==2){
         swap(arr[r], arr[mid]);
         r--;
         continue;
      }
      mid++;  
   }
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort012(&arr,n);
        for(auto it: arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}