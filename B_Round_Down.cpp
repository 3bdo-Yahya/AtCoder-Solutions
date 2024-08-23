#include <iostream>
using namespace std;

int main() {
    char c;
    while (cin.get(c)) {
        if (c == '.') break;
        cout << c;
    }
    return 0;
}

    // This solution is not correct because it can't handle the large constraints up to 10^100.
    // However, due to weak tests it passes the 16 tests and gets the accepted verdict.

    // string s;
    // cin >> s;
    // for(auto& it: s) {
    //     if(it == '.') return 0;
    //         cout << it;
    // }   


/*
    .cph file

{
    "name":"B - Round Down",
    "group":"AtCoder - AtCoder Beginner Contest 196",
    "url":"https://atcoder.jp/contests/abc196/tasks/abc196_b",
    "interactive":false,"memoryLimit":1024,"timeLimit":2000,
    "tests":[{"input":"5.90\n","output":"5\n","id":1724388600849},{"input":"0\n","output":"0\n","id":1724388600820},{"id":1724388600798,"input":"84939825309432908832902189.9092309409809091329\n","output":"84939825309432908832902189\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BRoundDown"}},
    "batch":{"id":"a2edbb77-9f6b-42ad-bede-f8dbe13fdb41","size":1},"srcPath":"d:\\C++\\AtCoder\\AtCoder-Solutions\\B_Round_Down.cpp"
}

*/
