// #include <iostream>
// using namespace std;

// int main() {
//   int arr[] = {2, 4, 5, 2, 4, 5, 2, 3, 8};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   // We'll mark counted elements by using a sentinel value that can't appear,
//   // for example, -1, assuming all elements are non-negative.
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == -1) // Skip elements already counted
//       continue;

//     int count = 1;
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] == arr[i]) {
//         count++;
//         arr[j] = -1; // Mark this element as counted
//       }
//     }

//     cout << "Element " << arr[i] << " occurs " << count << " times" << endl;
//   }

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 3, 3, 2}, count = 0;
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        count = count + 1;
      }
    }
    cout << arr[i] << " occur " << count << " times" << endl;
    count = 0;
  }

  return 0;
}
