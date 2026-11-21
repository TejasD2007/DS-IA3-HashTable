
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

    return 0;
}
