// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program can determine the month of the year with a number

#include <iostream>
#include <string>

int main() {
    // this function is the program
    std::string monthNumberAsString;
    int monthNumber;

    // input
    std::cout << "Enter the number of a month (ex. 2 for February): ";
    std::cin >> monthNumberAsString;
    monthNumber = atoi(monthNumberAsString.c_str());

    // process & output
    switch (monthNumber) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "June" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Invalid Number" << std::endl;
            break;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
