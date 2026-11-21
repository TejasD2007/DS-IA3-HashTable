// Data Structures Internal Activity 3
// PRN: [Your PRN]
// Scenario: Student Marks
// Hash Method: Division Method
// Collision Handling: Linear Probing

#include <iostream>
using namespace std;

int hashFunction(int key)
{
    return key % 23;
}

int main()
{
    int marks[20] = {
        30, 43, 56, 69, 82,
        95, 8, 21, 34, 47,
        60, 73, 86, 99, 12,
        25, 38, 51, 64, 77
    };

    cout << "Personalized Student Marks:" << endl;

    cout << "\nHash Indices:" << endl;

        for(int i = 0; i < 20; i++)
            {
              cout << marks[i] << " -> " << hashFunction(marks[i]) << endl;
            }

    for(int i = 0; i < 20; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;

    int table[23];

for(int i = 0; i < 23; i++)
{
    table[i] = -1;
}

cout << "\nLinear Probing Insertion:" << endl;

for(int i = 0; i < 20; i++)
{
    int index = hashFunction(marks[i]);

    while(table[index] != -1)
    {
        cout << "Collision at index " << index
             << " for " << marks[i] << endl;

        index = (index + 1) % 23;
    }

    table[index] = marks[i];
}

    cout << "\nFinal Hash Table:" << endl;

    for(int i = 0; i < 23; i++)
    {
        cout << i << " : ";

        if(table[i] == -1)
            cout << "EMPTY";
        else
            cout << table[i];

        cout << endl;
    }

    return 0;
}
