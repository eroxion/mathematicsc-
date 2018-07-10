
/*
Hello World!

Welcome to the source code of this program coded by Anusheel Soni of Class IX-C
for the project on Computer Science!

This program is fully written by me, 100% of it.

I convey this with a trust-promise that I have sincerely typed every single word in
this program all by myself and have not taken any help from any external sources.
Happy Staying! :) :D
*/

#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

int main()
{
    std::string name1;
    std::cout << "\n\n<----- ----------^---------- ----------^---------- ----------^---------- ----->" << std::endl;
    std::cout << "This program would love to know your name! :D :) :D :)" <<std::endl;
    std::getline (std::cin, name1);
    system("cls");
    std::cout << "\n\n<----- ----------^---------- ----------^---------- ----------^---------- ----->" << std::endl;
    std::cout << "\n" << name1 <<", What a lovely name!\n" << std::endl;
    std::cout << "Welcome to my project Mr/Ms " << name1 << "!\nThis is a simple input-output stream, string, cmath and windows.h library-headed program based on arithmetical operations on c++.\n"<<std::endl;
    std::cout << "\n\n<----- ----------^---------- ----------^---------- ----------^---------- ----->" << std::endl;

LIST:
    system("pause");
    system("cls");
    float num1, num2;
    std::cout << "\n\n<----- ----------^---------- ----------^---------- ----------^---------- ----->" << std::endl;

    std::cout << "\nPlease enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    system("cls");

    std::cout << "\n\n<----- ----------^---------- ----------^---------- ----------^---------- ----->" << std::endl;
    std::cout << "\nGreat! Now the program has your numbers! What do you want the program to with these numbers? :" << std::endl;
    std::cout << "\n 1. Addition, subtraction, multiplication, division." << std::endl;
    std::cout << " 2. Find Square root of first and second number." << std::endl;
    std::cout << " 3. Find Cube root of first and second number."  << std::endl;
    std::cout << " 4. Compare the first and the second number." << std::endl;
    std::cout << " 5. Show Time Table of the first number from 1 to 10." << std::endl;
    std::cout << " 6. Show Time Table of the second number from 1 to 10." << std::endl;
    std::cout << " 7. Find (1st no.)% of (2nd no.) and (2nd no.)% of (1st no.)." << std::endl;
    std::cout << " 8. Show Root table of the first number from 1 to 10." << std::endl;
    std::cout << " 9. Show Root table of the second number from 1 to 10." << std::endl;
    std::cout << "10. Do Even-Odd Detection." << std::endl;
    std::cout << "11. Factorization of both numbers." << std::endl;
    std::cout << "12. Find the Pythagorean Triplet of these numbers in cm." << std::endl;
    std::cout << "\n\n<----- ----------^---------- ----------^---------- ----------^---------- ----->" << std::endl;
    std::cout << "\nThat's all this program can do! Enter a number to choose your choice from the list of functions given." << std::endl;
    int x;
    std::cin >> x;
    system("cls");
    switch (x)
    {
    case 1:
OPP:
        std::cout << "Enter an operator to add, subtract, multiply or divide (+, -, *, /)";
        char o;
        std::cin >> o;
        switch (o)
        {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1+num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1-num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1*num2;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1/num2;
            break;
        default:
            // if the operator typed is wrong (+, -, *, /) or any other bug crashes
            std::cout << "\nError! something went wrong, retry.\n" << std::endl;
            system("pause");
            system("cls");
            goto OPP;
            break;
        }
        break;

    case 2:
        std::cout << "Square root of " << num1 << " = " << sqrt(num1) << std::endl;
        std::cout << "Square root of " << num2 << " = " << sqrt(num2) << std::endl;
        break;

    case 3:
        std::cout << "Cube root of " << num1 << " = " << cbrt(num1) << std::endl;
        std::cout << "Cube root of " << num2 << " = " << cbrt(num2) << std::endl;
        break;

    case 4:
        if(num1<num2)
        {
            std::cout << num1 << " is smaller than " << num2 << " which obviously means " << num2 << " is greater than " << num1 << std::endl;
        }
        if(num2<num1)
        {
            std::cout << num2 << " is smaller than " << num1 << " which obviously means " << num1 << " is greater than " << num2 << std::endl;
        }
        if(num1==num2)
        {
            std::cout << "Both the numbers are equal, i.e., " << num1 << " = " << num2 << "\n" << std::endl;
        }
        break;

    case 5:
        float t;
        t = 1;
        while(t <= 10)
        {
            std::cout << num1 << " * " << t << " = " << num1*t << std::endl;
            t++;
        }
        break;

    case 6:
        float tt;
        tt = 1;
        while(tt <= 10)
        {
            std::cout << num2 << " * " << tt << " = " << num2*tt << std::endl;
            tt++;
        }
        break;

    case 7:
        std::cout << num1 << "% of " << num2 << " = " << (num1/100)*num2 << std::endl;
        std::cout << num2 << "% of " << num1 << " = " << (num2/100)*num1 << std::endl;
        std::cout << "(Turns out to be the same, know why? As per the percentage rule, a% of x = x% of a.)" <<std::endl;
        break;

    case 8:
        float ro;
        ro = 1;
        while(ro <= 10)
        {
            std::cout << num1 << " ^ " << ro << " = " << pow(num1, ro) << std::endl;
            ro++;
        }
        break;

    case 9:
        float rt;
        rt = 1;
        while(rt <= 10)
        {
            std::cout << num2 << " ^ " << rt << " = " << pow(num2, rt) << std::endl;
            rt++;
        }
        break;

    case 10:
        float d;
        float di;
        d = fmod(num1, 2);
        if(d == 0)
        {
            std::cout << num1 << " is an even number" << std::endl;
        }
        else
        {
            std::cout << num1 << " is an odd number" << std::endl;
        }

        di = fmod(num2, 2);
        if(di == 0)
        {
            std::cout << num2 << " is an even number" << std::endl;
        }
        else
        {
            std::cout << num2 << " is an odd number" << std::endl;
        }
        break;

    case 11:
        int dc;
        float d1, d2;
        std::cout << "\n<----- ----------^---------- ----------^---------- ----------^---------- ----->\n" << std::endl;
        std::cout << "Factors of " << num1 << " are: " << std::endl;
        for (dc=1; dc<=num1; dc++)
        {
            d1 = fmod(num1, dc);
            if (d1 == 0)
                std::cout << dc << std::endl;
        }
        std::cout << "\n<----- ----------^---------- ----------^---------- ----------^---------- ----->\n" << std::endl;
        std::cout << "Factors of " << num2 << " are: " << std::endl;
        for (dc=1; dc<=num2; dc++)
        {
            d2 = fmod(num2, dc);
            if (d2 == 0)
                std::cout << dc << std::endl;
        }
        std::cout << "\n<----- ----------^---------- ----------^---------- ----------^---------- ----->\n" << std::endl;
        break;

    case 12:
        float nm1, nm2, py, pt;
        nm1 = (num1 * num1);
        nm2 = (num2 * num2);
        py = nm1 + nm2;
        pt = pow(py, 0.5);
        std::cout << "The Pythagorean Triplet of " << num1 <<" and " << num2 << " is: " << pt << std::endl;
        break;

    default:
        // if the program meets bug crashes
        std::cout << "\nError! something went wrong, retry.\n" << std::endl;
        goto LIST;
        break;

    }

LAST:
    std::cout << "" << std::endl;
    system("pause");
    system("cls");
    std::cout << "\nWant to repeat this program?(Y/N)"<< std::endl;
    char r;
    std::cin >> r;
    system("cls");
    switch (r)
    {
    case 'Y':
        goto LIST;
        break;

    case 'N':
        break;

    default:
        //If the input is not in Y/N
        std::cout << "Please Enter either Y or N only." << std::endl;
        goto LAST;
        break;
    }

    std::cout << "\n\n**^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^**" << std::endl;
    std::cout << "\n\nThank You very much Mr/Ms " << name1 << " for using my C++ program. This program was coded by Anusheel Soni of Class IX-C for the project on Computer Science. This program is fully written by me, 100% of it. I convey this with a trust-promise that I have sincerely typed every single word in this program all by myself and have not taken any help from any external sources. Goodbye! ;D" << std::endl;
    std::cout << "\n\n**^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^**" << std::endl;
    std::cout << "\n\nCreated By : Anusheel Soni\nClass : IX - C\nRoll No. : 9\nSubmitted As : Computer Science Project" << std::endl;
    std::cout << "\n\n**^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^***^_^***^-^**" << std::endl;
    system ("pause");
    return 0;
    //returns integer value of int main() to 0. This is required to recheck if the program functioned correctly and end the program.
}

