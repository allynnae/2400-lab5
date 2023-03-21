/**
 *   @file: lab5.cc
 * @author: Allison McKee
 *   @date: 02-14-2023
 *  @brief: February Weather
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>

using namespace std;

int main(int argc, char const *argv[]) {

    // initializations
    double highest_high = INT_MIN;
    double lowest_low = INT_MAX;
    double high;
    double low;

    cout << "Please enter temperatures for the month of February: ";
    cin >> high >> low;
   
    // while loop
    while (high != -100 && low != -100)
    {

        // if statements to recalculate the highest high/lowest low
        if (high > highest_high)
        {
            highest_high = high;
        }

        if (low < lowest_low)
        {
            lowest_low = low;
        }

        cout << "Please enter temperatures for the month of February: ";
        cin >> high >> low;
    }

    // output
    cout << "The highest temperature in February was " << highest_high << " degrees." << endl;
    cout << "The lowest temperature in February was " << lowest_low << " degrees." << endl;

    return 0;
}