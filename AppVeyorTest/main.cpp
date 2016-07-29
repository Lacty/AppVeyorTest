
#include <iostream>
#include <GLFW/glfw3.h>


int main() {
  if (!glfwInit()) return -1;
  
  auto window = static_cast<GLFWwindow*>(glfwCreateWindow(600, 400, "AppVeyorTest", nullptr, nullptr));

  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) {
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();
}
