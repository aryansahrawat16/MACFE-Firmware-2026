#include <iostream>

// blinks a fake LED on and off a few times
int main() {
    bool on = false;

    for (int i = 0; i < 5; i++) {
        on = !on;
        std::cout << "LED is " << (on ? "on" : "off") << "\n";
    }

    return 0;
}
