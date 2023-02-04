#include <bits/stdc++.h>
using namespace std;
#define int long long

map<char, string> data;

void fillData()
{
    data['2'] = "abc";
    data['3'] = "def";
    data['4'] = "ghi";
    data['5'] = "jkl";
    data['6'] = "mno";
    data['7'] = "pqrs";
    data['8'] = "tuv";
    data['9'] = "wxyz";
}

void helper(vector<string> &res, string temp, int i, string digits, int j)
{
    if (temp.length() == digits.length() && temp != "")
    {
        res.push_back(temp);
        return;
    }
    if (i >= digits.length())
        return;

    for (int idx = j; idx < data[digits[i]].length(); idx++)
    {
        temp.push_back(data[digits[i]][idx]);
        helper(res, temp, i + 1, digits, j);
        temp.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    fillData();
    vector<string> res;
    string temp = "";

    helper(res, temp, 0, digits, 0);

    return res;
}

signed main()
{

    return 0;
}