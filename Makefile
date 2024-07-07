CXX = clang++
CC = clang
INCLUDES = -Iincludes/ -Ilib/AudioFile -Ilib/kissfft
CXXFLAGS = -std=c++20 -g -fstandalone-debug -Wall -Wextra -Werror -pedantic $(INCLUDES)
CFLAGS = -g -fstandalone-debug -Wall -Wextra -Werror -pedantic $(INCLUDES)

exec: bin/exec
tests: bin/tests

bin/exec: obj/main.o obj/encode.o obj/decode.o obj/kiss_fft.o
	$(CXX) $(CXXFLAGS) $^ -o $@

bin/tests: obj/catch.o obj/test.o obj/encode.o obj/decode.o obj/kiss_fft.o
	$(CXX) $(CXXFLAGS) $^ -o $@

obj/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

obj/kiss_fft.o: lib/kissfft/kiss_fft.c
	$(CC) $(CFLAGS) -c $< -o $@

obj/catch.o: tests/catch.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

obj/test.o: tests/test.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.DEFAULT_GOAL := exec
.PHONY: clean

clean:
	rm -rf bin/* obj/*