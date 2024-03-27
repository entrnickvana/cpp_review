

#include <iostream>
//#include <boost/thread.hpp>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Modem{

  public:
  int input_mode;
  int dr;
  int fm_sz;
  vector<double>* in_buff_ptr;
  
  Modem(double data_rate, int frame_size){
    dr = data_rate;
    fm_sz = frame_size;
  }


  bool w_csv(std::string& out_file_name){
    w_csv(this->in_buff_ptr, out_file_name);
    return true;
  }

    
  bool w_csv(std::vector<double>* src_buff,  std::string& out_file_name){
    std::ofstream out_file;
    out_file.open(out_file_name);
    
    for(int ii=0; ii<src_buff->size(); ii++){
      //out_file << "ii: " << ii << ", " << (*src_buff)[ii] << std::endl;
      out_file << (*src_buff)[ii] << std::endl;      
    }

    out_file.close();
    return true;
  }

  bool r_csv(std::string& in_file_name, std::vector<double>* dst_buff){
    std::ifstream in_file;
    in_file.open(in_file_name);

    float lineFloat;
    std::string line;
    while(std::getline(in_file, line)){
      lineFloat = (float)atof(line.c_str());
      dst_buff->push_back(lineFloat);
    }
      
    in_file.close();

    this->in_buff_ptr = dst_buff;
    return true;
  }
  
};

class PrbsGen{
 public:
  
  
};

class Fir{
 public:
};


