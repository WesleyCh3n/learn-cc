CC = g++

CFLAGS = -std=c++14
CFLAGS += -Wall -Wextra -Werror -pedantic
CFLAGS += -m64

INCLUDES = -Isrc
INCLUDES +=

SOURCES = $(wildcard src/*.cc)
HEADERS = $(SOURCES:.cc=.h)

PROGRAMS = $(wildcard *.cc)
OBJECTS = $(PROGRAMS:.cc=.o) $(SOURCES:.cc=.o)
TARGETS = $(PROGRAMS:.cc=)

all: $(TARGETS)

$(TARGETS): $(OBJECTS)
	$(Q)$(CC) -o $@ $(CFLAGS) $(OBJECTS) # $(@:=.o)

%.o: %.cc
	$(Q)$(CC) -c -o $(notdir $@) $(INCLUDES) $(CFLAGS) $<

.PHONY: clean
clean:
	rm -rf $(OBJECTS) $(TARGETS)
