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
double climbing();

int main()
{
    cout << climbing() << endl;
    return 0;
}

int numberOfPeople()
{
    int num;
    cout << "Welcome to High Adventure Travel Agency.\n How many people are you paying for today, including yourself?\n";
    cin >> num;
    return num;
}//END NUMBER OF PEOPLE FUNCTION
double climbing()
{
    int totalCharge, baseCharge, lessonCharge, rentalCharge;
    int lessonNum, rentalNum, numberOfDays;
    
    baseCharge = 350 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like a climbing instructor? ($100 per person)" << endl;
    cin >> lessonNum;
    lessonCharge = lessonNum * 100;
    
    cout << "How many would like to rent equipment ($40/day per person)" << endl;
    cin >> rentalNum;
    rentalCharge = rentalNum * (40 * numberOfDays);
    
    totalCharge = baseCharge + lessonCharge + rentalCharge;
    
    return totalCharge;

}//END CLIMBING
