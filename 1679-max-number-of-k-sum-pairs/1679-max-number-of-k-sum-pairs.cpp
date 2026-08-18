
class Solution
{
  public:
    int maxOperations(vector<int>& nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> frequency;
        int operation = 0;

        for (int x : nums)
        {
            int needed = k - x;

            if (frequency[needed] > 0)
            {
                operation++;
                frequency[needed]--;
            }
            else
            {
                frequency[x]++;
            }
        }

        return operation;
    }
};