#include <bits/stdc++.h> 
#define ll long long

using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    int maxx=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i-1]+arr[i]<arr[i]){
            arr[i]=arr[i];
        }
        else{
            arr[i]=arr[i-1]+arr[i];
        }
        maxx=max(arr[i],maxx);
    }
    return max(0,maxx);
}

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<maxSubarraySum(arr,n)<<endl;
    }
}