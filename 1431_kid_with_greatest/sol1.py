# custom code
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result ;
        int greatest = candies[0];
        // find greatest no of candies in array
        for(int i=1;i<candies.size();i++){
            if(greatest < candies[i]){
                greatest = candies[i];
            }
        }
        //add extra candies to array
        //compare
        for(int i=0;i<candies.size();i++){
            if(greatest <= candies[i] + extraCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        //return result array
        return result;
    }
};