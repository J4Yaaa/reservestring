a.out: reservestring.cpp
	g++ -o $@ $^ -g -std=gnu++0x
.PHONY:clean
	rm a.out
