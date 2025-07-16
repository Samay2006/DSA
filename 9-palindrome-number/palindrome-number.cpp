class Solution {
public:
    bool isPalindrome(int x) {
          long rev=0,temp=x;
        while (x > 0)
        {
            int c = x % 10;
            rev = rev * 10 + c;
            x = x / 10;
        }
        if(rev==temp){
            return true;
        }
        else{return false;}
       
    }
    
};