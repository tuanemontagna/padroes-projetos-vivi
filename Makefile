CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -Wall

SOURCES_IN_SRC = $(wildcard src/*.cpp)
OBJECTS_IN_SRC = $(patsubst src/%.cpp,obj/%.o,$(SOURCES_IN_SRC))
EXECUTABLE = bin/programa

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS_IN_SRC) obj/main.o
	@echo "Ligando o programa final..."
	$(CXX) $^ -o $@

obj/main.o: main.cpp
	@echo "Compilando main.cpp..."
	$(CXX) $(CXXFLAGS) -c main.cpp -o obj/main.o

obj/%.o: src/%.cpp
	@echo "Compilando $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "Limpando arquivos compilados..."
	rm -f obj/*.o bin/programa