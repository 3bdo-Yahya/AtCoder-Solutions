#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    bool flag = false;

    for (int i = 0; i < n; i++) {
        int a, p, x;
        cin >> a >> p >> x;

        if(x - a > 0) { v.push_back(p); flag = true; } 
    }

    if(flag) return cout << *min_element(v.begin(), v.end()), 0;

        cout << -1 ;
}

/*
    .cph file

{
    "name":"B - Play Snuke",
    "group":"AtCoder - Caddi Programming Contest 2021(AtCoder Beginner Contest 193)",
    "url":"https://atcoder.jp/contests/abc193/tasks/abc193_b",
    "interactive":false,"memoryLimit":1024,"timeLimit":2000,
    "tests":[{"input":"3\n3 9 5\n4 8 5\n5 7 5\n","output":"8\n","id":1724387252711},{"input":"3\n5 9 5\n6 8 5\n7 7 5\n","output":"-1\n","id":1724387252780},{"input":"10\n158260522 877914575 602436426\n24979445 861648772 623690081\n433933447 476190629 262703497\n211047202 971407775 628894325\n731963982 822804784 450968417\n430302156 982631932 161735902\n880895728 923078537 707723857\n189330739 910286918 802329211\n404539679 303238506 317063340\n492686568 773361868 125660016\n","output":"861648772\n","id":1724387252785}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BPlaySnuke"}},
    "batch":{"id":"968c0bdf-79d6-40c4-901c-681cd28b8862","size":1},"srcPath":"d:\\C++\\AtCoder\\AtCoder-Solutions\\B_Play_Snuke.cpp"
}

*/