#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;
    int choice, guess, number, i, even, odd, count, times;
    string greeting;
    char again;

    cout << "------------------------------" << endl;
    cout << "\tLog-In" << endl;
    cout << "------------------------------" << endl;
    while (true)
    {
        cout << "UserName: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == "kirby" && password == "****")
        {
            cout << "        " << endl;
            cout << "Access Granted!!" << endl << endl;
            break;
        }
        cout << "Wrong username or password. Try again." << endl << endl;
    }


    while (true)
    {
        cout << "   Menu - switch function" << endl << endl;
        cout << "1.) Guessing Game" << endl;
        cout << "2.) Greeting" << endl;
        cout << "3.) Series of numbers" << endl << endl;
        cout << "Please choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << endl << "  Guessing Game" << endl << endl;
            number = 10;
            for (i = 1; i <= 5; i++)
            {
                cout << "         " << endl;
                cout << "Enter number to guess: ";
                cin >> guess;

                if (guess == number)
                {
                    cout << "Correct!!" << endl;
                    break;
                }
                else if (guess < number)
                    cout << "Higher Please" << endl;
                else
                    cout << "Lower Please" << endl;
            }
            break;

        case 2:
            cout << endl << "Enter your greeting: ";
            cin >> greeting;
            times = 100;
            count = 0;
            while (count < times)
            {
                cout << greeting << " ";
                count++;
            }
            cout << endl;
            break;

        case 3:
            cout << endl << "Enter a positive integer: ";
            cin >> number;
            even = 0;
            odd = 0;
            i = 1;
            do
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
                i++;
            } while (i <= number);

            cout << "Count of even numbers: " << even << endl;
            cout << "Count of odd numbers: " << odd << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

        cout << endl << "Do you want to continue? ";
        cin >> again;
        cout << endl;

        if (again != 'Y' && again != 'y')
            break;
    }

    return 0;
}
