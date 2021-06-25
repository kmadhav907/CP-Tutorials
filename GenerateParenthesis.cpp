void helper(int open , int closed , string ans , vector<string>&v){
        if(open == 0 && closed == 0){
            v.push_back(ans);
            return;}
        if(open >= 1){
            helper(open-1, closed , ans+"(" , v);
            
        }
            if(closed-1 >= open){
                helper(open , closed - 1, ans + ")", v);
            }
        }
    
class Solution {
public:
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        helper(n , n ,"", v);
        return v;
        
    }
};
