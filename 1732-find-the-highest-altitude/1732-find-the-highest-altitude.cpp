class Solution {
  public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int sum = 0;
        int maxHeight = 0;

        for (int i = 0; i < n; i++) {
            sum = sum + gain[i];
            maxHeight = max(sum, maxHeight);
        }
        return maxHeight;
    }
};
