
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

void exercise_2(double A, double B, double C) {
double arg, div, sarg;
  arg = B * B - 4 * A * C;
  sarg = sqrt(arg);
  div = 2 * A;
    
  if (A == 0 && B != 0) {
    cout << ((-1 * C) / B) << endl;
  } else if (B == 0 && A == 0) {
  } else if (arg > 0 && C != 0) {
    double r1 = (-B + sarg) / div;
    double r2 = (-B - sarg) / div;
    cout << r1 << " " << r2 << endl;
  } else if (arg == 0 && C != 0) {
    double r1 = (-B + sarg) / div;
    cout << r1 << endl;
  } 
}
  


void exercise_3(int a, int b) {
  cin>>a>>b;
  if(a>=0&&a<=1000000&&b>=0&&b<=1000000)
  {
    if(b==0)
    {
      cout<< "Impossible\n";
    }
    else
    {
      cout<<a/b<<endl;
    }
  }
  else
  {
    cout << "Ingrese valores entre 0 y 1000000";
  }

}
  


void exercise_4(double n, double a, double b, double x, double y) {
cin >> n >> a >> b >> x >> y;
  if(a < b) {
    if (n > b) {
      cout << n - ((y * n) / 100) << endl;
    } else if(n > a) {
      cout << n - ((x * n) / 100) << endl;
    } else {
      cout << n << endl;
    }  
  }
}
  
  


void exercise_5(char character) {
 cin >> character;
  if (65 <= character && character <= 90) {
    cout << "upper-case alphabet" << endl;
  } else if (97 <= character && character <= 122) {
    cout << "lower-case alphabet" << endl;
  } else {
    cout << "not an alphabet" << endl;
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

}
  


void exercise_8(long int seconds) {

}



string exercise_9(string s1, string s2, string s3, string s4, string s5) {

}
  

  

int exercise_10(int a, int b) {

}
  


string exercise_11(int number) {

}
  


void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {

                 }



string exercise_13(int age, int years_of_experience) {

}

string exercise_14(int number_of_docs){

}

void exercise_15(int a, int b, int c) {

}


void exercise_16(int debut, int fin) {

}
 