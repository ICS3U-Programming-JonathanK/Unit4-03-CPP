// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Date: May 25, 2021
// This program asks the user for a whole number. It
// then calculates the square of the number given starting from 0

#include <iostream>
#include <cmath>


int main() {
    // initializations
    int counter = 0;
    int userNumInt;
    int powerOfTwo;
    std::string userNumString;

    // get the user's number
    std::cout << "Enter a whole number: ";
    std::cin >> userNumString;

    try {
        userNumInt = std::stoi(userNumString);
        // calculates the square of each number from 0 to the user number
        if (userNumInt >= 0) {
            for (counter = 0; counter <= userNumInt; counter++) {
                powerOfTwo = pow(counter, 2);
                std::cout << counter << "^2 = " << powerOfTwo << std::endl;
           }
        } else {
            std::cout << "\n";
            std::cout << userNumInt << " is not a valid number." << std::endl;
        }
        // make sure to catch errors such as anything but an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << "\n";
        std::cout << "Please enter a valid number.\n";
    }
    std::cout << "\n";
    std::cout << "Thank you for your input" << std::endl;
}
