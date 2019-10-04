
vec: main.o Vehicle.o PoweredVehicle.o Car.o Bicycle.o Jet.o Skateboard.o Unicycle.o
	g++ -o vec main.o Vehicle.o PoweredVehicle.o Car.o Bicycle.o Jet.o Skateboard.o Unicycle.o

main.o: main.cpp Vehicle.h PoweredVehicle.h Car.h Bicycle.h Skateboard.h Unicycle.h
	g++ -std=c++11 -c main.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -std=c++11 -c Vehicle.cpp

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -std=c++11 -c PoweredVehicle.cpp

Car.o: Car.cpp Car.h
	g++ -std=c++11 -c Car.cpp

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -std=c++11 -c Bicycle.cpp

Jet.o: Jet.cpp Jet.h
	g++ -std=c++11 -c Jet.cpp
	
Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -std=c++11 -c Skateboard.cpp

Unicycle.o: Unicycle.cpp Unicycle.h
	g++ -std=c++11 -c Unicycle.cpp

clean:
	rm *.o vec
