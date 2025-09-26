# Makefile для изучения указателей
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Основные цели
all: lesson1 exercises1 solutions1

lesson1: lesson1_basics.cpp
	$(CXX) $(CXXFLAGS) -o lesson1 lesson1_basics.cpp

exercises1: exercises_level1.cpp
	$(CXX) $(CXXFLAGS) -o exercises1 exercises_level1.cpp

solutions1: solutions_level1.cpp
	$(CXX) $(CXXFLAGS) -o solutions1 solutions_level1.cpp

# Запуск программ
run-lesson1: lesson1
	./lesson1

run-exercises1: exercises1
	./exercises1

run-solutions1: solutions1
	./solutions1

# Очистка
clean:
	rm -f lesson1 exercises1 solutions1

.PHONY: all clean run-lesson1 run-exercises1 run-solutions1
