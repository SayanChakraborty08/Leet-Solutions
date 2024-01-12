//This is the solution to the next permutation problem of Leetcode. 
//Link to question - https://leetcode.com/problems/next-permutation/



#include <bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n =nums.size();
        int index=-1;

        //Find longest breaking point.

        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index =i;
                break;
            }
        }
    
        
        if(index==-1)
            reverse(nums.begin(),nums.end());

        else
        {
            
         //Find number just greater than breaking point

         for(int i=n-1;i>=index;i--)
         {
             if(nums[i]>nums[index])
             {
                 swap(nums[i],nums[index]);
                 break;
             }
         }

         //Reverse the left over array to get the smallest arrangement after breaking point.

         reverse(nums.begin()+index+1,nums.end());
        }       

    }
};