#include <iostream>
#include <fstream>
#include <thread>
#include <cstdlib>
#include <string>
#include <mutex>

using namespace std;

mutex mymutex;


   string estado;
    int pcktrans = stoi(packargv); 
    int pckrec = stoi(packetr);  
    int pcktotal = pcktrans - pckrec; 
    if (pack>0){
        estado = "up";
    }else{
        estado = "down";
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
       cout << linea << endl;
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
	
 cout << "IP           Trans.      Rec.     Perd.      Estado"<< endl;
 cout << "___________________________________________________"<< endl;

 return 0;
    system ("pause");
}
