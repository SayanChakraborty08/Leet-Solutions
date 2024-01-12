//This is the solution to the koko eating bananas problem of Leetcode
//Link to Problem - https://leetcode.com/problems/koko-eating-bananas/



class Solution {
public:
    
    int ispossible(vector<int> &a,int k,int sol)
    {
        long double h=0.0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            h += ceil((double)a[i]/(double)sol);
            
        }
        
        return (h<=k);
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        

        int e = *max_element(piles.begin(),piles.end());
        int s=0;
        int m;
        int ans = 0;
        while(s<=e)
        {
            m = s+(e-s)/2;

            int x = ispossible(piles,h,m);
            if(x)
            { ans = m; e=m-1;}

            else
            s=m+1;
        }
        return ans;
    }
};