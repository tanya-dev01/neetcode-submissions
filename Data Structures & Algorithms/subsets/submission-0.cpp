class Solution {
public:
void func(int i, vector<int>&nums,vector<int>&ans,vector<vector<int>>&result){
    if(i==nums.size()){
        result.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    func(i+1,nums,ans,result);
    ans.pop_back();
    func(i+1,nums,ans,result);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>ans;
        func(0,nums,ans,result);
        return result;
    }
};
