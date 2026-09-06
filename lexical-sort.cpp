#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Get number of strings
    cout << "Enter number of words you want to arrange : ";

    int num;
    cin >> num;

    // Create a vector containing num strings
    vector<string> word(num);

    // Input strings
    for (int j = 0; j < num; j++)
    {
        cout << "Enter word " << j + 1 << " : ";
        cin >> word[j];
    }

    // Bubble sort
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1; j++)
        {
            // Compare two strings
            if (word[j] > word[j + 1])
            {
                swap(word[j], word[j + 1]);
            }
        }
    }

    // Print sorted strings
    cout << "\nArranging in dictionary order :\n\n";

    for (int j = 0; j < num; j++)
    {
        cout << word[j] << '\n';
    }

    return 0;
}