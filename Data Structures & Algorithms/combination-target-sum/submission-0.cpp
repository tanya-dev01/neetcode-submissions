class Solution {
public:
   void func(int i,vector<int>&nums,int target,vector<int>&ans,vector<vector<int>>&result){
    if(i==nums.size()){
        if(target==0){
            result.push_back(ans);
        }
        return;
    }
    if(nums[i]<=target){
        ans.push_back(nums[i]);
func(i,nums,target-nums[i],ans,result);
ans.pop_back();
    }
func(i+1,nums,target,ans,result);
   }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        vector<int>ans;
         func(0,nums,target,ans,result);
         return result;
    }
};
