#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[256];
    int n;
    cin >> n;
    cin >> s;
    for (int i = 0; i <= strlen(s) - n; i++)
    {
        for (int j = 0; j < strlen(s); j++)
            if (j < i || j >= i + n)
                cout << s[j];
        cout << endl;
    }
}
