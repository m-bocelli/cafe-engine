CC = g++
DEBUG_DIR = bin/debug
RELEASE_DIR = bin/release
INCLUDE_PATHS = -Iinclude/headers -Iinclude/SDL2
LIB_MAC = -Llib/macos
LIB_WIN = -Llib/win
DEBUG_FLAGS = -c -std=c++14 -Wall -O0 -g -m64
RELEASE_FLAGS = -c -std=c++14 -Wall -O3 -m64
LINKER_FLAGS = -lSDL2 -lSDL2_Image -lSDL2main
EXEC_NAME = main

debug_m:
	$(CC) $(DEBUG_FLAGS) $(INCLUDE_PATHS) src/*.cpp && $(CC) *.o -o $(DEBUG_DIR)/$(EXEC_NAME) $(LIB_MAC) $(LINKER_FLAGS) && $(DEBUG_DIR)/$(EXEC_NAME) 

release_m:
	$(CC) $(RELEASE_FLAGS) $(INCLUDE_PATHS) src/*.cpp && $(CC) *.o -o $(RELEASE_DIR)/$(EXEC_NAME) $(LIB_MAC) $(LINKER_FLAGS) && $(RELEASE_DIR)/$(EXEC_NAME) 

clean:
	rm -rf *.o bin/debug/* bin/release/* 
