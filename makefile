CXX = g++

CXXFLAGS = -std=c++17

SRC = \
main.cpp \
src/Game.cpp \
src/AISystem/AISystem.cpp \
src/InputSystem/InputSystem.cpp \
src/MatchSystem/MatchSystem.cpp \
src/PhysicsSystem/PhysicsSystem.cpp \
src/Entities/Entity.cpp

LIBS = -lsfml-graphics -lsfml-window -lsfml-system

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o BLUBERS $(LIBS)