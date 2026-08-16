class Solution {
 public:
  string mergeAlternately(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();
    string s = "";
    int i =0;
    int j =0;
    while(i<n && j<m){
        s = s + word1[i];
        s = s + word2[j];
        i++;
        j++;
    }
    while(i<n){
        s = s+word1[i];
        i++;
    }
    while(j<m){
        s = s+word2[j];
        j++;
    }


    return s;
    
  }
};