int next(int n) {
    int sum = 0;
    while(n > 0) {
        int d = n % 10;    
        sum += pow(d, 2);
        n /= 10;
    }
    return sum;   
}

bool isHappy(int n) {
    int fast = next(next(n));
    int slow = next(n);
    
    while(fast != slow) {
        fast = next(next(fast));
        slow = next(slow);
    }
    return slow == 1;   
}
