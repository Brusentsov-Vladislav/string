//#4 Составить алгоритм, исключающий из текста “лишние” пробелы. (В тексте должен быть один пробел для разделения слов).

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string text;
    string bword = "  ";
    getline(cin, text);
    int pos =0;
    for (int i = 0; i < text.length(); i++) {
        pos = text.find(bword);
        if (pos == string::npos)
            break;
        text.erase(pos, 1);
    }

    cout << text;
    return 0;
}
