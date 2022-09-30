COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)


run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): areaCalc.cpp Rectangle.cpp Square.cpp Circle.cpp Trapezoid.cpp
	$(COMPILER) $(OPTIONS) areaCalc.cpp Square.cpp Rectangle.cpp Circle.cpp Trapezoid.cpp -o $(PROGRAM)

clean:
	rm *.out
