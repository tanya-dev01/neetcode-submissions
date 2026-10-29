class Solution {
public:

void solve(int left,int right,int n,string &ans,vector<string>&result){

    if(left==n && right==n){
        result.push_back(ans);
        return;
    }

if(left<n){
    ans.push_back('(');
    solve(left+1,right,n,ans,result);
    ans.pop_back();
}
    if( right<left && right<n)
    {
        ans.push_back(')');
        solve(left,right+1,n,ans,result);
ans.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string ans="";
        solve(0,0,n,ans,result);
      
        return result;
    }
};
