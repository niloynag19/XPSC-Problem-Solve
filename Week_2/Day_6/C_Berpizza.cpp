#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cus_no = 1;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mp;
    vector<int> ans;
    for (int i = 1;i <= n;i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int money;
            cin >> money;
            st.insert({ cus_no,money });
            mp.insert({ money,-cus_no });
            cus_no++;
        }
        else if (type == 2) {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            mp.erase({ money,-pos });
        }
        else {
            int pos = -mp.rbegin()->second, money = mp.rbegin()->first;
            ans.push_back(pos);
            mp.erase(--mp.end());
            st.erase({ pos,money });
        }
    }

    for (auto val : ans) {
        cout << val << " ";
    }    
    cout << endl;

   return 0;
}