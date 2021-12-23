#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[256], a[256][21], *p;
    int i, j, n = 0;
    bool exista = false;
    cin.getline(s, sizeof(s));
    for (p = strtok(s, " "); p; p = strtok(NULL, " "))
    {
        if (*p >= '0' && *p <= '9')
        {
            n++;
            strcpy(a[n], p);
            exista = true;
        }
    }
    for (i = 1; i <= n - 1; i++)
        for (j = i + 1; j <= n; j++)
            if (strcmp(a[i], a[j]) < 0)
                swap(a[i], a[j]);
    if (exista == false)
    {
        cout << "nu exista";
    }
    else
    {
        cout << a[1];
    }
    return 0;
}
