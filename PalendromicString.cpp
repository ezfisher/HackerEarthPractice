/* 
A program to test if a string is a palendrome i.e. same 
forward and backward
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string to_lower(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

bool PalendromicString(string str)
{
    str = to_lower(str);

    for (int i = 0; i < (str.length()/2); i++)
    {
        if (str[i] != str[str.length()-1-i])
        {
      			return false;
            break;
        }
    }
    return true;
}
int main()
{
  	string str1 = "Racecar"; // should return true
  	string str2 = "Mountain"; // should return false
    cout << PalendromicString(str1) << "\n";
    cout << PalendromicString(str2) << "\n";
}
    
