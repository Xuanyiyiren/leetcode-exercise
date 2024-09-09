# Solution codes are directly included in main.cpp to test,
# which means that main.o must depend on both main.cpp and solution codes
# and solution codes have no need to be compiled.

SOLUTION_CODE = 2181mergeNodes.cpp
CXX = g++
TARGET = main
CXXFLAGS = -c -Wall
SRC = $(filter-out $(SOLUTION_CODE), $(wildcard *.cpp))
#wildcard function will search all the matched files and stored their name
OBJ = $(patsubst %.cpp, %.o, $(SRC))
#patsubst will substitude ".cpp" to ".o"  for all files in $(SRC)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^
# $@ stand for target
# $^ stand for objects

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
# $< stand for the frist objects

main.o: main.cpp $(SOLUTION_CODE)
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)