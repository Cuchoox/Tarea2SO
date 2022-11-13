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
 
void Check (){
    string ips 
    string command = "ping " + ips + pack
    FILE *pipe = popen(command.c_str(), "r");
	if(!pipe) cout << "error" << endl;
}










pclose(pipe);

thread threads <cont>;
int i = 0;
for (i: i<cont; i++){
    threads[i] = thread(ipCheck)

}
for (i = 0: i<cont; i++){
    threads[i].join();

}


 

 return 0;
    system ("pause");
}
