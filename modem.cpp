
#include "modem.h"
#include <cstdio>

using namespace std;

int main(){
  Modem* mdm = new Modem(10e6, 1024);
  printf("Data Rate: %f\nFrame Size: %i", mdm->dr, mdm->fm_sz);

  delete mdm;
}
