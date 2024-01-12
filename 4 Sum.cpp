//This is the solution to the 4 sum problem of Leetcode. 
//Link to question - https://leetcode.com/problems/4sum/description/



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])  continue;

            for(int j=i+1;j<n;j++)
            {
                if(j!=i+1 && nums[j]==nums[j-1])  continue;
                
                int l = j+1;
                int k =n-1;

                while(l<k)
                {
                    long long sum = nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];

                    if(sum>target)
                    k--;
                    else if(sum<target)
                    l++;
                    else if(sum==target)
                    {
                        vector<int> temp = {nums[i],nums[j],nums[l],nums[k]};
                        ans.push_back(temp);
                        l++;
                        k--;
                        while(l<k && nums[l]==nums[l-1]) l++;
                        while(l<k && nums[k]==nums[k+1]) k--; 
                    }

                }
            }
        }

        return ans;
        
    }
};