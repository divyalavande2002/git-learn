// C++ program to find average without using
// division.
#include <bits/stdc++.h>
using namespace std;

int floorAvg(int x, int y) { 
     return (x + y) >> 1; }

int main() {
  int x = 10, y = 20;
  cout << "Average = " << floorAvg(x, y) <<endl;
  return 0;
}

// This code is contributed by famously.
