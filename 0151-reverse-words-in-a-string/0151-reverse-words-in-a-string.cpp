
class Solution {
 public:
  string reverseWords(string s) {
    int len = s.size();
    string result = "";
    stack<string> st;

    for (int i = 0; i < len; i++) {
      if (s[i] == ' ') {
        continue;
      }
      string res = "";
      while (i < len && s[i] != ' ') {
        res = res + s[i];
        i++;
      }
      st.push(res);
    }

    while (!st.empty()) {
      if (!result.empty()) {
        result = result + " ";
      }
      result = result + st.top();
      st.pop();
    }

    return result;
  }
};
