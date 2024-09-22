#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ruls()
{
    cout << "\t\tWelcome to" << endl;
    cout << "\t\tROCK PAPER SCISSOR" << endl;
    cout << "\t\tselect alphabet" << endl;
    cout << "\tROCK= R or r PAPER= P or p SCISSOR= S or s" << endl;
    cout << "\tFor Quitint the game enter E or e" << endl;
}

int char_to_int(char input)
{
    if (input == 'P' || input == 'p')
    {
        return 0;
    }
    else if (input == 'R' || input == 'r')
    {
        return 1;
    }
    else if (input == 's' || input == 'S')
    {
        return 2;
    }
}

void compare(int computer, int human)
{

    if (human > 2)
    {
        cout << "are you stupid or somthing 😕" << endl;

        return ;
    }
    if (computer > human)
    {
        cout << "you WINS 🏆" << endl;
        return ;
    }
    else if (computer < human)
    {
        cout << "computer WON 🏆" << endl;
        return;
    }

    else
    {
        cout << "Oops!! its a DRAW 🤭" << endl;
        return;
    }
}

int main()
{
    ruls();

    for (int i = 2; i > 1; i++)
    {

        int random_number = (rand() % 3) + 0;
        char input;
        cout << "Enter your pick :";
        cin >> input;
        if (input == 'e' || input == 'E')
        {
            break;
        }
        compare(random_number, char_to_int(input));
        
    }
    cout << "thank you for playing " << endl;
}