#include <bits/stdc++.h>
#define pb push_back 
#define ll long long
using namespace std;

vector<ll> nextPermutation(vector<ll> &permutation, ll n)
{

    vector<int> temp;
    int check=-1,val=0;  // checkpoint
    for(int i=n-1; i>0; i--){
        if(permutation[i-1]<permutation[i]){ 
            check=i-1;
            temp.pb(permutation[i]);
            val=permutation[i-1];
            break;
        }
        else{
            temp.pb(permutation[i]);
        }
    }
    if(check==-1){
         reverse(permutation.begin(), permutation.end());
         return permutation;
    }
    int scnd=0;
    sort(temp.begin(),temp.end());
    for(int i=0; i<temp.size(); i++){
        if(temp[i]>permutation[check]){
            scnd=temp[i];
            break;
        }
    }

    int start=0,flag=0;;
    for(int i=0; i<n; i++){
        if(i==check){
            permutation[i]=scnd;
        }
        else if(i>check){
            if(flag==1 ){
                permutation[i]=temp[start];
                start++;
                continue;
            }

            if(val>temp[start]){
                permutation[i]=temp[start];
                start++;
            }
            else{
                if(temp[start]==scnd) start++;
                permutation[i]=val;
                flag=1;
            }
        }
    }
    return permutation;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> permutation;
        for(int i=0; i<n; i++){
            ll temp;
            cin>>temp;
            permutation.pb(temp);
        }
        permutation= nextPermutation(permutation, n);
        for(auto it: permutation){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}