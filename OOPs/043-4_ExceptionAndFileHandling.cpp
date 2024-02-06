// exception handling or error handling in very brief (basic idea)
// we can create our own exception class and throw it but, that does not lie in this DSA journey (we can learn it in future)

// below link for file handling:
// https://www.youtube.com/watch?v=NBsmPHXjLfg&list=PLQEaRBV9gAFujcBWJhBT2XXsuMlIfETBy&index=8

#include <iostream>
using namespace std;

int main()
{
    cout << "Exception handling:" << endl;

    int a, b;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero is not possible!";
        }
        int c = a / b;
        cout << c << endl;
    }
    catch (const char *e)
    {
        cout << "excetion occured: " << e << endl;
    }

    try
    {
        int *p = new int[1000]; // when array is to large for the system to allocate memory, it will throw an exception
        cout << "Memory allocated successfully" << endl;
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "excetion occured: " << e.what() << endl;
    }

    cout << endl
         << "File Handling: https://www.youtube.com/watch?v=NBsmPHXjLfg&list=PLQEaRBV9gAFujcBWJhBT2XXsuMlIfETBy&index=8" << endl;
}