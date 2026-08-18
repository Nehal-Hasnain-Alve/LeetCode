
class Solution
{
  public:
    int maxVowels(string s, int k)
    {
        int n = s.size();
        int totalVowels = 0;
        int maximum = INT_MIN;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
            {
                totalVowels++;
            }
        }
        maximum = totalVowels;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
            {
                totalVowels++;
            }
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
                s[i - k] == 'o' || s[i - k] == 'u')
            {
                totalVowels--;
            }
            maximum = max(maximum, totalVowels);
        }
        return maximum;
    }
};
