#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string strHours = "";
    string meridiem = "";
    int hours = 0;
    string militaryTime = "";

    //Capture first two characters of string as hh
    for (int i = 0; i < 2; i++) {
        strHours += s[i];
    }
    //capture last to characters of string as meridiem
    for (int i = 8; i < 10; i++) {
        meridiem += s[i];
    }
    //convert strHours to int
    hours = stoi(strHours);
    //force meridiem to be upper case
    transform(meridiem.begin(), meridiem.end(), meridiem.begin(), ::toupper);

    //if AM is last two characters and hh != 12 do nothing. If hh == 12, then subtract 12 from hh
    if (meridiem == "AM" && hours == 12) {
        hours -= 12;
    }

    //if PM is last two characters and hh != 12, add 12 to hh. IF hh == 12, then do nothing
    if (meridiem == "PM" && hours != 12 ) {
        hours += 12;
    }

    //Convert hours back to string and incorporate these revised hours into militaryTime string, truncating meridiem.
    string militaryHours = "";
    bool hourFix = false;
    if (hours >= 0 && hours <= 9 ) {
        hourFix = true;
    }
    militaryHours = to_string (hours);

    if (hourFix) {
        string tempHour = "";
        tempHour = militaryHours;
        militaryHours = "0";
        militaryHours.push_back(tempHour[0]);
    }

    for (int i = 0; i < 8; i ++) {
        if (i < 2) {
            militaryTime.push_back(militaryHours[i]);
        }
        else {
            militaryTime.push_back(s[i]);
        }
    }
    return militaryTime;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
