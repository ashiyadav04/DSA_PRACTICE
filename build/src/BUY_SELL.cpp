#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices) {  
    int n = prices.size();
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
			res = max(res, prices[j] - prices[i]);
        }
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++) cin>>prices[i];
    cout << maxProfit(prices) << endl;
    return 0;
}