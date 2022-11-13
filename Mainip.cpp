#include <iostream>
#include <fstream>
#include <thread>
#include <cstdlib>
#include <string>
#include <mutex>

using namespace std;

mutex mymutex;

void ping (struct info *data);

struct info{
    int loss;
    int package;
    string ip;
}

string pack;

int main(int argc, char *argvc)
{
    string linea;
    pack = argv[2];
    int cont;
    cont= 0;
    ifstream archivo("listado_ips.txt");
    while (getline(archivo,linea)){
       cont++;
    }
 
thread threads <cont>;




 

 
    system ("pause");
}
