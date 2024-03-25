
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  if (s1 < s2 && s1 < s3) {
    cout << s1;
  } else if (s2 < s1 && s2 < s3) {
    cout << s2;
  } else {
    cout << s3;
  }


}

