#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char str1[50];
    int length;
    int flag = 0;
    cout << "Enter the word you want to check: ";
    cin >> str1;

    length = strlen(str1);

    for (int i = 0; i < length; i++)
    {
        if (str1[i] != str1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << str1 << " is not a palindrome" << endl;
    }
    else
    {
        cout << str1 << " is a palindrome" << endl;
    }
    return 0;
}

