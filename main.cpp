#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;

class Menu{

private:


public:

    void MenuTitle(){//Function of the Menu Title.

        cout << "\t \t********************************************************** ";
        cout << " \n \t \t* ";
        cout << "\t \t  Welcome to Oliver v1.0 \t \t *" << endl; //Title.
        cout << "\t \t********************************************************** ";

        cout << " \n \t \t-1: About ";
        cout << " \n \t \t 0: Exit ";
        cout << " \n \t \t 1: Hello World Program ";
        cout << " \n \t \t 2: Print Number Entered Program ";
        cout << " \n \t \t 3: Add Two Numbers ";
        cout << " \n \t \t 4: Find Quotient and Remainder ";
        cout << " \n \t \t 5: Find Size of int, float, double, and char in Your System ";
        cout << " \n \t \t 6: Swap Two Numbers ";
        cout << " \n \t \t 7: Check Whether Number is Even or Odd ";
        cout << " \n \t \t 8: Check Whether a character is Vowel or Consonant ";
        cout << " \n \t \t 9: Find Largest Number Among Three Numbers ";
        cout << " \n \t \t 10: Find All Roots of a Quadratic Equation " << endl;
        cout << " \n \t \t 11: Next Page " << endl;
        cout << R"(
                            _
                     /|  / |_
                      | /   _)


                                                       )";


        cout << " \n \t \t Enter your choice: ";
        MenuChoice(); //Calling the Menu Choice Function


    }
    void MenuTitle2(){//Function of the Menu Title.

        cout << "\t \t********************************************************** ";
        cout << " \n \t \t* ";
        cout << "\t \t  Welcome to Oliver v1.0 \t \t *" << endl; //Title.
        cout << "\t \t********************************************************** ";

        cout << " \n \t \t-1: About ";
        cout << " \n \t \t 0: Exit ";
        cout << " \n \t \t 1: Calculate Sum of Natural Numbers  ";
        cout << " \n \t \t 2: Leap Year Program  ";
        cout << " \n \t \t 3: Find Factorial ";
        cout << " \n \t \t 4: Generate Multiplication Table ";
        cout << " \n \t \t 5: Display Fibonacci Series ";
        cout << " \n \t \t 6: Find GCD";
        cout << " \n \t \t 7: Find LCM";
        cout << " \n \t \t 8: Find HCF";
        cout << " \n \t \t 9: Reverse a Number";
        cout << " \n \t \t 10: Calculate Power of a Number ";
        cout << " \n \t \t 11: Increment ++ and Decrement -- Operator Overloading " << endl;
        cout << " \n \t \t 12: Previous Page " << endl;
        cout << " \n \t \t 13: Next Page " << endl;
        cout << R"(
                     _      _
                      )  / |_
                     /_ /   _)


                                                       )";

        cout << " \n \t \t Enter your choice: ";
        MenuChoice2(); //Calling the MenuChoice2 Function

    }
    void MenuChoice(){ //Menu1 Selections

        int MChoice; //Menu Choice variable
        cin >> MChoice; //The user enters a number to select a menu option

        switch(MChoice){
            case -1:
                MenuAbout();
                break;
            case 0:
                ProgramExit();
                break;
            case 1:
                HelloWorld();
                break;
            case 2:
                PrintNumber();
                break;
            case 3:
                AddTwoNumbers(10,5);
                break;
            case 4:
                QuotientandRemainder(20, 15, 10);
                break;
            case 5:
                SizeOf();
                break;
            case 6:
                SwapNumbers();
                break;
            case 7:
                EvenorOdd();
                break;
            case 8:
                VowelOrConsonant();
                break;
            case 9:
                LargestAmongThree();
                break;
            case 10:
                FindAllRoots();
                break;
            case 11:
                system("cls");
                MenuTitle2();
                break;
            default:
                system("cls");
                cout << "Enter a correct choice!" << endl;
                MenuTitle();
                break;
        }
    }
    void MenuChoice2(){ //Menu2 Selections

        int MChoice2; //Menu Choice variable
        cin >> MChoice2; //The user enters a number to select a menu option

        switch(MChoice2){
            case -1:
                MenuAbout();
                break;
            case 0:
                ProgramExit();
                break;
            case 1:
                NaturalNumbers();
                break;
            case 2:
                LeapYears();
                break;
            case 3:
                FindFactorial();
                break;
            case 4:
                MultiplicationTable();
                break;
            case 5:
                FibonacciSeries();
                break;
            case 6:
                GCD();
                break;
            case 7:
                LCD();
                break;
            case 8:
                HCF();
                break;
            case 9:
                ReverseNumber();
                break;
            case 10:
                PowerNumber();
                break;
            case 11:
                system("cls");
                MenuTitle2();
                break;
            case 12:
                system("cls");
                MenuTitle();
                break;
            case 13:
                MenuTitle2();
                break;
            default:
                system("cls");
                cout << "Enter a correct choice!" << endl;
                MenuTitle();
                break;
        }
    }
    void MenuAbout(){

        system("cls");

        char choice;

        cout <<
        "Developer: Oliver Maldonado \n"
        "\nSummary: \n"
        "The reason I created this software was to test my C++ skills all in one place \n"
        "and find a way to find a use for each code all together. I hope you like it just as much \n"
        "as i enjoyed making this program.";

        ChoiceSelection:
        cout << "\n \nDo you want to return to the Menu (Y/N): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y'){
            system("cls");
            MenuTitle();

        }
        else if (choice == 'n' || choice == 'N'){
            exit(0);
        }
        else{
            system("cls");
            cout << "\n \t \t Error, Please Enter the right choice!" << endl;
            goto ChoiceSelection;
        }
    }
    void ProgramExit(){
        exit(0);
    }
    void HelloWorld(){
        string Text;

        char choice;

        Text = "\n \t \t Hello World!";

        system("cls");

        cout << Text;

        ChoiceSelection:
        cout << "\n \t Want to return to the Menu (Y/N): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            system("cls");
            MenuTitle();
        }
        else if(choice == 'n' || choice == 'N')
            ProgramExit();
            else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection;

            }

    }
    void PrintNumber(){

        int NumberEntered;

        char choice;

        system("cls");


        cout << "\n \t \t Welcome to a C++ Program to Print Number Entered By User!";

        cout << "\n \t \t Enter a number from (-2,147,483,647 - 2,147,483,647): ";
        cin >> NumberEntered;       //User enters a value.

        cout << "\n \t \t The number you entered is: " << NumberEntered << endl; // Prints number entered by User.

        NumberEnteredRestart:
        cout << "\n \t \t Do you want to return to the Menu (Y/N): ";
        cin >> choice;      //User enters a value.

        if(choice == 'y' || choice == 'Y'){ //If condition is true it will return you to tile screen.
            system("cls");
            MenuTitle();
        }
        else if(choice == 'n' || choice == 'N'){ //If condition is false program will exit.
            exit(0);
        }
        else{
            system("cls");
            cout << "\n \t \t Error, Please Enter the right choice!" << endl;
            goto NumberEnteredRestart;
        }

    }
    int AddTwoNumbers(int ax, int ay){          //int ax = 10 // int ay = 5

    system("cls");

    char choice;

    int NumberChoice;
    int FirstNumber, SecondNumber;

    //Random Number Generator from 1024 to 1.
    int randomx, randomy;
    randomx = rand() % 1024 + 1;
    randomy = rand() % 1024 + 1;
    //Random Seed Generator is found in Main.

    //Numbers being passed through a constructor with parameters.
    int x = ax;     //The number passed is ax which are now x
    int y = ay;     //The number passed is ay which are now y
    int sum = x + y;   // 10 + 5 = 15
    //Numbers being passed through a constructor with parameters.

    Restart:
    cout << "\n \t \t Welcome to a C++ Program to Add Two Numbers! ";

    cout << "\n \t \t 0: Return to the Menu ";
    cout << "\n \t \t 1: Add Two Numbers in the System ";
    cout << "\n \t \t 2: Add Two Random Numbers in the System ";
    cout << "\n \t \t 3: Enter Two Numbers to Add ";

    cout << "\n \t \t Enter your choice: ";
    cin >> NumberChoice;

    if (NumberChoice == 0){
        system("cls");
        MenuTitle();

    }
    else if(NumberChoice == 1){

        system("cls");
        cout << "First number: " << x << " \nSecond Number: " << y << endl;
        cout << x << " + " << y << " = " << sum;

        cout << "\n \n \t \t Do you want to return to the Menu (Y/N): ";
        cin >> choice;      //User makes a choice.

        if(choice == 'y' || choice == 'Y'){ //If condition is true it will return you to tile screen.
            system("cls");
            goto Restart;
        }
        else if(choice == 'n' || choice == 'N'){ //If condition is false program will exit.
            exit(0);
        }

    }
    else if (NumberChoice == 2){
        system("cls");
        cout << "First number: " << randomx << " \nSecond Number: " << randomy << endl;
        cout << randomx << " + " << randomx << " = " << randomx + randomy;

        cout << "\n \n \t \t Do you want to return to the Menu (Y/N): ";
        cin >> choice;      //User makes a choice.

        if(choice == 'y' || choice == 'Y'){ //If condition is true it will return you to tile screen.
            system("cls");
            goto Restart;
        }
        else if(choice == 'n' || choice == 'N'){ //If condition is false program will exit.
            exit(0);
        }
    }
    else if(NumberChoice == 3){
        system("cls");
        cout << "Enter the First Number: ";
        cin >> FirstNumber;
        cout << "Enter the Second Number: ";
        cin >> SecondNumber;
        cout << "The sum is: " << FirstNumber + SecondNumber;

       cout << "\n \n \t \t Do you want to return to the Menu (Y/N): ";
        cin >> choice;      //User makes a choice.

        if(choice == 'y' || choice == 'Y'){ //If condition is true it will return you to tile screen.
            system("cls");
            goto Restart;
        }
        else if(choice == 'n' || choice == 'N'){ //If condition is false program will exit.
            exit(0);
        }

        }
        else{
            system("cls");
            cout << "\n \t \t Error, Please Enter the right choice!" << endl;
            goto Restart;
        }

    }
    int QuotientandRemainder(int ax, int ay, int az){ //int ax = 20 //int ay = 15 //int az = 10

        system("cls");

        int MenuSelection;
        int MenuSelection2;

        int randomx, randomy, randomz;

        randomx = rand() % 1024 + 1;
        randomy = rand() % 64 + 1;
        randomz = rand() % 1024 + 1;

        int x = ax;
        int y = ay;
        int z = az;

        cout << "\n \t \t Welcome to a C++ Program to find Quotient & Remainder! ";

        cout << "\n \t \t 0: Return to the Menu ";
        cout << "\n \t \t 1: Find Quotient & Remainder of Numbers in System ";
        cout << "\n \t \t 2: Find Random Quotient & Remainder of Numbers in System ";
        cout << "\n \t \t 3: Enter Two Numbers to Find Quotient & Remainder ";

        cout << "\n \t \t Enter a Choice: ";
        cin >> MenuSelection;

        switch(MenuSelection){
    case 0:
        system("cls");
        MenuTitle();
        break;

    case 1:
        system("cls");
        cout << "\n \t \t X: " << x << endl;
        cout << "\n \t \t Y: " << y << endl;
        cout << "\n \t \t Z: " << z << endl;

        cout << "\n \t \t Quotient: " << x/y << endl;
        cout << "\n \t \t Remainder: "<< x%y << endl;

        break;

    case 2:
        system("cls");
        cout << "\n \t \t X: " << randomx << endl;
        cout << "\n \t \t Y: " << randomy << endl;
        cout << "\n \t \t Z: " << randomz << endl;

        cout << "\n \t \t Quotient: " << randomx/randomy << endl;
        cout << "\n \t \t Remainder: "<< randomx%randomy << endl;
        break;

    case 3:


        cout << "\n \t \t Enter a Number for x: ";
        cin >> x;
        cout << "\n \t \t Enter a number for y: ";
        cin >> y;

        system("cls");

        cout << "\n \t \t x: " << x << endl;
        cout << "\n \t \t y: " << y << endl;

        cout << "\n \t \t 1: Find Quotient" << endl;
        cout << "\n \t \t 2: Find Remainder" << endl;
        cout << "\n \t \t 3: Find Both Quotient & Remainder" << endl;
        cout << "Enter a choice: ";
        cin >> MenuSelection2;

        system("cls");

        MenuSelection2:
        switch(MenuSelection2){

        }

    if (MenuSelection2 == 1){
        system("cls");
        cout << "\n \t \t Quotient: " << x/y << endl;
    }

    else if (MenuSelection2 == 2){
        system("cls");
        cout << "\n \t \t Remainder: "<< x%y << endl;
    }

    else if (MenuSelection2 == 3){
        system("cls");
        cout << "\n \t \t X: " << x << endl;
        cout << "\n \t \t Y: " << y << endl;
        cout << "\n \t \t Z: " << z << endl;

        cout << "\n \t \t Quotient: " << x/y << endl;
        cout << "\n \t \t Remainder: "<< x%y << endl;
    }

    else{
        goto MenuSelection2;
    }



        break;
    default:
        break;
        }
    }
    void SizeOf (){

        system("cls");

        int MenuSelection;
        char choice;

        Restart:
        cout << "\n \t \t Welcome to a C++ Program to find the Size of a variable" << endl;

        cout << "\n \t \t 0: Return to the Menu" << endl;
        cout << "\n \t \t 1: Find the size of an Int" << endl;
        cout << "\n \t \t 2: Find the size of a Short" << endl;
        cout << "\n \t \t 3: Find the size of a Long" << endl;
        cout << "\n \t \t 4: Find the size of a Bool" << endl;
        cout << "\n \t \t 5: Find the size of a Double" << endl;
        cout << "\n \t \t 6: Find the size of a Float" << endl;
        cout << "\n \t \t 7: Find the size of a Char" << endl;

        cout << "\n \t \t Enter a choice: ";
        cin >> MenuSelection;

        switch(MenuSelection){
        case 0:
        system("cls");
        MenuTitle();
        break;
        case 1:
        system("cls");
        cout << "\n \t \t Type of variable: " << "integer / int" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(int) << " bytes" << endl;
        break;
        case 2:
        system("cls");
        cout << "\n \t \t Type of variable: " << "Short" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(short) << " bytes" << endl;

        break;
        case 3:
        system("cls");
        cout << "\n \t \t Type of variable: " << "Long" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(long) << " bytes" << endl;
        break;
        case 4:
        system("cls");
        cout << "\n \t \t Type of variable: " << "Boolean / Bool" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(bool) << " bytes" << endl;
        break;
        case 5:
            system("cls");
        cout << "\n \t \t Type of variable: " << "Double" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(double) << " bytes" << endl;
        break;
        case 6:
            system("cls");
        cout << "\n \t \t Type of variable: " << "Float" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(float) << " bytes" << endl;
        break;
        case 7:
            system("cls");
        cout << "\n \t \t Type of variable: " << "Character / Char" << endl;
        cout << "\n \t \t Number of bytes: " << sizeof(char) << " bytes" << endl;
        break;
        default:
            system("cls");
            cout << "Enter a correct choice!" << endl;
            goto Restart;
            break;



        }
    }
    void SwapNumbers(){

        system("cls");

        int a, b, temp;
        int MenuSelection, MenuSelection2;
        char choice;

        a = 0;
        b = 0;

        restart:
        cout << "\n \t \t Welcome to a C++ Program to Swap Numbers from Variable to Variable!" << endl;

        cout << "\n \t \t 0: Return the Menu" << endl;
        cout << "\n \t \t 1: Enter a Number for Variables A or B" << endl;
        cout << "\n \t \t Enter a choice: ";
        cin >> MenuSelection;

        if (MenuSelection == 0){
            system("cls");
            MenuTitle();
        }
        else if (MenuSelection == 1){

            system("cls");

            cout << "\n \t \t Currently - A: " << a << " B: " << b << endl;
            cout << "\n \t \t Enter a value for A: ";
            cin >> a;
            cout << "\n \t \t Enter a value for B: ";
            cin >> b;

            system("cls");

            cout << "\n \t \t Currently - A: " << a << " B: " << b << endl;

            cout <<"\n \t \t 1: Do you want to swap A with B" << endl;

            cout << "\n \t \t Enter a choice: ";
            cin >> MenuSelection2;

            if (MenuSelection2 == 1){
                temp = a; // for example, a = 1 ; b = 2 // temp = 1
                a = b; // b = 1
                b = temp; // now temp = 2 therefore a = 2 since 'temp = a'

                cout << "\n \t \t Now - A: " << a << " B: " << b << endl;
            }

            else{
                system("cls");
                cout << "\n \t \t Enter the right choice!";
                goto restart;
        }
    }

}
    void EvenorOdd(){

             system("cls");

             int MenuSelection, MenuSelection2;
             int OddNumber, EvenNumber;
             char choice;

             string option1, option2, option3, option4, answer;

             option1 = "\n \t \t 1: Return to the Menu";
             option2 = "\n \t \t 2: Odd number tester";
             option3 = "\n \t \t 3: Even number tester";
             option4 = "\n \t \t 4: Odd & Even number tester";


             EvenorOdd:
             cout << "\n \t \t Welcome to a C++ Program on How to find Even or Odd Number" << endl;
             cout << option1 << endl;
             cout << option2 << endl;
             cout << option3 << endl;
             cout << option4 << endl;
             cout << "\n \t \t Enter a choice: ";
             cin >> MenuSelection;

             if(MenuSelection == 1){
               system("cls");
               MenuTitle();

             }
               else if(MenuSelection == 2){

                system("cls");

                cout << "\n \t \t Welcome to the Odd number tester!" << endl;
                cout << "\n \t \t Enter a number: ";
                cin >> OddNumber;

                answer = !(OddNumber % 2 == 0) ? "\n \t \t Yes number is Odd" : "\n \t \t No Number is not Odd";

                cout << answer << endl;

    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }


             }
             else if (MenuSelection == 3){

              cout << "\n \t \t Welcome to the Even number tester!" << endl;

                cout << "\n \t \t Enter a number: ";
                cin >> EvenNumber;

                answer = (EvenNumber % 2 == 0) ? "\n \t \t Yes number is Even" : "\n \t \t No Number is not Even";

                cout << answer << endl;


    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }


             }

    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
         }
    void VowelOrConsonant(){

            system("cls");

            char MenuSelection;
            char choice;

            cout << "\n \t \t Welcome to a C++ Program on How to Find Vowel or Consonant!" << endl;

            VowelOrConsonant:

            cout << "\n \t \t Enter a letter: ";
            cin >> MenuSelection;

            if (MenuSelection == 'A' ||  MenuSelection == 'a' || MenuSelection == 'E' || MenuSelection == 'e' || MenuSelection == 'I' || MenuSelection == 'i' || MenuSelection == 'O' || MenuSelection == 'o' || MenuSelection == 'U' || MenuSelection == 'u' )

                {
                    cout << "\n \t \t Letter: " << MenuSelection << endl;
                    cout << "\n \t \t Type: Vowel " << endl;

                }
                else{
                    cout << "\n \t \t Letter: " << MenuSelection << endl;
                    cout << "\n \t \t Type: Consonant " << endl;
                }

    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }

    }

    //Part of void LargestAmongThree(){
    int Procedure (int xa, int xb, int xc){

            int a = xa;
            int b = xb;
            int c = xc;

            if(a > b && a > c) {
                cout << "\n \t \t " << a << " is bigger than b & c" << endl;
            }
            else if (b > a && b > c){
                cout << "\n \t \t " << b << " is bigger than a & c" << endl;
            }
            else if (c > a && c > b)
            {
                cout << "\n \t \t " << c << " is bigger than a & b" << endl;
            }
                else{
                    cout << "\n \t \t They are equal" << endl;
                }

         }
    void LargestAmongThree(){

         system("cls");

         int a, b, c;

         cout << "\n \t \t Welcome to a C++ Program to Find the Largest Number among all Three!" << endl;

         cout << "\n \t \t Enter all three numbers in this order: (a | b | c) ";
         cin >> a;
         cout << "\n \t \t Enter all three numbers in this order: (a | b | c) ";
         cin >> b;
         cout << "\n \t \t Enter all three numbers in this order: (a | b | c) ";
         cin >> c;

        Procedure(a, b, c);

    }

    //Part of void FindAllRoots(){
    int roots (int xa, int xb, int xc){ //int xa = a //int xb = b// int xc = c

            int a = xa;
            int b = xb;
            int c = xc;

            int determinant = (b*b) - (4*a*c);

            long double x1, x2, imaginaryPart, Real;

            x1 = (-b + sqrt((b*b) - (4*a*c)))/(2*a);
            x2 = (-b - sqrt((b*b) - (4*a*c)))/(2*a);

            imaginaryPart = sqrt(-determinant)/(2*a);

            if (determinant > 0){

                x1;
                x2;
                cout << "\n \t \t X1: " << x1 << endl;
                cout << "\n \t \t X2: " << x2 << endl;

            }
            else if(determinant == 0){

                x1;
                cout << "\n \t \t X1: " << x1 << endl;
                cout << "\n \t \t X2: " << x2 << endl;
            }
            else if(determinant < 0){

                Real = -b/(2*a);
                imaginaryPart;

                cout << "\n \t \t Roots are complex and different."  << endl;
                cout << "\n \t \t x1 = " << Real << "+" << imaginaryPart << "i" << endl;
                cout << "\n \t \t x2 = " << Real << "-" << imaginaryPart << "i" << endl;
            }

         return 0;


            }
    void FindAllRoots(){

        system("cls");


        int a = 1;
        int b = 1;
        int c = 1;

        char choice;

            cout << "\n \t \t Welcome to a C++ Program to Find all Roots!" << endl;

            cout << "\n \t \t Enter a number for a: ";
            cin >> a;
            cout << "\n \t \t Enter a number for b: ";
            cin >> b;
            cout <<"\n \t \t Enter a number for c: ";
            cin >> c;
            roots(a, b, c); //Calling the 'int roots' function and passing variables a, b, c to the parameters. a = ax, b = xb, c = xc.

    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
}

    void NaturalNumbers(){

        system("cls");

        int x, i, sum;
        char choice;

        sum = 0;

        cout << "\n \t \t Welcome to a C++ Program to find the Sum of Natural Numbers!" << endl;

        cout << "\n \t \t Enter a number: ";
        cin >> x;

        for (int i = 0; i <= x; i++) {

        sum = sum + i;

        cout << "\n \t \t  " << i << " ";

        }

        cout << "\n \n \t \t Total: " << sum << endl;

        ChoiceSelection: //ChoiceSelection is a Loop.
        cout << "\n \t \t Want to return to the Menu (Y/N): ";
        cin >> choice; //User inputs the number choice.

        if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }

    }
    void LeapYears(){

        system("cls");

        int years;
        char choice;

    cout << "\n \t \t Welcome to a C++ Program to Find Whether a Year is Leap or Not!" << endl;

    cout << "\n \t \t Enter the year: ";
    cin >> years;

    if ((years % 4 == 0) && (years % 100 != 0)){
        cout << "\n \t \t " << years << " is a leap year" << endl;
    }
        else if (years % 400 == 0){
            cout << "\n \t \t " << years << " is a leap year" << endl;
        }
            else{
                cout << "\n \t \t " << years << " is not a leap year" << endl;
            }
    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

        }

}
    void FindFactorial(){

    system("cls");

    int n, i, total;
    char choice;
    total = 1;

    cout << "\n \t \t Welcome to a C++ Program to Find Factorial of a Number!" << endl;

    cout << "\n \t \t Enter a Positive Integer: ";
    cin >> n;

    for(i = 1; i <= n; ++i ){

        total = total * i;

    }
        cout << "\n \t \t Total: " << total << endl;
        ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
}
    void MultiplicationTable(){

    system("cls");

    int number, numberTo, i;
    char choice;

    cout << "\n \t \t Welcome to a C++ Program to Generate a Multiplication Table!" << endl;

    cout << "\n \t \t Enter what number for the multiplication: ";
    cin >> i;
    cout << "\n \t \t Enter the start of the multiplication: ";
    cin >> number;
    cout << "\n \t \t Enter the ending of the multiplication: ";
    cin >> numberTo;

    for (int number = 0;  number <= numberTo; number++){



        cout <<"\n \t \t " << i << " * " << number << " = " << i * number << endl;

    }
    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
}
    void FibonacciSeries(){

    system("cls");

    int FirstTerm, SecondTerm, ThirdTerm, n;
    int sequence = 0;

    char choice;

    FirstTerm = 0;
    SecondTerm = 1;

    cout << "\n \t \t Welcome to a C++ Program to Display Fibonacci Series!" << endl;

    cout << "\n \t \t Enter the nth Term: ";
    cin >> n;

    for(int i = 1; i <= n; ++i){



            if (i == 1){
                    cout << "\n \t \t " << FirstTerm << " , ";

                    continue;
            }
            if(i == 2){
                    cout << "\n \t \t " << SecondTerm << " , ";

                    continue;
                    }

            ThirdTerm = SecondTerm + FirstTerm;
            FirstTerm = SecondTerm;
            SecondTerm = ThirdTerm;
            cout << ThirdTerm << " , ";


            }
    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
    }
    void GCD(){

        system("cls");

            int a, i, x, d;
            char choice;

            x = 0;
            d = 0;

            cout << "\n \t \t Welcome to a C++ Program to Find the Greatest Common Denominator!" << endl;

            cout << "\n \t \t Enter a number: ";
            cin >> a;

            for (int i = 1; i != a; i++){

                if (a % i == 0){

                    if (d < i)
                        d = i;

                    cout << "\n \t \t " << i << "  ";
                }

            }
            cout << "\n \n \t \t GCD: " << d << endl;

            ChoiceSelection: //ChoiceSelection is a Loop.
            cout << "\n \t Want to return to the Menu (Y/N): ";
            cin >> choice; //User inputs the number choice.

             if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
                {
                    system("cls"); //Clears the console.
                    MenuTitle2();
                }
                else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
                    ProgramExit(); //Exit program function.

                else{
                        system("cls");
                        cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                        goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

                }

    }
    void LCD(){

    system("cls");

    int x, y, z, i;
    char choice;

    y = 1;

    cout << "\n \t \t Welcome to C++ Program to Find the Lowest Common Denominator!" << endl;

    cout << "\n \t \t Enter a Integer: " << endl;
    cin >> x;

    for (int i = 1; i !=x; i++){
        if (x % i == 0){
            if (y >= i)
                y = i;

            cout << "\n \t \t " << i << " ";

        }


    }
    cout << "\n \n \t \t LCD: " << y << endl;

    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2();
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
}
    void HCF(){

    system("cls");

    int x, y, i, HCF;
    char choice;

    x = 1;
    i = 1;

    system("cls");
    cout << "\n \t \t Welcome to a C++ Program to Find the HCF!" << endl;
    cout << "\n \t \t Enter the first number: ";
    cin >> x; //User inputs the first number.
    cout << "\n \t \t Enter the second number: ";
    cin >> y; //User inputs the second number.

    for (int i = 1; i <=  y; ++i) {
        if (x % i == 0 && y % i ==0) {
            HCF = i;
        }
    }

    cout << "\n \n \t \t HCF: " << HCF;


    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2(); //Calls of 2nd Title Screen.
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
    }
    void ReverseNumber(){

    system("cls");

    int x, Remainder, ReverseNumber;
    char choice;

    ReverseNumber = 0;

    cout << "\n \t \t Welcome to a C++ Program to Reverse a Number!" << endl;

    cout << "\n \t \t Enter an Integer: ";
    cin >> x; //User inputs an integer.

    while(x != 0){ //
        Remainder = x % 10; //1245 % 10 = 5, Therefore Remainder is 5.
        ReverseNumber = ReverseNumber *10 + Remainder;  //0 = 0 * 10 + 5 = 5, Therefore ReverseNumber is 5. Each loop is gonna print ReverseNumber.
        x = x / 10; //12345 / 10 = 1234, After this the loop will start again.

    }
    cout << "\n \t \t Reverse Number: " << ReverseNumber; //Displays the Reverse Number.

    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2(); //Calls of 2nd Title Screen.
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }
}
    void PowerNumber(){

    system("cls");

    int base, power;
    int result = 1;

    char choice;

    cout << "\n \t \t Welcome to a C++ Program to find the Power w/ Base!" << endl; // Title.

    cout << "\n \t \t Enter the base: ";
    cin >> base; //The user inputs the integer base.
    cout << "\n \t \t Enter the power: ";
    cin >> power; //The user inputs the integer exponent.

    cout << "\n \t \t Base: " << base << "\n \t \t Exponent: " << power << endl; //Displays base and exponent.

     while(power != 0){ //While variable power is not equal to 0, the loop will execute.
        result = result * base; //Result = 1 //Base = 2 // Power = 2// 1 = 1 * 2, Therefore Result = 2; Power = 1; then Result is 2 * 2 = 4; Power = 0;
         --power; // --1 every time loop is executed.
     }

    cout << "\n \t \t Result: " << result; //Displays the result.

    ChoiceSelection: //ChoiceSelection is a Loop.
    cout << "\n \n \t Want to return to the Menu (Y/N): ";
    cin >> choice; //User inputs the number choice.

     if (choice == 'y' || choice == 'Y') //User Enters 'y' or 'Y' for condition to be true.
        {
            system("cls"); //Clears the console.
            MenuTitle2(); //Calls of 2nd Title Screen.
        }
        else if(choice == 'n' || choice == 'N') //User Enters 'n' or 'N' for condition to be true
            ProgramExit(); //Exit program function.

        else{
                system("cls");
                cout << "\n \t \t Error, Please Enter the right choice!" << endl;
                goto ChoiceSelection; //Loops back to the function we created "ChoiceSelection:"

            }

    }

};

int main() //Main Function

{
    srand(time(0));
    Menu ProgramMenu; //Creating a class object from class "Menu", it's called ProgramMenu.
    ProgramMenu.MenuTitle(); //MenuTitle(); function is inside class object ProgramMenu.

    return 0;
}

