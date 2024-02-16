#include<iostream>

using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    
    if (n <= 1) {
        cout << "Invalid input. Please enter at least two elements." << endl;
        return 1; 
    }

    
    int numbers[n];

    
    cout << "Enter the elements, separated by spaces:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    
    int largest = INT_MIN; 
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    
    cout << "Largest number: " << largest << endl;
    cout << "Second largest number: " << secondLargest << endl;

    return 0; 
}
