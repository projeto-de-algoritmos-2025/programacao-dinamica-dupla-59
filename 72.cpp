#include <bits/stdc++.h>
using namespace std;

/*
    72. Edit Distance
    DP 2D clássico: dp[i][j] = custo mínimo para transformar
    word1[0..i-1] em word2[0..j-1]
*/

int minDistance(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Caso base: transformar em string vazia
    for (int i = 0; i <= n; ++i) dp[i][0] = i; // deletar i chars
    for (int j = 0; j <= m; ++j) dp[0][j] = j; // inserir j chars

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                int insertOp = dp[i][j - 1];
                int deleteOp = dp[i - 1][j];
                int replaceOp = dp[i - 1][j - 1];
                dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
            }
        }
    }

    return dp[n][m];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;

    cout << "Digite a primeira string: ";
    getline(cin, s1);

    cout << "Digite a segunda string: ";
    getline(cin, s2);

    int result = minDistance(s1, s2);

    cout << "Edit Distance = " << result << "\n";

    return 0;
}
