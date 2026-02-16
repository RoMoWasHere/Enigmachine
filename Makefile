CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

TARGET = main

SRCS = main.cpp PlugBoard.cpp Reflector.cpp Disk.cpp Rotor.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
