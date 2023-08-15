#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std;
 
int main()
{
    string s = "I am looking for GeeksForGeek ok \n";
    regex r("Geek[a-zA-z]+");
    cout <<regex_replace(s, r, "geek");
    return 0;
}