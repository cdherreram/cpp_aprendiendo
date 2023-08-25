#include <cstdio>

int calculateSum_type1(int* arr, int size) {
  int i;
  int sum = 0;
  // traversing through the array
  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }
  // return final value
  return sum;
}

// 2. Formal parameters as sized array
int calculateSum_type2(int arr[10], int size) {
  int i;
  int sum = 0;
  // traversing through the array
  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }
  // return final value
  return sum;
}
//3. Formal parameters as unsized array
int calculateSum_type3(int arr[], int size) {
  int i;
  int sum = 0;
  // traversing through the array
  for (i = 0; i < size; ++i) {
    sum += arr[i];
  }
  // return final value
  return sum;
}

int main() {
  // declaration and initialization of array “marks”
  int marks[10] = { 10, 20, 30, 17, 5, 20, 15, 45, 77, 38 };
  int sum = 0;
  printf("Total marks of students is: %d ", calculateSum_type1(marks, 10));
  printf("Total marks of students is: %d ", calculateSum_type2(marks, 10));
  printf("Total marks of students is: %d ", calculateSum_type3(marks, 10));
  return 0;
}