CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = moneyHoney
SOURCES = main.cpp cmdlayer.cpp wallet.cpp
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all clean run help install uninstall

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET) balance.txt

install: $(TARGET)
	sudo cp $(TARGET) /usr/local/bin/

uninstall:
	sudo rm -f /usr/local/bin/$(TARGET)

help:
	@echo "Available targets:"
	@echo "  make all       - Build the executable (default)"
	@echo "  make run       - Build and run the app"
	@echo "  make install   - Build and install to /usr/local/bin/"
	@echo "  make uninstall - Remove from /usr/local/bin/"
	@echo "  make clean     - Remove build artifacts and saved data"
	@echo "  make help      - Show this help message"

.DEFAULT_GOAL := all
