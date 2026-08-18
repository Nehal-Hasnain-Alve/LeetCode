
class Solution
{
  public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int n = nums.size();
        int i = 0;
        int j = i + k - 1;
        double maxsum = 0;
        double sum;

        for (int i = 0; i < k; i++)
        {
            sum = sum + nums[i];
        }
        maxsum = sum ;

        for (int i = k; i < n; i++)
        {
            sum = sum + nums[i];
            sum = sum - nums[i - k];
            maxsum = max(maxsum, sum);
        }


        return maxsum/k;
    }
};