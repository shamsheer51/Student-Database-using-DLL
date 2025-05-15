target=main.o my_fun.o
DLL:${target}
	c++ ${target} -o DLL

main.o:main.cpp
	c++ -c main.cpp
my_fun.o:my_fun.cpp
	c++ -c my_fun.cpp
clean:
	@echo "cleaning"
	rm -f *.o DLL
