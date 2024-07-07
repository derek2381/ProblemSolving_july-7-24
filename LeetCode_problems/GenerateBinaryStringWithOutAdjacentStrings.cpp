// problem link
// https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/description/



class Solution {
public:
    vector<string> validStrings(int n) {
        if(n == 1){
            vector<string> res = {"0","1"};
            return res;
        }
        int total = 1 << n;

        set<string> s;
        vector<string> v;

        for(int i = 1;i <= total;i++){
            long long int temp = i;

            string res = "";
            int k = 0;

            while(temp > 0 || k < n){
                if(temp&1 != 0){
                    res = '1' + res;
                }else{
                    res = '0' + res;
                }
                temp >>= 1;
                k++;
            }

            bool flag = true;

            for(int i = 0;i < res.length()-1;i++){
                if(res[i] == '0' && res[i+1] == '0'){
                    flag = false;
                    break;
                }
            }

            if(flag){
                s.insert(res);
            }
        }

        for(string str : s){
            v.push_back(str);
        }

        return v;

    }
};
