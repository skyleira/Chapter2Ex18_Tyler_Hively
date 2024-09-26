/*
Title: Chapter 2 Exercise 18 - Energy Drink Consumption
File Name :   Chapter2Ex18_Tyler_Hively.cpp
Programmer :  Tyler Hively
Date :        09/25/2024
Requirements: 
A soft drink company recently surveyed 16,500 of its customers 
and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. 
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. 
Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of customers that were surveyed
    */

#include <iostream>
using namespace std;

int main()
{
    int Customersurveyed;
    int Energydrinkers;
    int Citrusenjoyers;
    
    cout << "----Soft Drink Company Survey Results Calculator----" << endl;
    cout << "Please enter how many customers were surveyed." << endl;
    cin  >> Customersurveyed;
    Energydrinkers = Customersurveyed * .15;
    Citrusenjoyers = Energydrinkers * .58;
    cout << "Out of " << Customersurveyed << " customers surveyed..." << endl;
    cout << "Approximately " << Energydrinkers << " customers purchase one or more energy drinks per week." << endl;
    cout << "Of those that purchase energy drinks..." << endl;
    cout << "Approximatley " << Citrusenjoyers << " customers prefer citrus-flavored energy drinks." << endl;


}
