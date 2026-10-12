#include <iostream>
using namespace std;

int main() 
{
    int array[7] = {10, 20, 30, 40, 50, 60, 70};
    cout << "After deletion array is:\n";
    for (int i = 0; i < 6; i++) 
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i < 6; i++) 
    {
    cout << array[i] << "\n";
    }
     return 0;
}
