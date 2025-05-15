#include "binarySearch.h"
#include <algorithm>

int binarySearch(std::vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;
//a comment for commit to test pull request
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
