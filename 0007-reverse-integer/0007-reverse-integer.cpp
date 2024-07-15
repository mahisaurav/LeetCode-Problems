class Solution {
public:
    int reverse(int x) {
        int Num = 0;
        while(x!=0){
            int digit = x%10;
            x = x/10;
            if (Num > INT_MAX / 10 || (Num == INT_MAX / 10 && digit > 7)) return 0; 
            if (Num < INT_MIN / 10 || (Num == INT_MIN / 10 && digit < -8)) return 0; 
            Num = Num*10 + digit;
        }
        return Num;
    }
};
