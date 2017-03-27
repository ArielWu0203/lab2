#ifndef RATE_H
#define RATE_H
  class Rate {
    public:
      void set(double A, double B,double x);
      double get_Ra();
      double get_Rb();
      double get_K();
      int cal_Ra(double A,double B,double k,double s);
      int cal_Rb(double A,double B,double k,double s);
    private:
      double Ra;
      double Rb;
      double K;
  };
#endif
