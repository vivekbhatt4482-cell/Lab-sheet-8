#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {      // Integer addition
        return a + b;
    }

    double add(double a, double b) {   // Double addition
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Int Add: " << calc.add(10, 20) << endl;
    cout << "Double Add: " << calc.add(10.5, 20.7) << endl;

    return 0;
}
