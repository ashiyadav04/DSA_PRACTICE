#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find positions of min and max
    int minIndex = min_element(a.begin(), a.end()) - a.begin();
    int maxIndex = max_element(a.begin(), a.end()) - a.begin();

    cout << "Min index = " << minIndex << endl;
    cout << "Max index = " << maxIndex << endl;

    vector<int> ans;

    if (minIndex < maxIndex) {
        // Part 1 + Part 2 + Part 3
        for (int i = 0; i < minIndex; i++)
            ans.push_back(a[i]);

        for (int i = minIndex; i <= maxIndex; i++)
            ans.push_back(a[i]);

        for (int i = maxIndex + 1; i < n; i++)
            ans.push_back(a[i]);
    }
    else {
        // min comes after max
        // Part 3 + Part 2 + Part 1
        for (int i = minIndex; i < n; i++)
            ans.push_back(a[i]);

        for (int i = maxIndex; i < minIndex; i++)
            ans.push_back(a[i]);

        for (int i = 0; i < maxIndex; i++)
            ans.push_back(a[i]);
    }

    for (int x : ans)
        cout << x << " ";

    return 0;
}