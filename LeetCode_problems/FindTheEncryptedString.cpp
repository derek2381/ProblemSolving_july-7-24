// problem link
// https://leetcode.com/problems/find-the-encrypted-string/description/


class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        s += s;

        string res = "";

        for(int i = 0;i < n;i++){
            res += s[(i+k)%n];
        }

        return res;


    }
};
