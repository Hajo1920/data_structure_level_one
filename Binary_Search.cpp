#include <iostream>
#include <vector>

/*
Binary search is an efficient algorithm for finding an element in a sorted array. Here's how it works:

The algorithm starts by looking at the middle element of the sorted array
If the target is equal to the middle element, we've found it
If the target is less than the middle element, we search the left half
If the target is greater than the middle element, we search the right half
We repeat this process until we find the element or determine it's not in the array

Key points about this implementation:

It requires a sorted array to work correctly
Time complexity is O(log n), making it very efficient for large datasets
Uses (left + right) / 2 in a way that prevents integer overflow
Returns -1 if the element isn't found, or the index if it is found*/

class BinarySearch {
public:
    // Returns index of target if found, -1 if not found
    static int search(const std::vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;  // Prevents integer overflow
            
            // Found the target
            if (arr[mid] == target) {
                return mid;
            }
            
            // Target is in the left half
            if (arr[mid] > target) {
                right = mid - 1;
            }
            // Target is in the right half
            else {
                left = mid + 1;
            }
        }
        
        return -1;  // Target not found
    }
};

// Example usage
int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;
    
    int result = BinarySearch::search(arr, target);
    
    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in array" << std::endl;
    }
    
    return 0;
}