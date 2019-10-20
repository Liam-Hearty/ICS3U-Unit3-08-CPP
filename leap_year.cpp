// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program checks if the input year is a leap year or not.


#include <iostream>


int main() {
    std::cout << "This program tells which years are leap years." << std::endl;

    std::string year_as_string;
    int year;

    std::cout << "Please enter a whole number: " << std::endl;
    std::cin >> year_as_string;

    try {
        year = std::stoi(year_as_string);
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << (year) << " is a leap year." << std::endl;
                } else {
                    std::cout << year << " is not a leap year."
                     << std::endl;
            }} else {
                std::cout << year << " is a leap year." << std::endl;
        }} else {
            std::cout << year << " is not a leap year." << std::endl;
    }} catch(std::invalid_argument) {
        std::cout << "Please type in a whole number." << std::endl;
    }
}
