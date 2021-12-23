#include <bits/stdc++.h>
using namespace std;

bool palindrom(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p)
        return true;
    return false;
}

int main()
{
    char s[256], *p, hatz[11] = "";
    cin.getline(s, 256);
    bool gasit = false;
    for (p = strtok(s, ":;., "); p; p = strtok(NULL, ":;., "))
    {
        if (palindrom(p))
            if (strlen(p) > strlen(hatz))
            {
                strcpy(hatz, p);
                gasit = true;
            }
    }
    if (gasit == true)
        cout << hatz;
    return 0;
}
