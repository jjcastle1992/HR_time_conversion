#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
//Capture first two characters of string as hh

//capture last to characters of string as meridiem

//convert hh to int

//if AM is last two characters and hh != 12 do nothing. If hh == 12, then subtract 12 from hh

//if PM is last two characters and hh != 12, add 12 to hh. IF hh == 12, then do nothing


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
