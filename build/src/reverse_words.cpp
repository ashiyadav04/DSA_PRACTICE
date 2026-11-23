#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n = s.size();
    int st = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == n || s[i] == ' ')
        {
            int e = i - 1;

            while (st < e)
            {
                swap(s[st], s[e]);
                st++;
                e--;
            }

            st = i + 1;
        }
    }

    cout << s;

    return 0;
}
