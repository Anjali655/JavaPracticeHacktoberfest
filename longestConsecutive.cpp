class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if arrays is empty return 0
        if(nums.size() ==0 ) return 0;
        // insert elements into hashSet for O(1) lookups
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        //iterate through each number in the set
        for(int num : numSet){
            if(numSet.find(num - 1) == numSet.end()){
                int currNum = num;
                int currCount = 1;
                // count executive elements
                while(numSet.find(currNum+1) != numSet.end())
                {
                    currNum++;
                    currCount++;
                }
                longest = max(longest,currCount);
            }
        }
        return longest;
    }
};
