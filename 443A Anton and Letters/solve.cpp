#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i = 0;
    getline(cin, str);
    set<char> s;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            s.insert(str[i]);
        }
        i++;
    }
    cout << s.size() << endl;
}

/**
 What is Set?
 Set is a C++ STL container used to store the unique elements, and all the elements are stored in a sorted manner.
 Once the value is stored in the set, it cannot be modified within the set; instead, we can remove this value and can add the modified value of the element.
 Sets are implemented using Binary search trees.
*/
/*
What is getline()?
 getline() is a C++ function used to read the line from the input stream.
 Details: The C++ getline() is a standard library function that is used to read a string or a line from an input stream. It is a part of the <string> header.
 The getline() function extracts characters from the input stream and appends it to the string object until the delimiting character is encountered.
 While doing so the previously stored value in the string object str will be replaced by the input string if any.
*/
