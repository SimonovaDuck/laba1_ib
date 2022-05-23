#include <windows.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int k;
    const int n = 33;
    int s;
    char str[] = "Здравствуйте";
    cout << "Строка до шифрования: " << '\n';
    cout << str << endl;
    cout << "Введите ключ: ";
    cin >> k;
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = (str[i] + k) % (n + __toascii('А'));
    }
    cout << '\n' << "Cтрока после шифрования: " << '\n';
    cout << str<<endl;
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = (str[i] - k - (n + __toascii('А'))) % (n + __toascii('А'));
    }
    cout << '\n' << "Расшифрованная строка: " << '\n';
    cout << str;

    return 0;
}