#include <iostream>
#include <string>
using namespace std;
int main() {
    string fullName;
    int birthMonth, birthDay;
    string zodiac;
    cout << "Please enter your full name: ";
    getline(cin, fullName);
    cout << "Please enter your birth month: ";
    cin >> birthMonth;
    cout << "Please enter you birth day: ";
    cin >> birthDay;
    if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 2 && birthDay <= 19))
        zodiac = "Aeries";
    else if ((birthMonth == 4 && birthDay >= 20) || (birthMonth == 5 && birthDay <= 20))
        zodiac = "Taurus";
    else if ((birthMonth == 5 && birthDay >= 21) || (birthMonth == 6 && birthDay <= 20))
        zodiac = "Gemini";
    else if ((birthMonth == 6 && birthDay >= 21) || (birthMonth == 7 && birthDay <= 22))
        zodiac = "Cancer";
    else if ((birthMonth == 7 && birthDay >= 23) || (birthMonth == 8 && birthDay <= 22))
        zodiac = "Leo";
    else if ((birthMonth == 8 && birthDay >= 23) || (birthMonth == 9 && birthDay <= 22))
        zodiac = "Virgo";
    else if ((birthMonth == 9 && birthDay >= 23) || (birthMonth == 10 && birthDay <= 22))
        zodiac = "Libra";
    else if ((birthMonth == 10 && birthDay >= 23) || (birthMonth == 11 && birthDay <= 21))
        zodiac = "Scorpio";
    else if ((birthMonth == 11 && birthDay >= 22) || (birthMonth == 12 && birthDay <= 21))
        zodiac = "Sagittarius";
    else if ((birthMonth == 12 && birthDay >= 22) || (birthMonth == 1 && birthDay <= 19))
        zodiac = "Capricorn";
    else if ((birthMonth == 1 && birthDay >= 20) || (birthMonth == 2 && birthDay <= 18))
        zodiac = "Aquarius";
    else if ((birthMonth == 2 && birthDay >= 19) || (birthMonth == 3 && birthDay <= 20))
        zodiac = "Pisces";

    cout << "Hello " << fullName << "! " << "Your zodiac sign is: " << zodiac << endl;

    return 0;
}