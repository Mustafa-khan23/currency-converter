#include <iostream.h>   // Include header file for input-output operations (cout, cin)
#include <conio.h>      // Include header file for console input-output functions (getch(), clrscr())

// ================= BASE CLASS =================
class Currency {        // Define base class named Currency
protected:              // Protected access specifier - members accessible in derived classes
    float amount;       // Declare protected float variable to store currency amount

public:                 // Public access specifier - members accessible from outside
    // function to take amount input
    void setAmount() {  // Define member function to input amount from user
        cout << "\nEnter amount: ";  // Display prompt message on screen
        cin >> amount;  // Read float value from keyboard into amount variable
    }                   // End of setAmount function
};                      // End of Currency class definition

// ================= DERIVED CLASS =================
class Converter : public Currency {   // Define derived class Converter inheriting publicly from Currency
public:                 // Public access specifier for derived class members

    // function to display menu
    void showMenu() {   // Define member function to display menu options
        cout << "\n==============================";  // Print top border line
        cout << "\n     Currency Converter";       // Print program title
        cout << "\n==============================";  // Print separator line
        cout << "\n1. USD to INR";                  // Print menu option 1
        cout << "\n2. INR to USD";                  // Print menu option 2
        cout << "\n3. USD to EUR";                  // Print menu option 3
        cout << "\n4. EUR to USD";                  // Print menu option 4
        cout << "\n5. USD to GBP";                  // Print menu option 5
        cout << "\n6. GBP to USD";                  // Print menu option 6
        cout << "\n7. INR to EUR";                  // Print menu option 7
        cout << "\n8. EUR to INR";                  // Print menu option 8
        cout << "\n9. USD to JPY";                  // Print menu option 9
        cout << "\n10. JPY to USD";                 // Print menu option 10
        cout << "\n11. INR to GBP";                 // Print menu option 11
        cout << "\n12. GBP to INR";                 // Print menu option 12
        cout << "\n13. EUR to GBP";                 // Print menu option 13
        cout << "\n14. GBP to EUR";                 // Print menu option 14
        cout << "\n15. AUD to INR";                 // Print menu option 15
        cout << "\n16. Exit";                       // Print exit option
        cout << "\n------------------------------";  // Print separator line
        cout << "\nEnter your choice: ";            // Prompt user for choice input
    }                   // End of showMenu function

