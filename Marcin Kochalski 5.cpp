#include <iostream>
using namespace std;


class date {
public:
int day;
int month;
int year;
    string question1;
    string question2;
    string question3;
    string answer;
    string answerr;
    string answerrr;
};

void input_date(date &date){
int x;
cout <<"Enter day : ";
cin >> x;
cout << endl;
date.day = x;
cout <<"Enter month : ";
cin >> x;
cout << endl;
date.month = x;
cout <<"Enter year : ";
cin >> x;
cout << endl;
date.year = x;
}

bool check_date(date &date)
{
    if (date.month < 1 || date.month > 12)

    {
        cout << "Wrong month value. Enter a value between 1 and 12." << endl;
        return false;
    }

    if (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12)
    {

    if (date.day < 1 || date.day > 31)
        {
        cout << "Wrong day value for month " << date.month << ". Enter a value between 1 and 31." << endl;
        return false;
        }
    }
        if (date.month == 4 || date.month == 6 || date.month == 8 || date.month == 9 || date.month == 11)
    {

    if (date.day < 1 || date.day > 30)
        {
        cout << "Wrong day value for month " << date.month << ". Enter a value between 1 and 30." << endl;
        return false;
        }
    }



    if (date.month == 2)
    {
        if (date.day > 29)
        {
            cout << "February can only have maximum 29 days on a leap year." << endl;
            return false;
        }
    else if (date.day == 29 && (date.year % 4 != 0 || (date.year % 100 == 0 && date.year % 400 != 0)))
        {
            cout << "Wrong day value. The year is not a leap year." << endl;
            return false;
        }
    }

    return true;
}

void display_date(date &date)
{
cout <<"Day : " << date.day << endl;
cout <<"Month : " << date.month << endl;
cout <<"Year : " << date.year << endl;
}
int main()
{
    int z;
date datee;
datee.question1="Powstanie warszawskie";
datee.question2="Bitwa pod grunwaldem";
datee.question3="1 nobel Sklodowskiej";
bool valid_date = false;

cout << "Question1: \n" << datee.question1 <<endl;

    while (!valid_date)
    {
        input_date(datee);
        valid_date = check_date(datee);
    }
    if (datee.day ==1 && datee.month ==8 && datee.year ==1944)
        cout <<"Correct!"<<endl;
        else
        cout <<"Wrong!"<<endl;
cout << "Question2: \n" << datee.question2 <<endl;
valid_date = false;
    while (!valid_date)
    {
        input_date(datee);
        valid_date = check_date(datee);
    }
    if (datee.day==15 && datee.month==7 && datee.year==1410)
        cout <<"Correct!"<<endl;
        else
        cout <<"Wrong!"<<endl;
cout << "Question3: \n" << datee.question3 <<endl;
valid_date = false;
    while (!valid_date)
    {
        input_date(datee);
        valid_date = check_date(datee);
    }
        if (datee.day==10 && datee.month==12 && datee.year==1904)
        cout <<"Correct!"<<endl;
        else
        cout <<"Wrong!"<<endl;
return 0;
}
