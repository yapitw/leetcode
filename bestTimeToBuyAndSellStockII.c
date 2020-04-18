// Simple solution (Fatest)
int maxProfit(int* prices, int pricesSize){
    int maxP = 0;
    for(int i=1; i<pricesSize; i++) {
        if(prices[i] - prices[i-1] > 0){
            maxP += prices[i] - prices[i-1];
        }
    }
    return maxP;
}

// Dynamic programming
// Recursion
int maxProfit(int* prices, int pricesSize){
    // Boundary condition
    if (pricesSize <= 1) return 0;
    
    // To sell or not to sell?
    int profit;
    int max = 0;
    
    // 1) Not to sell
    profit = maxProfit(prices, pricesSize - 1);
    if (profit > max) {
        max = profit;
    }
    
    // 2) To sell
    for (int i=1; i<pricesSize; i++) {
        profit = maxProfit(prices, i) + prices[pricesSize -1] - prices[i-1];
        if (profit > max) {
            max = profit;
        }
    }
    return max;   
}