    // function to perform conversion
    void convert(int choice) {  // Define member function with int parameter for conversion
        float result;           // Declare local float variable to store calculated result

        setAmount();            // Call base class function to get amount input (inheritance)

        switch(choice) {        // Start switch statement based on user's choice
            case 1:             // Case for USD to INR conversion
                result = amount * 83;   // Multiply amount by 83 to convert USD to INR
                cout << "\nResult: " << amount << " USD = " << result << " INR";  // Display result
                break;          // Exit switch statement

            case 2:             // Case for INR to USD conversion
                result = amount * 0.012;  // Multiply amount by 0.012 to convert INR to USD
                cout << "\nResult: " << amount << " INR = " << result << " USD";  // Display result
                break;          // Exit switch statement

            case 3:             // Case for USD to EUR conversion
                result = amount * 0.92;   // Multiply amount by 0.92 to convert USD to EUR
                cout << "\nResult: " << amount << " USD = " << result << " EUR";  // Display result
                break;          // Exit switch statement

            case 4:             // Case for EUR to USD conversion
                result = amount * 1.08;   // Multiply amount by 1.08 to convert EUR to USD
                cout << "\nResult: " << amount << " EUR = " << result << " USD";  // Display result
                break;          // Exit switch statement

            case 5:             // Case for USD to GBP conversion
                result = amount * 0.79;   // Multiply amount by 0.79 to convert USD to GBP
                cout << "\nResult: " << amount << " USD = " << result << " GBP";  // Display result
                break;          // Exit switch statement

            case 6:             // Case for GBP to USD conversion
                result = amount * 1.26;   // Multiply amount by 1.26 to convert GBP to USD
                cout << "\nResult: " << amount << " GBP = " << result << " USD";  // Display result
                break;          // Exit switch statement

            case 7:             // Case for INR to EUR conversion
                result = amount * 0.011;  // Multiply amount by 0.011 to convert INR to EUR
                cout << "\nResult: " << amount << " INR = " << result << " EUR";  // Display result
                break;          // Exit switch statement

            case 8:             // Case for EUR to INR conversion
                result = amount * 90;     // Multiply amount by 90 to convert EUR to INR
                cout << "\nResult: " << amount << " EUR = " << result << " INR";  // Display result
                break;          // Exit switch statement

            case 9:             // Case for USD to JPY conversion
                result = amount * 110;    // Multiply amount by 110 to convert USD to JPY
                cout << "\nResult: " << amount << " USD = " << result << " JPY";  // Display result
                break;          // Exit switch statement

            case 10:            // Case for JPY to USD conversion
                result = amount * 0.009;  // Multiply amount by 0.009 to convert JPY to USD
                cout << "\nResult: " << amount << " JPY = " << result << " USD";  // Display result
                break;          // Exit switch statement

            case 11:            // Case for INR to GBP conversion
                result = amount * 0.0095; // Multiply amount by 0.0095 to convert INR to GBP
                cout << "\nResult: " << amount << " INR = " << result << " GBP";  // Display result
                break;          // Exit switch statement

            case 12:            // Case for GBP to INR conversion
                result = amount * 105;    // Multiply amount by 105 to convert GBP to INR
                cout << "\nResult: " << amount << " GBP = " << result << " INR";  // Display result
                break;          // Exit switch statement

            case 13:            // Case for EUR to GBP conversion
                result = amount * 0.86;   // Multiply amount by 0.86 to convert EUR to GBP
                cout << "\nResult: " << amount << " EUR = " << result << " GBP";  // Display result
                break;          // Exit switch statement

            case 14:            // Case for GBP to EUR conversion
                result = amount * 1.16;   // Multiply amount by 1.16 to convert GBP to EUR
                cout << "\nResult: " << amount << " GBP = " << result << " EUR";  // Display result
                break;          // Exit switch statement

            case 15:            // Case for AUD to INR conversion
                result = amount * 55;     // Multiply amount by 55 to convert AUD to INR
                cout << "\nResult: " << amount << " AUD = " << result << " INR";  // Display result
                break;          // Exit switch statement

            default:            // Default case for invalid choice
                cout << "\nInvalid choice!";  // Display error message
        }                       // End of switch statement
    }                           // End of convert function

    // main running loop
    void run() {                // Define member function to run the program loop
        int choice;             // Declare local int variable to store user's menu choice
        char again;             // Declare local char variable to store continue choice

        do {                    // Start do-while loop (executes at least once)
            showMenu();         // Call function to display menu
            cin >> choice;      // Read integer choice from keyboard

            if (choice >= 1 && choice <= 15) {  // Check if choice is valid (1-15)
                convert(choice);                // Call convert function with user's choice
            }                       // End of if block
            else if (choice == 16) {            // Check if user chose to exit
                cout << "\nProgram terminated.";  // Display termination message
                break;              // Exit the do-while loop
            }                       // End of else-if block
            else {                  // If choice is invalid
                cout << "\nInvalid input!";       // Display error message
            }                       // End of else block

            cout << "\n\nDo you want to continue? (y/n): ";  // Ask user to continue
            cin >> again;           // Read character input from keyboard

        } while (again == 'y' || again == 'Y');  // Continue loop if user enters 'y' or 'Y'
    }                           // End of run function
};                              // End of Converter class definition

// ================= MAIN FUNCTION =================
int main() {                    // Main function - program execution starts here
    clrscr();                   // Clear the console screen
    Converter obj;              // Create object of derived class Converter
    obj.run();                  // Call run() function using object to start program
    getch();                    // Wait for user to press any key before closing
    return 0;                   // Return 0 to indicate successful program termination
}                               // End of main function