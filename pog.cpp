#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <EGL/egl.h>
#include <GL/glut.h>
// #include <GLES2/gl2.h>
#include <iostream>
#include "pog.h"
int main() {
  int x;
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  GLFWwindow *window;
  window = glfwCreateWindow(1920, 1080, "Test Window", NULL, NULL);
  if (window == NULL) {
	// error handling
	  std::cout << "AH HECK INIT FAILED BRUV" << std::endl;
  }
  glViewport(0, 0, 1920, 1080);
  glfwMakeContextCurrent(window);
  float vertices[] = {
  -0.5f, -0.5f, 0.0f,
  0.5f, -0.5f, 0.0f,
  0.0f, 0.5f, 0.0f
  };

  unsigned int VBO;
  glGenBuffers(1, &VBO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  std::cin >> x;
  return 0;
}
