// Kristine Laranjo, Emily Garcia, Kori Gann, Mavey Ma
#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;

char menu();
double climbing();
double scuba();
double skyDive();
double spelunk();
int numberOfPeople(); //COUT QUESTION AND RETURNS # OF PEOPLE

int main()
{

    return 0;
}

int numberOfPeople()
{
    int num;
    cout << "Welcome to High Adventure Travel Agency.\n How many people are you paying for today, including yourself?\n";
    cin >> num;
    return num;
}//END NUMBER OF PEOPLE FUNCTION
