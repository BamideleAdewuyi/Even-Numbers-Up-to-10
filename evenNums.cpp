#include <iostream>

int main() {
    // Initialise i as 0
    int i = 0;

    // Set while loop so i can be as high as 10
    while (i < 11){
        // If i modulo 2 is 0, print i
        if (i % 2 == 0) {
            std::cout << i << "\n";
        }
        // Increment i
        i++;
    }
    
}