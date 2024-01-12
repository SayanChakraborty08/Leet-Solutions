//This is the solution to the Maximum Subarray problem of Leetcode 
//Link to the problem - https://leetcode.com/problems/maximum-subarray/


//Kadane's Algorithm.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum =0;
        int MaxSum = INT_MIN;
        
        for(int i =0;i<nums.size();i++)
        {
            sum = sum+nums[i];

            MaxSum = max(MaxSum,sum);

            if(sum<0)
            sum=0;            
        }

        return MaxSum;
        
    }
};