class Solution {
public:
    void getAllSubsets(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>> & allsubSets)
    {
        if(i==nums.size())
        {
            allsubSets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getAllSubsets(nums,ans,i+1,allsubSets);
        ans.pop_back();
        getAllSubsets(nums,ans,i+1,allsubSets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubSets;
        vector<int>ans;
        getAllSubsets(nums,ans,0,allsubSets);
        return allsubSets;
    }
};