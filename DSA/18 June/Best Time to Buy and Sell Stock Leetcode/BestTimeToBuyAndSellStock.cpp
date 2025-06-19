#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>&prices){
        int buy=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            profit=max(profit,prices[i]-buy);
        }
        return profit;
    }
};

int main(){
    Solution s1;
    int n,x;
    cin>>n;
    vector<int>prices;
    for(int i=0;i<n;i++){
        cin>>x;
        prices.push_back(x);
    }
    cout<<s1.maxProfit(prices);
}
