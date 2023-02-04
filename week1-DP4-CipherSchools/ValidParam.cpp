#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isValid(string s)
{
    stack<char> ch;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '}' && (!ch.empty() && ch.top() == '{'))
        {
            ch.pop();
        }
        else if (s[i] == ')' && (!ch.empty() && ch.top() == '('))
        {
            ch.pop();
        }
        else if (s[i] == ']' && !ch.empty() && ch.top() == '[')
            ch.pop();
        else
            ch.push(s[i]);
    }

    return ch.empty();
}

signed main()
{
    return 0;
}