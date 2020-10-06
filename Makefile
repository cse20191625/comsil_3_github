cc = g++
cflags = -g -O3 -w
  
INCLUDES=
objects = main.o Array.o RangeArray.o

target = rangearray


$(target): $(objects)
	$(cc) $(cflags) $(INCLUDES) -o $(target) $(objects)

.c.o:
	$(cc) $(cflags) $(INCLUDES) -c $< -o $@

clean:
	rm $(objects) $(target)
    	

