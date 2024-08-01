##
# OpenGL Tutorial
#
# @file
# @version 0.1

build:
	g++ -o pog pog.cpp -lglfw -lGLESv2 -lm -lGL
run: build
	./pog


# end
