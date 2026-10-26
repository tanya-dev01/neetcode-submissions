class Solution {
public:
void func(int ind,vector<int>&candidates,int target,vector<int>&ans,vector<vector<int>>&result){

    if (target == 0) {
        result.push_back(ans);
    
    return;
}
    for(int i=ind;i<candidates.size();i++){
        if(candidates[i]<=target ){
if(i>ind && candidates[i]==candidates[i-1] ) continue;
            ans.push_back(candidates[i]);
            func(i+1,candidates,target-candidates[i],ans,result);

            ans.pop_back();
        }
    }
    //    func(i+1,candidates,target,ans,result);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>ans;
        func(0,candidates,target,ans,result);
        return result;
    }
};
