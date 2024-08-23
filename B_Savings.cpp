#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // n = (ans * (ans + 1)) /2
    // Using the quadratic formula => ans = (-1 + sqrt(1 + 8 * n)) / 2

    cout << ceil((-1 + sqrtl(1.0 + 8.0 * n)) / 2.0);
}

/*
    .cph file
{
    "name":"B - Savings",
    "group":"AtCoder - AtCoder Beginner Contest 206（Sponsored by Panasonic）",
    "url":"https://atcoder.jp/contests/abc206/tasks/abc206_b",
    "interactive":false,"memoryLimit":1024,"timeLimit":2000,
    "tests":[{"input":"12\n","output":"5\n","id":1724390765507},{"input":"100128\n","output":"447\n","id":1724390765505}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BSavings"}},
    "batch":{"id":"0e09ef18-3d5e-4a13-875e-e36213302591","size":1},"srcPath":"d:\\C++\\AtCoder\\AtCoder-Solutions\\B_Savings.cpp"
}
*/