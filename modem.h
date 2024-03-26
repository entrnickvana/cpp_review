

#include <iostream>
//#include <boost/thread.hpp>
#include <cmath>

//using namespace std;

class Modem{

  public:
  int input_mode;
  int dr;
  int fm_sz;
  
  Modem(double data_rate, int frame_size){
    dr = data_rate;
    fm_sz = frame_size;
  }
  
};

class PrbsGen{
 public:
  
  
};

class Fir{
 public:
};
