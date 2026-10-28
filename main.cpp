#include <iostream>

// Lab 9 — Richard Webster
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

double average(const int a[], int n) {
   //n = 0;
  int sum = 0;
  
  if (n == 0)
    return 0;
  
  for (int i = 0; i < n; ++i)
    sum += a[i];
    return sum / n;
}
void printsummary(double avg) {
  std::cout << "Average: " << avg << "\n";
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  double avg = average(scores, N);
  printsummary(avg);
  return 0;
}
