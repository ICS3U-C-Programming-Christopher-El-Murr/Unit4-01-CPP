// Copyright (c) 2025 Christopher El-Mur
// All rights reserved
// Created by Christopher El-Mur
// Date: November 11th 2025
// This program asks the user to input a number
// Then proceeds to calculate the sum of all the numbers leading up to it

#include <exception>
#include <iostream>
#include <string>

int main() {
    try {
        // define variables
        int total = 0;
        int count = 0;

        // try to convert string to an int
        std::cout << "Enter a positive integer: ";
        std::string input;
        std::getline(std::cin, input);
        int number = std::stoi(input);
        std::cout << std::endl;

        // if number <= 0 print message and exit early
        if (number <= 0) {
            std::cout << "Please enter a positive number!" << std::endl;
            return 0;
        }

        // Calculate the sum using a while loop
        while (count <= number) {
            std::cout << count << " time through loop." << std::endl;
            total += count;
            count += 1;
        }

std::cout << "The sum of the numbers from 0 to "
<< number << " is: " << total << std::endl;
    } catch (const std::invalid_argument&) {
    std::cout <<"Invalid input! Please enter a valid integer." <<std::endl;
    } catch (const std::exception& e) {
        // catches any other unexpected errors
        std::cout << "An unexpected error occurred: " << e.what() << std::endl;
    }

    return 0;
}
