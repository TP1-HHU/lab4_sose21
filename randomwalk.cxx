#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


int main(void){
    srand(time(NULL));      // Initialize random number generator
    const int N  = 500;     // total # of particles
    const int Nt = 500;		// total # of steps
    
    // Here you need to allocate memory
    // for all particle coordinates
    // * use dynamic allocation!
    
    // Timestep loop
    for(int i = 0; i < Nt; i++){
      // push particles
      // +
      // calculate statistical values here
    }

    return 0;
}
