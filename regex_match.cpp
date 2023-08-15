#include <iostream>
#include <regex>
 
using namespace std;
int main()
{
    string a = "geeksForGeeks";
    regex b("(Geek)(.*)");
    if ( regex_match(a, b) ){
        cout << "String 'a' matches regular expression 'b' \n";
    }else{
        cout<<"invalid";
    }
    // if ( regex_match(a.begin(), a.end(), b) )
    //     cout << "String 'a' matches with regular expression "
    //             "'b' in the range from 0 to string end\n";
 
    return 0;
}