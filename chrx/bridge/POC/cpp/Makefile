CXX = g++

SRC = main.cpp

EXEC = cppapp

RUST_DLL_PATH = ../out/bridge/
CXX_INCLUDE_DIR = $(abspath ../out/bridge/cxx/)

CXXFLAGS = -Wall -std=c++11 -I$(CXX_INCLUDE_DIR)
LDFLAGS = -L$(RUST_DLL_PATH) -lchrx

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC) $(LDFLAGS)

clean:
	rm -f $(EXEC)
