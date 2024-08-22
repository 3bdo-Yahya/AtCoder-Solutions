#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {

        if ((i & 1) ? islower(s[i]) : isupper(s[i]))
            return cout << "No", 0;

        // Explanation

        //     if (i & 1)
        //     {
        //         if (islower(s[i]))
        //             return cout << "No", 0;
        //     }
        //     else
        //     {
        //         if (isupper(s[i]))
        //             return cout << "No", 0;
        //     }
    }

    cout << "Yes";
}

/*
    .cph file
{
    "name" : "B - uNrEaDaBlE sTrInG",
    "group" : "AtCoder - AtCoder Beginner Contest 192", 
    "url" : "https://atcoder.jp/contests/abc192/tasks/abc192_b", 
    "interactive" : false, 
    "memoryLimit" : 1024, "timeLimit" : 2000, 
    "tests" : [ {"input" : "dIfFiCuLt\n", "output" : "Yes\n", "id" : 1724367182389}, {"input" : "eASY\n", "output" : "No\n", "id" : 1724367182327}, {"id" : 1724367182364, "input" : "a\n", "output" : "Yes\n"} ], 
    "testType" : "single", "input" : {"type" : "stdin"}, "output" : {"type" : "stdout"}, "languages" : {"java" : {"mainClass" : "Main", "taskClass" : "BUNrEaDaBlESTrInG"}}, 
    "batch" : {"id" : "079bdc33-5680-421c-9408-d7c0513c2d76", "size" : 1}, "srcPath" : "d:\\C++\\AtCoder\\B_uNrEaDaBlE_sTrInG.cpp"
}
*/