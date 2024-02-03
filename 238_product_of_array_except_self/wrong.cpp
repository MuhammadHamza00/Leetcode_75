// Time Limit Exceeded
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for(int i=0; i < nums.size();i++){
            int left_product = 1;
            int right_product = 1;
            for(int j=0;j<i;j++){
                left_product = left_product * nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                right_product = right_product * nums[k];
            }
            result[i] = left_product * right_product;
        }
        return result; 
    }
};