##
# OpenGL Tutorial
#
# @file
# @version 0.1
CC = g++
CFLAGS = -Wall
LIBS = -lglfw -lGLESv2 -lm -lGL -lGLEW -ldl
INCL = ./include
DEPS =  gl_utils.cpp glad.c
EXE = pog


all: build run

build: $(EXE).cpp $(DEPS)
	$(CC) $(CFLAGS) $^ $(LIBS) -I$(INCL) -o ./out/$(EXE)

debug: $(EXE).cpp $(DEPS)
	$(CC) -g $(CFLAGS) $^ $(LIBS) -I$(INCL) -o ./out/$(EXE)-debug

run: build
	./out/pog

gdb: debug
	gdb ./out/debug
# end
