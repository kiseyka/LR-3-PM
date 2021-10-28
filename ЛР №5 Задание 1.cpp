#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");


    int kol = 0;

    char s[100];
    while (!in.eof())
    {
        in.getline(s, 100);

        for (int i = 0; i < strlen(s); i++)
            if (s[i] == '.' || s[i] == ',' || s[i] == ':' || s[i] == ';' ||
                s[i] == '!' || s[i] == '?' || s[i] == '-' || s[i] == '"' ||
                s[i] == ')' || s[i] == '(' || s[i] == '«' || s[i] == '»' || s[i] == '—')
                kol += 1;
        cout << s << kol << endl;
    }


}

