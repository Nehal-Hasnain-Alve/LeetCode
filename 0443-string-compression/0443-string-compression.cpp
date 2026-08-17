
class Solution {
 public:
  int compress(vector<char>& chars) {
    int n = chars.size();
    int read = 0;
    int write = 0;
    while (read < n) {
      char current = chars[read];
      int count = 0;
      while (read < n && chars[read] == current) {
        read++;
        count++;
      }
      chars[write] = current;
      write++;

      if (count > 1) {
        string num = to_string(count);
        for (char ch : num) {
          chars[write] = ch;
          write++;
        }
      }
    }
    return write;
  }
};
