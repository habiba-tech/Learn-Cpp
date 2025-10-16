#include <iostream>
using namespace std;

// Array ADT Structure
struct Array {
    int A[100];   // fixed maximum size
    int size;     // total capacity
    int length;   // current number of elements
};

// Function to display array elements
void Display(struct Array arr) {
    cout << "Array elements: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

// Function to insert element at given index
void Insert(struct Array *arr, int index, int element) {
    if (index >= 0 && index <= arr->length && arr->length < arr->size) {
        for (int i = arr->length; i > index; i--) {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = element;
        arr->length++;
        cout << "Inserted " << element << " at index " << index << endl;
    } else {
        cout << "Insertion failed! Invalid index or array full." << endl;
    }
}

// Function to delete element at given index
void Delete(struct Array *arr, int index) {
    if (index >= 0 && index < arr->length) {
        int deleted = arr->A[index];
        for (int i = index; i < arr->length - 1; i++) {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        cout << "Deleted element: " << deleted << endl;
    } else {
        cout << "Deletion failed! Invalid index." << endl;
    }
}

// Function to search element
int Search(struct Array arr, int key) {
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] == key)
            return i;  // return index if found
    }
    return -1;  // not found
}

// Function to update an element
void Update(struct Array *arr, int index, int newValue) {
    if (index >= 0 && index < arr->length) {
        arr->A[index] = newValue;
        cout << "Updated index " << index << " to value " << newValue << endl;
    } else {
        cout << "Update failed! Invalid index." << endl;
    }
}

// Main Function
int main() {
    struct Array arr = {{10, 20, 30, 40, 50}, 100, 5};

    cout << "Initial ";
    Display(arr);

    // Insertion
    Insert(&arr, 2, 99);

    // Deletion
    Delete(&arr, 4);

    // Searching
    int key = 30;
    int pos = Search(arr, key);
    if (pos != -1)
        cout << "Element " << key << " found at index " << pos << endl;
    else
        cout << "Element " << key << " not found." << endl;

    // Update
    Update(&arr, 1, 88);

    // Final Display
    cout << "\nFinal ";
    Display(arr);

    return 0;
}
