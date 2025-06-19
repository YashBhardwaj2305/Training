#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void sortColors(vector<int>&nums){
        int zero=0,one=0,two=0;
        for(int n:nums){
            if(n==0)zero++;
            else if(n==1)one++;
            else two++;
        }
        for(int i=0;i<nums.size();++i){
            if(zero>0){
                nums[i]=0;
                zero--;
            }
            else if(one>0){
                nums[i]=1;
                one--;
            }
            else{
                nums[i]=2;
                two--;
            }
        }
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
    s1.sortColors(nums);
    for(int i:nums)cout<<i<<" ";
}
