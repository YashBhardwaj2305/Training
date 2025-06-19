#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>&nums,int target){
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
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
    cout<<s1.searchInsert(nums,target);
}
