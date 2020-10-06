cc = g++
CFLAGS = -g -O3 -w
  
includes =
objects = main.o string.o

target = string

all: $(target)

$(target): $(objects)
	$(cc) $(CFLAGS) $(includes) -o $(target) $(objects)

.cpp.o:
	$(cc) $(CFLAGS) $(includes) -c $< -o $@

clean:
	rm $(objects) $(target)

