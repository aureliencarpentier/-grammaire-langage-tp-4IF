EXEC=app
FLAGS=-Wall -pthread
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
HEAD=$(wildcard *.h)

all: $(EXEC)

app: $(OBJ)
	g++ -o $@ $^ $(FLAGS)

%.o: %.cpp
	g++ -o $@ -c $< $(FLAGS)

clean: 
	rm -f *.o core

mrproper: clean