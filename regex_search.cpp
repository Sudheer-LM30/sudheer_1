#include <iostream>
#include <regex>
#include<string.h>
using namespace std;
 
int main()
{
    string s = "I am looking for GeeksForGeeks ";
    regex r("Geek[a-zA-Z]+");
    smatch m;
    regex_search(s, m, r);
    for (auto x : m)
        cout << x << " ";
 
    return 0;
}