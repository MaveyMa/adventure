// Kristine Laranjo, Emily Garcia, Kori Gann, Mavey Ma
#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;

char menu();
int numberOfPeople(); //COUT QUESTION AND RETURNS # OF PEOPLE
double climbing();
double scuba();
double skyDive();
double spelunk();
double climbing();

int main()
{

    return 0;
}

int numberOfPeople()
{
    int num;
    cout << "How many people are you paying for today, including yourself?\n";
    cin >> num;
    return num;
}//END NUMBER OF PEOPLE FUNCTION

double climbing()
{
    int totalCharge, baseCharge, lessonCharge, rentalCharge;
    int lessonNum, rentalNum, numberOfDays;
    
    cout << "You've selected Climbing!\n";
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

double scuba()
{
    int totalCharge, baseCharge, lessonCharge;
    int lessonNum, numberOfDays;
    
    cout << "You've selected Scuba Diving!\n";
    baseCharge = 1000 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like a scuba instructor? ($100 per person)" << endl;
    cin >> lessonNum;
    lessonCharge = lessonNum * 100;
    
    totalCharge = baseCharge + lessonCharge;
    
    return totalCharge;

}//END SCUBA

double skyDive()
{
    int totalCharge, baseCharge, lodgeCharge, innCharge;
    int lodgeNum, innNum, numberOfDays;
    
    cout << "You've selected Sky Diving!\n";
    baseCharge = 700 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like housing at Wilderness Lodge? ($65/day per person)" << endl;
    cin >> lodgeNum;
    lodgeCharge = lodgeNum * (65 * numberOfDays);
    
    cout << "How many would like housing at Luxury Inn? ($120/day per person)" << endl;
    cin >> innNum;
    innCharge = innNum * (120 * numberOfDays);
    
    totalCharge = baseCharge + lodgeCharge + innCharge;
    
    return totalCharge;

}//END SKY DIVE

double spelunk()
{
    int totalCharge, baseCharge, lessonCharge, rentalCharge;
    int lessonNum, rentalNum, numberOfDays;
    
    cout << "You've selected Spelunking!\n";
    baseCharge = 700 * numberOfPeople();
    
    cout << "How many days are you staying?" << endl;
    cin >> numberOfDays;
    
    cout << "How many would like to rent equipment ($40/day per person)" << endl;
    cin >> rentalNum;
    rentalCharge = rentalNum * (40 * numberOfDays);
    
    totalCharge = baseCharge + rentalCharge;
    
    return totalCharge;

}//END SPELUNK
