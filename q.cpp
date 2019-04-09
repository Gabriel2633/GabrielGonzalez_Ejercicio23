#include <fstream>
#include <iostream>
#include <string>

using namespace std;
 
double ejemplo_lee(string filename);

int main () {
  string filename;
  filename = "valores_x.txt";
  ejemplo_lee(filename);
    
  filename = "valores_y.txt";
  ejemplo_lee(filename);
  return 0;
}

double ejemplo_lee(string filename){
  ifstream infile; 
  string line;
  double a;
  infile.open(filename); 
  a=0.0;
  getline(infile, line);
  int i;
  i=0;
    
  for(i=0;i<20;i++)
  {
      a=a+stod(line);
      getline(infile, line);
  }
  cout << "suma del archivo "<< filename << " es: "<<a << endl;
   
  infile.close();
  return a;
}

