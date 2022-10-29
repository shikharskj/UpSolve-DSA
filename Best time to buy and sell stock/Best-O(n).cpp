// Greedy
// Approach:-

// It is always profitable to buy a stock when its price is the lowest in the past.

 
// Taking an example for understanding, ‘PRICES’ = [7, 1, 5, 4, 3, 6]. 


// Max profit on Day 3 = Stock price on Day 3 -  Minimum of the Stock price of Day 1 and Day 2 = 5 - 1 = 4.
// Max profit on Day 4 = Stock price on Day 4 - Minimum of the Stock price of Day 1, Day 2, and Day 3 =  4 - 1 = 3.

 
// In general, max profit on Day n = Price of stock on Day n - min(Day 1, Day 2, ………., Day n-1).
// So our idea is to buy the stock at the lowest price that has occurred in the past and sold it on the current day. This operation can be performed on every possible day and the maximum profit among them can be stored as the answer to the problem.




/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    Where 'N' is the length of the array 'prices'.
*/

int bestTimeToBuyAndSellStock(vector<int>&prices) {

    int n = prices.size();

    // Initialize ‘maxProfit’ with 0 and 'minCost' with INT_MAX.
    int maxProfit = 0, minCost = prices[0];

    // Linearly traverse the stock 'prices' array.
    for (int i = 1; i < n; i++) {

        // Calculate the profit on an ‘i’th day,
        // considering that we are selling the stock on an
        // ‘i’th day, and purchase the stock at the minimum
        // price until the ith day.Update the ‘maxProfit’
        // value if the profit exceeds the maxProfit.
        maxProfit = max(maxProfit, prices[i] - minCost);

        // Keep track of the minimum element on the left side.
        minCost = min(minCost, prices[i]);
    }

    // Return 'maxProfit' here.
    return maxProfit;
}


