// implemente aqui seu programa
// lembre de incluir a prglib.h !!!

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios ;

#include <string>
using std::string ;

#include <queue>
using std::queue;

#include <fstream>
using std::fstream;
using std::ifstream;

#include <errno.h>



int main( int argc , char *argv[] ){

    queue<string> qlow;
    queue<string> qupp;

    string something;

    ifstream arq(argv[1]);

    if (!arq.is_open()) {
        perror("Ao abrir arquivo");
        return errno;
    }

    while (arq>>something){
        if(isupper(something[0])){
            qupp.push(something);
        } else{
            qlow.push(something);
        }
    }
    while (!qupp.empty()){
        cout<< qupp.front() << " " ;
        qupp.pop();
    }
    while (!qlow.empty()){
        cout<< qlow.front()<<" ";
        qlow.pop();
    }
    return 0;
}