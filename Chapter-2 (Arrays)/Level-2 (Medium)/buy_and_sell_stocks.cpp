#include <bits/stdc++.h>
using namespace std;

int maxProfit1(vector<int> prices) {
    int profit = 0;
    for(int i = 0; i < prices.size() - 1; i++) for(int j = i + 1; j < prices.size(); j++) profit = max(profit, prices[j] - prices[i]);
    return profit;
}
// TC: O(n^2), SC: O(1)

int maxProfit2(vector<int> prices) {
    int buy = prices[0], profit = 0;
    for(int i = 1; i < prices.size(); i++) profit = max(profit, prices[i] - buy), buy = min(buy, prices[i]);
    return profit;
}
// TC: O(n), SC: O(1)

int main() {
    vector<int> v = {6, 2, 4, 3, 5, 1};
    cout << maxProfit1(v) << endl;
    cout << maxProfit2(v) << endl;
    return 0;
}