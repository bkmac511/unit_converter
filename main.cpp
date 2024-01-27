#include <iostream>

using namespace std;

int main() {

    float meters = 3.6;
    int kmh;

    auto divide = [](int kmh, int ms) -> int {
        return kmh / ms;
    };

    cout << "insert km/h: " << endl;
    cin >> kmh;

    int result = divide(kmh,meters);

    cout << result << endl;

    return 0;
}