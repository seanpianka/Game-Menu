# if there is a clock skew detected, run:
# find /your/dir -type f -exec touch {} +
TARGET   := minia
LIBS     := -lm $(shell pkg-config sfml-all --libs)
SRCEXT   := cpp
HDREXT   := hpp
CXX      := g++
CXXFLAGS := -Wall -Wextra -std=c++11

.PHONY: clean all default

default: $(TARGET)
all: default

OBJECTS := $(patsubst %.$(SRCEXT), %.o, $(wildcard *.$(SRCEXT)))
HEADERS := $(wildcard *.$(HDREXT))

%.o: %.$(SRCEXT) $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -Wall $(LIBS) -o $@

clean:
	-rm -f *.o $(TARGET)
