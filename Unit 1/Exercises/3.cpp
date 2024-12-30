/*
    Supposing you did use a:using name space std; statement to reduce the amount of typing required, try removing this statement and see if you can still get your program to compile and run without it.

    Alternatively if you did not use such a statement, try adding it and seeing how many 'std::' prefixes you can remove as a consequence and still have your program compile and run successfully.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    cout << "Live long and prosper." << endl;
    
    return 0;
}