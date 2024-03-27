
#include "modem.h"
#include <cstdio>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
  Modem* mdm = new Modem(10e6, 1024);
  printf("Data Rate: %d\nFrame Size: %i", mdm->dr, mdm->fm_sz);

  //vector<double> v{0.0, 0.707, 1.0, 0.707, 0.0, -0.707, -1.0, -0.707, -0.0};
  

  string in_name = "in_data.txt";
  string out_name = "out_data.txt";
  vector<double>* data_to_process = new vector<double>();
  mdm->r_csv(in_name, data_to_process);
  
  //mdm->w_csv(&v, out_name);
  //mdm->w_csv(&data_to_process, out_name);
  mdm->w_csv(out_name);    
  
  delete mdm;
}


/*
include <iostream>
#include <fstream>
int main( int argc, char* argv[] )
{
      std::ofstream myfile;
      myfile.open ("example.csv");
      myfile << "This is the first cell in the first column.\n";
      myfile << "a,b,c,\n";
      myfile << "c,s,v,\n";
      myfile << "1,2,3.456\n";
      myfile << "semi;colon";
      myfile.close();
      return 0;
}
*/

/*
trackBarFile.open("TrackBarSignal.csv");

std::ofstream fout;
fout.open("Output_ReadInCSV.txt");

std::string line, line2, line3;
int count;
float tokenNum,lineFloat,line2Float,line3Float;

while (getline(trackBarFile, line,',')&&getline(trackBarFile, line2,',')&&getline(trackBarFile, line3)) 
{

    lineFloat = (float)atof(line.c_str());
    line2Float = (float)atof(line2.c_str());
    line3Float = (float)atof(line3.c_str());

    std::cout<<line<<","<<lineFloat+2<<"   ,   "<<line2<<","<<line2Float+2<<"  ,  "<<line3<<","<<line3Float+2<<std::endl;

}

trackBarFile.close();

*/
