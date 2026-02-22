/* create the code yourself */
/* Use Switch Statement */
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double PLAN_A_RATE = 39.99;
const double PLAN_B_RATE = 59.99;
const double PLAN_C_RATE = 79.99;

const int PLAN_A_INCLUDED = 2;
const int PLAN_B_INCLUDED = 8;

const double ADDITIONAL_RATE = 8.00;

int main()
{
    // Variables
    string userName;
    char plan;
    int gigabytesUsed;
    double totalBill = 0.00;

    // Input
    cout << "Enter your name: ";
    getline(cin, userName);
    
    cout << "Enter the plan purchased (A, B, or C): ";
    cin >> plan;

    while(plan != 'A' && plan != 'B' && plan != 'C')
    {
        cout << "\nThat is not a valid plan option." << endl;
        cout << "Enter the plan purchased (A, B, or C): ";
        cin >> plan;
    }

    cout << "Enter how many gigabytes were used: ";
    cin >> gigabytesUsed;

    // Processing
    switch(plan)
    {
        case 'A':
            totalBill = PLAN_A_RATE;
            if(gigabytesUsed > PLAN_A_INCLUDED){
                totalBill += (gigabytesUsed - PLAN_A_INCLUDED) * ADDITIONAL_RATE;
            }
            break;
        case 'B':
            totalBill = PLAN_B_RATE;
            if(gigabytesUsed > PLAN_B_INCLUDED){
                totalBill += (gigabytesUsed - PLAN_B_INCLUDED) * ADDITIONAL_RATE;
            }
        case 'C':
            totalBill = PLAN_C_RATE;
            break;
    }

    // Output - Bill
    cout << fixed << setprecision(2);
    cout << "\n---------- Monthly Bill ----------" << endl;
    cout << "Customer Name: " << userName << endl;
    cout << "Plan: " << plan << endl;
    cout << "Gigabytes Used: " << gigabytesUsed << endl;
    cout << "Total Amount Due: $" << totalBill << endl;
    cout << endl;
    // Savings
    if(plan == 'A')
    {
        double costB = PLAN_B_RATE;
        if(gigabytesUsed > PLAN_B_INCLUDED) {
            costB += (gigabytesUsed - PLAN_A_INCLUDED) * ADDITIONAL_RATE;
        }

        double costC = PLAN_C_RATE;

        if(costB < totalBill) {
            cout << "You would save $" << totalBill - costB << " by switching to Plan B" << endl;
        }
        if(costC < totalBill) {
            cout << "You would save $" << totalBill - costC << " by switching to Plan C" << endl;
        }
    }
    else if(plan == 'B')
    {
        double costC = PLAN_C_RATE;

        if(costC < totalBill) {
            cout << "You would save $" << totalBill - costC << " by switching to Plan C" << endl;
        }
    }

    return 0;
}