#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[101], *p, note[][4] = {"DO", "RE", "MI", "FA", "SOL", "LA", "SI"};
    bool exista, gasit = false;
    cin.getline(s, sizeof(s));
    for (p = strtok(s, " "); p; p = strtok(NULL, " "))
    {
        exista = false;
        for (int i = 0; i < 7; i++)
            if (strstr(p, note[i]) != NULL)
                exista = true;
        if (exista == true)
        {
            cout << p << endl;
            gasit = true;
        }
    }
    if (gasit == false)
        cout << "nu exista";
    return 0;
}
