//
// Created by Mudit on 22-10-2020.
//
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int BruteForceSetups(vector<char> &text, vector<char> &pattern)
{
    int i = 0, j;
    const int n = text.size();
    const int m = pattern.size();
    while (i <= n - m)
    {
        j = 0;
        while (j < m && pattern[j] == text[i + j])
        {
            j++;
        }
        if (j == m)
        {
            return (i);
        }
        i++;
    }
    return -1;
}

int BruteForceSetup(const string &text, const string &pattern)
{
    vector<char> txt(text.begin(), text.end());
    vector<char> ptn(pattern.begin(), pattern.end());
    return BruteForceSetups(txt, ptn);
}

int main()
{
    string str = "abcdeeabdc";
    string str2 = "dc";
    int myans = BruteForceSetup(str, str2);
    cout << "shifts: " << myans << " " << endl;
    return 0;
}