
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
    cout << "Monday\n";
    break;
    case 2:
    cout << "Tuesday\n";
    break;
    case 3:
    cout << "Wednesday\n";
    break;
    case 4:
    cout << "Thursday\n";
    break;
    case 5:
    cout << "Friday\n";
    break;
    case 6:
    cout << "Saturday\n";
    break;
    case 7:
    cout << "Sunday\n";
    break;
    default:
    cout << "Invalid input\n";
    break;
    
  }
}

 
  
    
  


void exercise_7(double r) {
   if (r >= 0) {
    cout << 4 * 3.14 * r * r << endl;
  } else if (r < 0) {
    cout << "Error: Radius cannot be negative." << endl;
  }

}
  


void exercise_8(long int seconds) {
  long int hrs, mins, secs, rest_hrs;
  rest_hrs = seconds % 3600;
  hrs = seconds / 3600;
  mins = rest_hrs / 60;
  secs = rest_hrs % 60;
  if (seconds < 0) {
    cout << "Error: Input seconds cannot be negative." << endl;
  } else if (hrs < 10 && mins < 10 && secs < 10){
    cout << "0" << hrs << ":0" << mins << ":0" << secs << endl;
  } else if (hrs < 10 && mins < 10 && secs >= 10){
    cout << "0" << hrs << ":0" << mins << ":" << secs << endl;
  } else if (hrs < 10 && mins >= 10 && secs >= 10){
    cout << "0" << hrs << ":" << mins << ":" << secs << endl;
  } else if (hrs < 10 && mins >= 10 && secs < 10){
    cout << "0" << hrs << ":" << mins << ":0" << secs << endl;
  } else if (hrs < 10 && mins < 10 && secs < 10){
    cout << "0" << hrs << ":0" << mins << ":0" << secs << endl;
  }

}



string exercise_9(string s1, string s2, string s3, string s4, string s5) {
cout << s1[0] << s2[0] << s3[0] << s4[0] << s5[0] << endl;
  if (s1[0] == s5[0]) {
    return "Hemos encontrado algo!";
  } else {
    return "Aun sin suerte";
  }
}
  

  

int exercise_10(int a, int b) {
int result;
  if (a < 0 || b < 0) {
    result = 0;
  } else {
    int sum = a + b;
    string s = to_string(sum);
    int digits = s.size();
    result = sum * digits;
  }
  return result;
}
  


string exercise_11(int number) {
   string msg;
  if (number == 11235813) { 
    msg = "Se encontro a Fibonacci";
  } else {
    msg = "Esto no es de Fibonacci";
  }
  return msg;

}
  


void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
                  bool match1 = (color1 == color4 || color4 == "?") && (numb1 == numb4 || numb4 == -1);
     bool match2 = (color2 == color4 || color4 == "?") && (numb2 == numb4 || numb4 == -1);
     bool match3 = (color3 == color4 || color4 == "?") && (numb3 == numb4 || numb4 == -1);

     if (match1)
    {
       cout << "1" << endl;
    } 
     if (match2) 
    {
      cout << "2" << endl;
    } 
     if (match3) 
    {
      cout << "3" << endl;
    } 
}

    



string exercise_13(int age, int years_of_experience) {
  if (age >= 18 && years_of_experience >= 5) {
    return "Senior project manager";
  } else if(age >= 18 && years_of_experience >= 3) {
    return "Project manager";
  } else if(age >= 18) {
    return "Project coordinator";
  } else {
    return "Not eligible"; 
  }

}

string exercise_14(int number_of_docs){
  if (number_of_docs <= 0) {
    return "No se encontraron documentos";
  } else if (number_of_docs == 1) {
    return "Se encontro un documento";
  } else if (number_of_docs >= 2) {
    return to_string(number_of_docs)+" documentos encontrados";
  } 

}

void exercise_15(int a, int b, int c) {
 cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;
  cout << "Los valores despues de la permutacion son: a = " << c << " b = " << a << " c = " << b << endl;
}


void exercise_16(int debut, int fin) {
} 