#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
void addition()
{
    cout << "Enter number you want to add:  ";
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
}
   
void subtruction()
{
    cout << "Enter number you want to subtruct it:  ";
    int a, b;
    cin >> a >> b;
    cout << a << "-" << b << "=" << a - b << endl;
}
void multiplication()
{
    cout << "Enter number you want to multiplication it:  ";
    int a, b;
    cin >> a >> b;
    cout << a << "*" << b << "=" << a * b << endl;
}
void division()
{
    cout << "Enter number you want to divid it:  ";
    int a, b;
    cin >> a >> b;
    cout << a << "/" << b << "=" << (float)a / (float)b << endl;
}
void factorial()
{
    cout << "Enter number you want to factorial it:  ";
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 0; i <= n; i++)
        fact = fact * i;
    cout << "factorial of " << n << " " << "is: " << fact << endl;
}
void power()
{
    cout << "inter the base and exponent: ";
    double b, e;
    cin >> b >> e;
    double power = pow(b, e);
    cout << "the sulation for base " << b << " and " << e << " is" << power << endl;
}
void square()
{
    cout << "Enter the number you want to square of: ";
    double b;
    cin >> b;
    double power = pow(b, 2);
    cout << "sulation for square of " << b << " is " << power << endl;

}
void cube()
{
    cout << "Enter the number you want to cube of: ";
    double b;
    cin >> b;
    double power = pow(b, 3);
    cout << "sulation for cube of " << b << " is " << power << endl;
}
void squareroot()
{
    cout << " enter the number you want to squareroot of";
    double n;
    cin >> n;
    double squareroot = sqrt(n);
    cout << " the squareroot of " << n << " is " << squareroot << endl;

}

int main()
{
    cout << "\t\tWellcome to scientific calculator\n";
    cout << "press 0 to quit the programm......\n";
    cout << "enter 1 for addition\n";
    cout << "enter 2 for subtruction\n";
    cout << "enter 3 for multiplication\n";
    cout << "enter 4 for division\n";
    cout << "enter 5 for power\n";
    cout << "enter 6 for factorial\n";
    cout << "enter 7 for square\n";
    cout << "enter 8 for cube\n";
    cout << "enter 9 for squareroot\n\n";
    while (1)
    {
        int choice;
        cout << "Enter your choice..\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtruction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            factorial();
            break;
        case 6:
            power();
            break;
        case 7:
            square();
            break;
        case 8:
            cube();
            break;
        case 9:
            squareroot();
            break;
        case 0:exit(0);
            break;
        default:
            cout << "\nwrong choice ...enter valid choice\n\n";
            break;
        }
    }
    return 0;