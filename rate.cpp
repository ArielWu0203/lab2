#include<iostream>
#include<cstdlib>
#include<cmath>
#include"rate.h"
using namespace std;

void Rate::set(double A, double B,double x){
  Ra=A;
  Rb=B;
  K=x;
}
double Rate::get_Ra(){
  return Ra;
}
double Rate::get_Rb(){
  return Rb;
}
double Rate::get_K() {
  return K;
}
int Rate::cal_Ra(double A,double B,double k,double s){
  //s is score
  //A is Ra
  //B is Rb
  int new_a;
  new_a=(A+k*(s-(1/(1+pow(10,(B-A)/400)))))+0.5;
  return new_a;
}
int Rate::cal_Rb(double A,double B,double k,double s) {
  int new_b;
  new_b=(B+k*((1-s)-(1/(1+pow(10,(A-B)/400)))))+0.5;
  return new_b;
}

