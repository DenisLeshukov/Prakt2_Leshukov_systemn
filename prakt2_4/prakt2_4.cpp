#include <iostream>
using namespace std;
class Date {
public:

    Date(int day, int year, int month) : day{ day }, year{ year }, month{ month }
    {

    }

    bool Valid() {


        if (month < 0 || month > 12)
        {
            cout << "There may be only 12 months in a year"<< endl;
            return false;
        }
        if (year < 0)
        {
            cout << "The year cannot be less than 0" << endl;
            return false;
        }
        if (day <= 0 || day > 31)
        {
            cout << "A day cannot be greater than 31 or less than 0" << endl;
            return false;
        }
        if (month == 2 && day > 28)
        {
            cout << "There can't be more than 28 days in February" << endl;
            return false;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11 && day > 30)
        {
            cout << "This month cannot have more than 30 days" << endl;
            return false;
        }

    }
private:
    int day;
    int month;
    int year;
};
int main()
{
    int day, month, year;
    cout << "Day";
    cin >> day;
    cout << "Month";
    cin >> month;
    cout << "Year";
    cin >> year;

    Date first(day, year , month);
    if (!first.Valid())
    {
        cout << "The date is incorrect";
    }
    else {
        cout << "The date is correct";
    }

}
