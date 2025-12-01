#include <bits/stdc++.h>
using namespace std;

int maxEnvelopes(vector<vector<int>>& envelopes) {
    if (envelopes.empty()) return 0;

    sort(envelopes.begin(), envelopes.end(),
         [](const vector<int>& a, const vector<int>& b) {
             if (a[0] == b[0]) return a[1] > b[1];
             return a[0] < b[0];
         });

    vector<int> lis;
    for (auto &env : envelopes) {
        int h = env[1];
        auto it = lower_bound(lis.begin(), lis.end(), h);
        if (it == lis.end()) lis.push_back(h);
        else *it = h;
    }
    return (int)lis.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) {
        cerr << "Digite o numero de envelopes.\n";
        return 1;
    }

    vector<vector<int>> envelopes(n, vector<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> envelopes[i][0] >> envelopes[i][1];
    }

    int ans = maxEnvelopes(envelopes);
    cout << ans << "\n";
    return 0;
}
