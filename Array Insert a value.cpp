#include <iostream>
using namespace std;

int main() 
{

    int pos, value;
    cout << "Enter position to insert: ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    int array[8] = {10, 20, 30, 40, 50, 60, 70};

    for (int i = 7; i > pos; i--) 
    {
        array[i] = array[i - 1];
    }

    array[pos] = value;

    cout << "After insertion array is:\n";

    for (int i = 0; i < 8; i++) 
    {
        cout << "Index of position " << i << " is: " << array[i] << "\n";
    }

    return 0;
}
