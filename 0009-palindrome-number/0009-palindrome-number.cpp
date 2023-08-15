class Solution {
public:
    bool isPalindrome(int x) {
       long long copy_x= x;
        if (x<0) return false;
        
        long long rev=0;
        while(x){
            long long last= x%10;
            rev*=10;
            rev+=last;
            x/=10;
        }
         return (copy_x==rev);      
    }
};