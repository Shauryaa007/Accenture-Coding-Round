#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert 24-hour format to 12-hour format
void convertTo12Hour(int hour, int minute) {
    string period;

    // Determine if it's AM or PM
    if (hour >= 12) {
        period = "PM";
        if (hour > 12) // Convert to 12-hour format
            hour -= 12;
    } else {
        period = "AM";
        if (hour == 0) // Handle midnight case (00:00)
            hour = 12;
    }

    // Print in 12-hour format with leading zeros for minutes
    cout << "12-hour format: " << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << " " << period << endl;
}

int main() {
    int hour, minute;

    // Input: 24-hour format
    cout << "Enter hour (0-23): ";
    cin >> hour;
    cout << "Enter minute (0-59): ";
    cin >> minute;

    // Validate inputs
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Invalid time input!" << endl;
        return 1;
    }

    // Convert to 12-hour format and print the result
    convertTo12Hour(hour, minute);

    return 0;
}
