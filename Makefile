all:
		g++ -o run mainIp.cpp -lpthread 
        ./run listado_ips.txt	

clean:
		rm -f programa *.o
