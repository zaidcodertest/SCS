// 11_5_22_SCS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//continue on building text editor
//this is the only file (for now) for the entire project, so this is the only one you need to compile.

#include <iostream>
#include <cstdio>
#include <string>

int keep_main_calclator = 0;

int keep_branched_calclator = -1;

int keep_addition_calclator = 0;

int keep_subtrction_calclator = 0;

int keep_tmes_calclator = 0;

int keep_divde_calclator = 0;

std::string filename;

int keep_window_open;

int main_branch;

void main_calculator()
{
    
    std::string main_calculator_messanger = "(-1 to quit) enter 0 for addition | enter 1 for subtraction | enter 2 for multiplication | enter 3 for devision\n";

    while (keep_main_calclator != -1)
    {
        std::cout << main_calculator_messanger;
        std::cin >> keep_branched_calclator;
        
        if (keep_branched_calclator == 0)
        {
            while (keep_addition_calclator != -2)
            {
                std::cout << "-addition goes here- (-2 to quit) ";
                //program addition calculator here
                std::cin >> keep_addition_calclator;
            }
        }
        if (keep_branched_calclator == 1)
        {
            while (keep_subtrction_calclator != -3)
            {
                std::cout << "-subtrction goes here- (-3 to quit) ";
                //program subtrction calculator here
                std::cin >> keep_subtrction_calclator;
            }
        }
        if (keep_branched_calclator == 2)
        {
            while (keep_tmes_calclator != -4)
            {
                std::cout << "-multiplication goes here- (-4 to quit) ";
                //program multiply calculator here
                std::cin >> keep_tmes_calclator;
            }
        }
        if (keep_branched_calclator == 3)
        {
            while (keep_divde_calclator != -5)
            {
                std::cout << "-division goes here- (-5 to quit) ";
                //program division calculator here
                std::cin >> keep_divde_calclator;
            }
        }
        if (keep_branched_calclator == -1)
        {
            keep_main_calclator = -1;
        }

        //keep_main_calclator = 0;

        //keep_branched_calclator = -1;

        keep_addition_calclator = 0;

        keep_subtrction_calclator = 0;
        
        keep_tmes_calclator = 0;

        keep_divde_calclator = 0;

        //if keep_main_calclator is not an integer, make it so that its not an infinite loop
    }
}

void main_texteditor()
{
    std::cout << "Enter name of your file: ";
    std::cin >> filename;
}

int main()
{
    

    //Greet user if wants to write to a text file or do calculatiosn
    std::cout << "Enter 0 for calculator, 1 for text writer\n";

    std::cin >> main_branch;

    if (main_branch == 0)
    {
        main_calculator();
    }
    if (main_branch == 1)
    {
        main_texteditor();
    }

    std::cout << "Enter anything to close window ";
    std::cin >> keep_window_open;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
