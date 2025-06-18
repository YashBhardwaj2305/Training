#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>&nums){
        int ans=0;
        for(auto i:nums){
            ans^=i;
        }
        return ans;
    }
};

int main(){
    Solution s1;
    int n,x;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<s1.singleNumber(nums);
}
