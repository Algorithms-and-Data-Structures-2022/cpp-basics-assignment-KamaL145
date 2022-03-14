#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int diff = left - right;
    return diff * diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if ((mask >= 0) && (bit_pos >= 0)) {
      if ((1 << bit_pos) & mask) {
        return true;
      } else {
        return false;
      }

    } else {
      return false;
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int max_elem = 0;
    if (left > middle && left > right) {
      max_elem = left;
      return max_elem;
    } else if (right > middle && right > left) {
      max_elem = right;
      return max_elem;
    } else {
      max_elem = middle;
      return max_elem;
    }

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != NULL && right != NULL) {
      int tmp = *left;
      *left = *right;
      *right = tmp;
    } else {
      int *left;
      int *right;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    int sum = 0;
    if (*arr != NULL && length > 0) {
        for (int i = 0; i < length; i++) {
        sum = sum + arr[i];
      }
      return sum;
    }
    else {
      return 0;
    }
    return 0;
  }


  // Task 6
  int *find_max_elem(int *arr, int length) {
    int* max_elem;
    int i;
    if (*arr != NULL && length > 0) {
      int* max_elem = &arr[0];
      for (i = 1; i < length; i++) {
        if (arr[i] > *max_elem) {
          max_elem = &arr[i];
        }
      }
      return max_elem;
    }
    else {
      max_elem = NULL;
      return max_elem;
    }

    return 0;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int* arr = new int[length];
      std::fill(arr,arr + length,init_value);
      return arr;
        }
    else {
        return nullptr;
      }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in != nullptr && length > 0) {
      int* new_arr = new int[length];
      std::copy(arr_in, arr_in + length, new_arr);
      return new_arr;
    }
    else {
      return nullptr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr) {
      os << "Invalid argument: arr\\n";
      return;
    }
    if (length <= 0) {
      os << "Invalid argument: length\n";
      return;
    }
    if (k <= 0) {
      os << "Invalid argument: k\n";
      return;
    }
    for (int i = 0; i < length; i++) {
      if (i % k == 0) {
        os << arr[i] << "\t";
      }
    }
  }

}  // namespace assignment
