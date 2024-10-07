#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter the interger value of a : " << endl;
    cin >> a;
   
    cout << "Enter the interger value of b : " << endl;
    cin >> b;
    

    char Operation;
    cout << "Enter Operation you can :" << endl;
    cin >> Operation;

    switch (Operation)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Case is Default !" << endl;
        break;
    }
}