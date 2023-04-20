#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cout << "Digite uma string: ";
    getline(cin, str); // lê a string com espaços em branco

    reverse(str.begin(), str.end());

    cout << "A string invertida e: " << str << endl;

    return 0;
}
