#include <iostream>

using namespace std;

int main() {

    // km/h to m/s
    float meters_per_second = 3.6;
    float kmh;

    auto divide = [meters_per_second](float kmh) -> float {
        return kmh / meters_per_second;
    };

    cout << "Insert km/h: " << endl;
    cin >> kmh;

    if (kmh == 0) {
        cout << "Insert a non-zero number to continue" << endl;
        cin >> kmh;
    }

    float result_st = divide(kmh);
    cout << "Result (km/h to m/s): " << result_st << endl;

    // m/s to km/h
    float meters_per_second_input;

    auto multiply = [meters_per_second](float meters) -> float {
        return meters * meters_per_second;
    };

    cout << "Insert m/s: " << endl;
    cin >> meters_per_second_input;

    float result_nd = multiply(meters_per_second_input);
    cout << "Result (m/s to km/h): " << result_nd << endl;

    return 0;
}

