#include <iostream> 
using namespace std;
/* 1
1 1
1 2 3
*/
void function_name()
{
    cout << "Hello, world" << endl;
}

int main()
{
    
    function_name();

    setlocale(0, "");
    double num;

    cout << "Enter number: ";
    cin >> num;

    if (num < 10) { // If number less then 10.
        cout << "This number less then 10." << endl;
    }
    else { // or
        cout << "This number more then 10." << endl;
    }." << endl;
    }
    return 0;
    int i; 
    int sum = 0; 
    setlocale(0, "");
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "Sum from 1 to 10 = " << sum << endl;
    return 0;
}