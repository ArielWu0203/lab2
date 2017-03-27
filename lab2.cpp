#include<iostream>
#include<fstream>
#include<cstdlib>
#include"rate.h"
using namespace std;

int main() {
  ifstream inFile("file.in",ios::in);
  if(!inFile) {
  cerr<<"Failed opening!"<<endl;
  exit(1);
  }
  ofstream outFile("file.out",ios::out);
  if(!outFile) {
  cerr<<"Failed opening!"<<endl;
  exit(1);
  }
  double k,ra,rb,s;
  double a,b;
  Rate r;
  inFile>>k>>ra>>rb;
  outFile<<ra<<" "<<rb<<endl;
  while(inFile>>s) {
    r.set(ra,rb,k);
    a=r.get_Ra();
    b=r.get_Rb();
    ra=r.cal_Ra(a,b,k,s);//new ra
    rb=r.cal_Rb(a,b,k,s);//new rb
    outFile<<ra<<" "<<rb<<endl;
  }
  return 0;
}
