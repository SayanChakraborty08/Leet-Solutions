//This is the solution to the 2 sum problem of Leetcode. 
//Link to question - https://leetcode.com/problems/two-sum/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            int more = target-a;
            if(mp.find(more) != mp.end())
            {
                return {mp[more],i};
            }

            mp[a]=i;
        }
        return {-1,-1};
        
    }
};