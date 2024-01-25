# using built in functions
class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> result;
        
        // Find greatest no of candies in array
        auto greatest = std::max_element(candies.begin(), candies.end());
        int maxCandies = *greatest; // Dereference the iterator

        // Add extra candies to array
        std::transform(candies.begin(), candies.end(), candies.begin(),
                       [extraCandies](int element) { return element + extraCandies; });

        // Compare
        for(int i = 0; i < candies.size(); i++){
            if(maxCandies <= candies[i]){
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }

        // Return result array
        return result;
    }
};