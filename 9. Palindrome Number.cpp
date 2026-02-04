class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;

        long long rev=0;

        while(x>0)
        {
            long long d=x%10;
            rev=rev*10+d;
            x=x/10;
        }
        if(temp==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
