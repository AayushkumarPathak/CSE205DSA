#include <iostream>
#include <string>
using namespace std;

void selectionSort(string& str)
{
    int n = str.length();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (str[j] < str[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(str[i], str[min_idx]);
        }
    }
}

int main()
{
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);

    selectionSort(input);

    cout << "Sorted string: " << input << endl;

    return 0;
}
