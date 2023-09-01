class Solution {
public:
    string intToRoman(int num) {
        map<int, vector<char>> mp;
        string ans;

        mp.insert(pair<int, vector<char>>(1, {'I', 'X', 'C', 'M'}));
        mp.insert(pair<int, vector<char>>(5, {'V', 'L', 'D', ' '}));
        mp.insert(pair<int, vector<char>>(10,{'X', 'C', 'M', ' '}));
        
        int carry = 0;
        while(num > 0) {
            int tmp = num % 10;
            
            if (tmp == 5) {
                ans = mp[5][carry] + ans;    
            } else if (tmp == 4) {
                ans = mp[5][carry] + ans;
                ans = mp[1][carry] + ans;
            } else if (tmp == 9) {
                ans = mp[10][carry] + ans;
                ans = mp[1][carry] + ans;
            } else if (tmp < 4 && tmp > 0) {
                string digits(tmp, mp[1][carry]);
                ans = digits + ans;
            } else if (tmp > 0){
                string digits(tmp-5, mp[1][carry]);
                ans = digits + ans;
                ans = mp[5][carry] + ans;
            }

            carry++;
            num = num / 10;
        }
        return ans;
    }
};
