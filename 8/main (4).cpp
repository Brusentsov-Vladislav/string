//#8 Составить алгоритм, исключающий из строки А символы строки Б.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string text;
    string chars;
    getline(cin, text);
    getline(cin, chars);
    for (char c: chars){
        text.erase(remove(text.begin(), text.end(), c), text.end());
    }
    cout<<text<<endl;
}
