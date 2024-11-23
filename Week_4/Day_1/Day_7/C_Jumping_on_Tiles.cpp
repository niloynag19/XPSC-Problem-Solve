#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solution() {
    string s;
    cin >> s;
    int n = s.size();

    vector<pair<char, int>> v;

    char mn = min(s[0], s[n - 1]);
    char mx = max(s[0], s[n - 1]);

    for (int i = 0; i < n; i++) {
        if ((s[i] >= mn and s[i] <= mx)) {
            v.push_back({s[i], i});
        }
    }

    sort(v.begin(), v.end(), [&](pair<char, int> a, pair<char, int> b) {
        return a.second < b.second;
    });

    if (v.size() > 2) {
        sort(v.begin() + 1, v.begin() + v.size() - 1, [&](pair<char, int> a, pair<char, int> b) {
            if (s[0] > s[n - 1]) {
                return a.first > b.first;
            }
            return a.first < b.first;
        });
    }

    vector<int> v2;
    ll moves = 0;

    v2.push_back(1);

    for (int i = 1; i < v.size(); i++) {
        moves += abs(v[i - 1].first - v[i].first);
        v2.push_back(v[i].second + 1);
    }

    cout << moves << " " << v2.size() << endl;

    for (auto it : v2) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin >> test_case;
    while (test_case--) {
        solution();
    }
    return 0;
}
