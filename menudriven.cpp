#include <iostream>
using namespace std;

const int MAX_SIZE = 100;  // You can adjust the size as needed

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAtEnd(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
        cout << "Element inserted at the end." << endl;
    } else {
        cout << "Array is full. Cannot insert." << endl;
    }
}

void insertAtBeginning(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        // Shift elements to make space for the new element
        for (int i = size; i > 0; --i) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        size++;
        cout << "Element inserted at the beginning." << endl;
    } else {
        cout << "Array is full. Cannot insert." << endl;
    }
}
void deleteElement(int arr[], int& size, int target) {
    int index = 0;
    while (index < size && arr[index] != target) {
        index++;
    }

    if (index < size) {
        // Shift elements to remove the specified element
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element deleted." << endl;
    } else {
        cout << "Element not found. Cannot delete." << endl;
    }
}


int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, index;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at the end\n";
        cout << "2. Insert at the beginning\n";
        cout << "3. Delete element at a given index\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert at the end: ";
                cin >> element;
                insertAtEnd(arr, size, element);
                break;
            case 2:
                cout << "Enter the element to insert at the beginning: ";
                cin >> element;
                insertAtBeginning(arr, size, element);
                break;

            case 3:
                cout << "Enter the element to delete: ";
                cin >> element;
                deleteElement(arr, size, element);
                break;
            case 0:
                cout << "Exiting the program. Bye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << "\nCurrent Array: ";
        displayArray(arr, size);

    } while (choice != 0);

    return 0;
}