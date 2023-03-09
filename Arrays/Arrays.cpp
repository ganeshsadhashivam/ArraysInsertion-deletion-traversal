// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = { 33,22,44,5,1 };

    //traversing
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {

        cout << "index " << i << " value is " << arr[i] <<endl;
    }


    //insertion in array
    int valueToInsert,positionToInsert,backup=0;
    cout << " Enter the value you want to insert in array" << endl;
    cin >> valueToInsert;


    cout << " Enter the Position you want to insert in array between" << 0 <<   "   " << sizeof(arr) / sizeof(int) - 1 << endl;
    cin >> positionToInsert;

    for (int i = (sizeof(arr) / sizeof(int)); i >= positionToInsert; i--)
             arr[i + 1] = arr[i];
    arr[positionToInsert] = valueToInsert;


    cout << "After the insertion of element" << endl;

    //traversing
    for (int i = 0; i <= sizeof(arr) / sizeof(int); i++) {

        cout << "index " << i << " value is " << arr[i] << endl;
    }





    //deletion of an element in an array
    int positionToDelete;
    cout << " Enter the Position you want to delete in array" << endl;
    cin >> positionToDelete;

    for (int i = positionToDelete; i < sizeof(arr) / sizeof(int); i++) {
        arr[i] = arr[i + 1];
    }
    

    cout << "After the deletion  of element" << endl;

    //traversing
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {

        cout << "index " << i << " value is " << arr[i] << endl;
    }
    


    return 0;

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
