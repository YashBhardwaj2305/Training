#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int missingNumber(vector<int>&nums){
        int n=nums.size();
        int temp=(n*(n+1))/2;
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        return temp-sum;
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
    cout<<s1.missingNumber(nums);
}
