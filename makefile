# if there is a clock skew detected, run:
# find /your/dir -type f -exec touch {} +
CXX       := g++
CXXSTD    := -std=c++11
CXXFLAGS  := -Wall -Wextra

SRCDIR    := src
BUILDDIR  := build
TARGET    := bin/minia

LIB_IDS   := SFML

INCDIR    := include/
INC 	  := -I$(INCDIR) -Ilib/SFML/include

LIBS_DIRS := -Llib/SFML/lib 
LIBS      := -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio

SRCEXT    := cpp
SOURCES   := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS   := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

HDREXT    := hpp
HEADERS   := $(shell find $(INCDIR) -type f -name *.$(HDREXT))

.PRECIOUS: $(TARGET) $(OBJECTS)

default: $(TARGET)
all: default


$(TARGET): $(OBJECTS)
	@echo "Linking...";
	$(CXX) $^ -o $(TARGET) $(LIBS_DIRS) $(LIBS);


$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR);
	@echo "Compiling...";
	$(CXX) $(CXXSTD) $(CXXFLAGS) $(INC) -c -o $@ $<;

clean:
	@echo " Cleaning...";
	rm -r $(BUILDDIR) $(TARGET)

.PHONY: clean
