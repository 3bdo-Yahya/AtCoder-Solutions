#include <iostream>
#include <vector>
using namespace std;

int prod(vector<int> &a, vector<int> &b, int n)
{
    if (n <= 0) return 0;
    
    return a[n - 1] * b[n - 1] + prod(a, b, n - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // The following part is a simple solution, but it may overflow when n is large.
    
    // long long sm = 0;
    // for(int i = 0; i < n; i++)
    //     sm += a[i]*b[i];
    // cout << (sm == 0 ? "Yes" : "No");

    cout << (prod(a, b, n) == 0 ? "Yes" : "No");
    return 0;
}


/*
    .cph file
{
    "name":"B - Orthogonality",
    "group":"AtCoder - AtCoder Beginner Contest 188",
    "url":"https://atcoder.jp/contests/abc188/tasks/abc188_b",
    "interactive":false,"memoryLimit":1024,"timeLimit":2000,
    "tests":[{"input":"2\n-3 6\n4 2\n","output":"Yes\n","id":1724371568080},{"input":"2\n4 5\n-1 -3\n","output":"No\n","id":1724371568007},{"id":1724371568004,"input":"3\n1 3 5\n3 -6 3\n","output":"Yes\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BOrthogonality"}},
    "batch":{"id":"5f30cb7b-7e9b-43ac-98bd-1a42534d2e6f","size":1},"srcPath":"d:\\C++\\AtCoder\\AtCoder-Solutions\\B_Orthogonality.cpp"
}
*/