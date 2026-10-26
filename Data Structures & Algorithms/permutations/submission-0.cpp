class Solution {
public:
void func(vector<int>&nums,vector<int>&ans,vector<vector<int>>&result,int freq[]){
    if(ans.size()==nums.size()){
        result.push_back(ans);
        return;
    }
    for(int i=0;i<nums.size();i++){
if(!freq[i]){

        ans.push_back(nums[i]);
        freq[i]=1;
        func(nums,ans,result,freq);
        ans.pop_back();
freq[i]=0;
}
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++){
            freq[i]=0;
        }
        func(nums,ans,result,freq);
        return result;
    }
};
