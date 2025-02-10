class Solution {
public:
    string clearDigits(string s) {
         while (true) {
            int pos = -1;
            for (int i = 0; i < s.size(); i++) {
                if (isdigit(s[i])) {
                    pos = i;
                    break;
                }
            }
            
            if (pos == -1)
                break;
            
            
            s.erase(pos - 1, 2);
        }
        return s;
    }
};