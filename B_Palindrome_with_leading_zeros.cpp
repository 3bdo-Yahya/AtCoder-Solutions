#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Removes trailing zeros from a given string.
string suff(string s) {
    if (s.empty() || s.back() != '0') {
        return s;
    }

    s.pop_back();
    return suff(s);
}
int main() {
    string s;
    cin >> s;

    if(s == string(s.rbegin(), s.rend())) return cout<<"Yes", 0;

    string t = suff(s);
    if(t == string(t.rbegin(), t.rend())) return cout<<"Yes", 0;

    cout <<"No";
}



/*
    .cph file
{
    "name":"B - Palindrome with leading zeros",
    "group":"AtCoder - AtCoder Beginner Contest 198",
    "url":"https://atcoder.jp/contests/abc198/tasks/abc198_b",
    "interactive":false,"memoryLimit":1024,"timeLimit":2000,
    "tests":[{"input":"1210\n","output":"Yes\n","id":1724372453603},{"input":"777\n","output":"Yes\n","id":1724372453636},{"input":"123456789\n","output":"No\n","id":1724372453684}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BPalindromeWithLeadingZeros"}},
    "batch":{"id":"86147632-93c1-4ffd-9c4c-15a3e81cf856","size":1},"srcPath":"d:\\C++\\AtCoder\\AtCoder-Solutions\\B_Palindrome_with_leading_zeros.cpp"}
*/
