int Solution::reverse(int A) {
    
    
     int rev = 0;
        while (A != 0) {
            int pop = A % 10;
            A /= 10;
           if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
           if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    return rev;
}
