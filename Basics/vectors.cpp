#include <iostream>   // For input-output operations (cout, endl)
#include <vector>     // For using the vector container
using namespace std;

int main() {

    // Create a vector of integers with initial values
    vector<int> vec = {1, 2, 3, 4};

    // Create a vector of size 3 where all elements are initialized to 0
    vector<int> vec2(3, 0);

    // Access and print the first element of vec using index
    cout << vec[0] << endl;

    // Create a vector of characters
    vector<char> vec3 = {'a', 'b', 'c'};

    // Print the current size of the vector
    cout << "size = " << vec3.size() << endl;

    // Add an element to the end of the vector
    vec3.push_back('d');

    // Size increases after push_back
    cout << "size = " << vec3.size() << endl;

    // front() returns the first element of the vector
    cout << "front = " << vec3.front() << endl;

    // back() returns the last element of the vector
    cout << "back = " << vec3.back() << endl;

    // at(index) returns the element at a given index (with bounds checking)
    cout << "at(0) = " << vec3.at(0) << endl;

    // Remove the last element of the vector ('d')
    vec3.pop_back();

    //capacity of the vector 
    cout << "capacity = " << vec3.capacity() << endl;

    // Loop through the vector and print each character
    // Range-based for loop (preferred for readability)
    for (char val : vec3) {
        cout << val << " ";
    }

    return 0; // Indicates successful program execution
}
