#include <iostream>

using namespace std;

int main() {

    float meters = 3.6;
    float kmh;

    auto divide = [meters](int kmh) -> float {
        return static_cast<float>(kmh) / meters;
    };

    cout << "insert km/h: " << endl;
    cin >> kmh;

    float result = divide(kmh);
    cout << result << endl;

    return 0;
}