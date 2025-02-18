#include <iostream>
#include <cstdlib>
using namespace std;


int main(int argc,char *argv[]){

    if(argc > 1){
    float sum = 0 ;
    for(int i = 1 ; i < argc ; i++){
        sum += atof(argv[i]);
    }
        float avg = sum / (argc-1) ;
        
        cout << "---------------------------------" << endl;
        cout << "Average of "<<argc-1<<" numbers = " << avg << endl;
        cout << "---------------------------------" ;
        
    }else{
        cout << "Please input numbers to find average." ;
    }
    

return 0 ;
}