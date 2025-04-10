class Solution {
public:
    int maximumGain(string s, int x, int y) {
       vector<char> st1;
       stack<char> st2;
       char first = (x>y) ? 'a' : 'b';
       char second = (x>y) ? 'b' : 'a';
       int maxV= max(x, y);
       int minV = min(x, y);
       int ans=0;
        for(char c: s){
            if(!st1.empty()  &&  st1.back()==first && c== second){
                ans= ans+ maxV;
                st1.pop_back();
            }
            else{
                     st1.push_back(c);
            }
           

        }

        for(char c: st1){
            if(!st2.empty()  &&  st2.top()==second && c== first){
                ans= ans+ minV;
                st2.pop();
            }
            else{
                 st2.push(c);
            }


        }

        return ans;

       }
    
};