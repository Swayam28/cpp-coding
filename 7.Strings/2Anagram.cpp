#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int i = 0; i <= str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str1 = "test";
    string str2 = "ttew";

    // Function Call
    if (isAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";

    return 0;
}
