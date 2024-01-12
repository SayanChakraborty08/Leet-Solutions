//This is the solution to the Majority element( >n/2 times) problem.
//Link to the problem - https://leetcode.com/problems/majority-element/



//Moore's Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int c=0;
        int a= nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=a)
            c--;

            else if(nums[i]==a)
            c++;

            if(c==0)
            a=nums[i+1];
        }
        return a;
    }
};