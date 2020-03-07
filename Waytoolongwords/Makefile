CXX = cpp
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -g
SOURCES = ./Waytoolongwords.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = Waytoolongwords

.PHONY: clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LFLAGS) $(LIBS)

.c.o:
	$(CXX) $(CFLAGS) -cpp $< -o $@

clean:
	$(RM) $(OBJECTS) $(TARGET)