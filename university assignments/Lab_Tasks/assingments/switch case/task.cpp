#include <iostream>
using namespace std;
int main(){
    //switch case
    int numberOfDays;
    cout << "enter any number between 1 to 7 and you will get name of the day" << endl;
    cin >> numberOfDays;
    switch (numberOfDays)
    {
    case 1:
    cout << "Monday" << endl; 
    break;

    case 2:
    cout << "Tuesday" << endl; 
    break;

    case 3:
    cout << "Wednesday" << endl; 
    break;

    case 4:
    cout << "Thursday" << endl; 
    break;

    case 5:
    cout << "Friday" << endl; 
    break;

    case 6:
    cout << "Saturday" << endl; 
    break;

    case 7:
    cout << "sunday" << endl; 
    break;
    }

    return 0;

}