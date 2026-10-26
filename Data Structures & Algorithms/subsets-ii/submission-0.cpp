class Solution {
public:
void func(int ind,vector<int>&nums,vector<int>&ans,vector<vector<int>>&result){
result.push_back(ans);

   
    for(int i=ind;i<nums.size();i++){
        if(i!=ind && nums[i]==nums[i-1])
        continue;
        ans.push_back(nums[i]);
        func(i+1,nums,ans,result);
        ans.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      vector<vector<int>>result;
      vector<int>ans;
      func(0,nums,ans,result);  
      return result;
    }
};
