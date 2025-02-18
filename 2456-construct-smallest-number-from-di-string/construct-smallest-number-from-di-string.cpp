#include<bits/stdc++.h>
class Solution {
public:
    bool backtrack(string &pattern , string &num, unordered_set<char> &used, int index){
        if(num.size()== pattern.size()+1){
            
            return true;
        }

        for(char digit='1'; digit<='9'; digit++){
                if(used.count(digit)){
                      continue;  
                }
                if(pattern[index-1]=='I'  && num.back() >= digit) continue;
                if(pattern[index-1]=='D'  && num.back() <= digit) continue;

                num.push_back(digit);
                used.insert(digit);

                if(backtrack(pattern , num, used , index+1))return true;

                num.pop_back();
                used.erase(digit);
        }
        return false;
    }

    
    string smallestNumber(string pattern) {
        string num="";
        unordered_set<char> used;
        for(char digit='1'; digit<='9'; digit++){
            num.push_back(digit);
            used.insert(digit);
            if(backtrack(pattern, num, used , 1))return num;
            num.pop_back();
            used.erase(digit);
        }
        return "";   
    }
};