
class Solution {
 public:
  int maxArea(vector<int>& height) {
    int n = height.size();
    int st = 0;
    int end = n - 1;
    int area;
    int maxarea = INT_MIN;
    while (st < end) {
      area = abs((min(height[st], height[end])) * (end - st));
      maxarea = max(maxarea, area);

      if (height[end] > height[st]) {
        st++;
      }
      else {
        end--;
      }
    }
    return maxarea;
  }
};
