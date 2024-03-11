
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  string s1, s2, s3;
  s1 = "firewood";
  s2 = "frog";
  s3 = "fire";
  if (s1 < s2 && s1 < s3) {
    cout << s1;
  } else if (s2 < s1 && s2 < s3) {
    cout << s2;
  } else {
    cout << s3;
  }
  

}

void exercise_2(double A, double B, double C) {
  
}

void exercise_3(int a, int b) {
  cin>>a>>b;
  if(a>=0&&a<=1000000&&b>=0&&b<=1000000)
  {
    if(b==0)
    {
      cout<< "imposible";
    }
    else
    {
      cout<<a/b;
    }
  }
  else
  {
    cout << "Ingrese valores entre 0 y 1000000";
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  double descuento;
  cin >> n >> a >> b >> x >> y;
  if (n > a or n > b)
  {
    if (n>a)
    {
      descuento = x;
    }
    if (n>b)
    {
      descuento = y;
    }
  }
  else
  {
    descuento = 0;
  }
  cout << n - (n*descuento/100);
}

void exercise_5(char character) {
  cin >> character;
  if (character>= 65 and character <= 90)
  {
    cout << "lower-case alphabet";
  }
  else if (character >= 97 and character <= 122)
  {
    cout << "upper-case alphabet";
  }
  else
  {
    cout << "not an alphabet"
  }
}

void exercise_6(int number) {
   cin >> number;
  switch (number)
  {
    case 1:
    cout << "Lunes";
    break;
    case 2:
    cout << "Martes";
    break;
    case 3:
    cout << "Miercoles";
    break;
    case 4:
    cout << "Jueves";
    break;
    case 5:
    cout << "Viernes";
    break;
    case 6:
    cout << "Sabado";
    break;
    case 7:
    cout << "Domingo";
    break;
    default:
    cout << "invalid input";
    break;
    
  }
}

void exercise_7(double r) {
  cin >> r;
  if (r>=0)
  {
    cout << 4*3.1416*pow(r,2);
  }
  else
  {
    cout << "Radius cannot be negative.";
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  string word1,word2, word3, word4, word5;
   cout << "Introduce 5 words:"<<endl;
   cin >> word1 >> word2 >> word3 >> word4 >> word5;
   char w1 = word1[0];
   char w2 = word2 [0];
   char w3 = word3 [0];
   char w4 = word4 [0];
   char w5 = word5 [0];
   cout << w1 << w2 << w3 << w4 << w5 << endl;
   
    if (word1[0] == word5[0]) {
        cout << "Hemos encontrado algo!" << std::endl;
    } else {
     cout << "Aun sin suerte" << std::endl;

    return 0;
    }
}
  

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  cin << number;
  if (number == 11235813)
  {
    cout << "Se encontro Fibonacci";
  }
  else
  {
    cout << "Esto no es de Fibonacci";
  }
  }
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}