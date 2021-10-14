// Copyright (c) 2021 St. Mother Teresa HS All rights reserved.
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program calculates a user input level into a percentage

#include <iostream>

int LevelConvert(std::string userLevel) {
    // calculates level to a percentage
    int gradePer;

    if (userLevel == "4+") {
        gradePer = 97.5;
    } else if (userLevel == "4") {
        gradePer = 90.5;
    } else if (userLevel == "4-") {
        gradePer = 83;
    } else if (userLevel == "3+") {
        gradePer = 78;
    } else if (userLevel == "3") {
        gradePer = 74.5;
    } else if (userLevel == "3-") {
        gradePer = 71;
    } else if (userLevel == "2+") {
        gradePer = 68;
    } else if (userLevel == "2") {
        gradePer = 64.5;
    } else if (userLevel == "2-") {
        gradePer = 61;
    } else if (userLevel == "1+") {
        gradePer = 58;
    } else if (userLevel == "1") {
        gradePer = 54.5;
    } else if (userLevel == "1-") {
        gradePer = 51;
    } else if (userLevel == "R") {
        gradePer = 24.5;
    } else if (userLevel == "NE") {
        gradePer = 0;
    } else {
        gradePer = -1;
    }

    return gradePer;
}


int main() {
    // This function gets the mark
    std::string userLevel;
    int levelConverted;

    // Input
    std::cout << "Enter the level you want converted to percentage: ";
    std::cin >> userLevel;
    std::cout << "" << std::endl;

    // Call function
    levelConverted = LevelConvert(userLevel);

    // Output
    std::cout << "Level " << userLevel << " has a middle percentage of "
    << levelConverted << "%." << std::endl;
    std::cout << "\nDone." << std::endl;
}
