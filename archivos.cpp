#include <fstream>
#include <iostream>
#include <string>

using namespace std;
 
double ejemplo_lee(string filename);

int main () {
  string filename,filename2;
  filename = "valores_x.txt";
  ejemplo_lee(filename);
    
  filename2 = "valores_y.txt";
  ejemplo_lee(filename2);
  return 0;
}

double ejemplo_lee(string filename){
  ifstream infile; 
  string line;
  double a;
  infile.open(filename); 
  a=0.0;
  getline(infile, line);
  while(infile){
    a=a+stod(line);
    cout << a << endl;
    getline(infile, line);
  }
  infile.close();
  return a;
}

