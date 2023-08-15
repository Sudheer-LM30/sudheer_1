#include <iostream>
#include <string>
#include <regex>
using namespace std;
 
int main () {

   string str ("software");
   regex str_expr ("(soft)(.*)");
 
   smatch sm;
   regex_match (str,sm,str_expr);

   regex_match ( str.cbegin(), str.cend(), sm, str_expr);
   cout << "String:range, size:" << sm.size() << " matches\n";

   for (unsigned i=0; i<sm.size(); ++i) {
      cout << "[" << sm[i] << "] ";
   }
   cout << endl; 
   return 0;
}