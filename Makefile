default:
	g++ ./main.c ./include/*.c -o build.exe -O2 -Wall -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
	./build.exe