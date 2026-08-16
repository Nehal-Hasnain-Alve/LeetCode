
class Solution {
 public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max_candies = *max_element(candies.begin(), candies.end());
    int n = candies.size();
    vector<bool> result(n, false);
    for (int i = 0; i < candies.size(); i++) {
      if (candies[i] + extraCandies >= max_candies) {
        result[i] = true;
      } else {
        result[i] = false;
      }
    }
    return result;
  }
};
