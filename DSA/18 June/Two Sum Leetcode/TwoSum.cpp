#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
public:
    vector<int>twoSum(vector<int>&nums,int target){
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int k=target-nums[i];
            if(mp.find(k)!=mp.end()){
                return{mp[k],i};
            }
            mp[nums[i]]=i;
        }
        return{-1,-1};
    }
};

int main(){
    Solution s1;
    int n,x,target;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cin>>target;
    vector<int>res=s1.twoSum(nums,target);
    cout<<res[0]<<" "<<res[1];
}
