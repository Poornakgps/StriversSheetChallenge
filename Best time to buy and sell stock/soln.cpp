#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans=0,minn=prices[0];
    for(int i=1; i<prices.size(); i++){

        if(prices[i]>minn){
            ans=max(ans,prices[i]-minn);
        }
        else{
            minn=min(prices[i],minn);
        }
    }
    return ans;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> prices;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            prices.push_back(temp);
        }
        cout<<maximumProfit(prices)<<endl;
    }
}