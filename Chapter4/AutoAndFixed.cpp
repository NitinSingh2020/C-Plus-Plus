#include <iostream>
 
void AutoIncrementAndPrint()
{
    using namespace std;
    int nValue = 1; // automatic duration by default
    ++nValue;
    cout << "In Auto mode: " << nValue << endl;
} // nValue is destroyed here
 
 
void FixedIncrementAndPrint()
{
    using namespace std;
    static int s_nValue = 1; // fixed duration
    ++s_nValue;
    cout << "In Fixed mode: " << s_nValue << endl;
} // s_nValue is not destroyed here, but becomes inaccessible
 
int main()
{
    AutoIncrementAndPrint();
    AutoIncrementAndPrint();
    AutoIncrementAndPrint();

    FixedIncrementAndPrint();
    FixedIncrementAndPrint();
    FixedIncrementAndPrint();
}