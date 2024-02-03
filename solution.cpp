class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int start = 0;
        int end = 0;
        int zeros = 0;
        while(end<nums.size()){

            if(nums[end] == 0){
                zeros++;
            }
            end++;
            if(zeros>k){
            if(nums[start] == 0){
                zeros--;
            }
            start++;
        }
        }
        return end-start;
    }
};