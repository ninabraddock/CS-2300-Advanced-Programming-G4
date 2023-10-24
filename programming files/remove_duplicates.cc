#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    // Initialize vector of ints
    vector<int> unique_arr;
    // Sort the vector
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // Loop through the sorted vector to find duplicates
    for(int i=0; i<n; i++){
        // If its a unique element, add it to the unique_arr vector
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
        else{
            //If its a duplicate add it to the removed_elements vector
            removed_elements.push_back(arr[i]);
        }
    }
    // Return the sorted vector
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // Output the unique elements
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    // Output the duplicates
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
