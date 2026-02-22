#include <iostream>

using namespace std;

int main()
{
	int lengthOne;
    int widthOne;
    int lengthTwo;
    int widthTwo;
    int areaOne;
    int areaTwo;

    cout << "Enter the length of the first rectangle: ";
    cin >> lengthOne;
    cout << "Enter the width of the first rectangle: ";
    cin >> widthOne;

    cout << "Enter the length of the second rectangle: ";
    cin >> lengthTwo;
    cout << "Enter the width of the second rectangle: ";
    cin >> widthTwo;

    cout << endl;

    areaOne = lengthOne * widthOne;
    areaTwo = lengthTwo * widthTwo;

    if(areaOne > areaTwo)
    {
        cout << "The 1st rectangle has the greater area" << endl;
    }
    else if(areaOne < areaTwo)
    {
        cout << "The 2nd rectangle has the greater area" << endl;
    }
    else
    {
        cout << "The areas are the same" << endl;
    }

    return 0;
}

