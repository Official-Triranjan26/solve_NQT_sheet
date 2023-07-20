// Find the largest word in a String

#include <bits/stdc++.h>
using namespace std;

string getLargestWord(string str)
{
    string lStr = "";
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            if (lStr == "")
            {
                lStr = temp;
                temp = "";
            }
            else if (lStr.length() < temp.length())
            {
                lStr = temp;
                temp = "";
            }
            else
            {
                temp = "";
            }
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    if (lStr.length() < temp.length())
    {
        lStr = temp;
        temp = "";
    }
    return lStr;
}

int main()
{

    string str = "My name if Triranjan Samanta from Anandanagar";
    cout << getLargestWord(str);

    return 0;
}