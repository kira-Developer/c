#include <GLFW/glfw3.h>
#include <stdio.h>
#include  <GLES/gl.h>
int main() {
    GLFWwindow* window;
    glfwInit();
    window = glfwCreateWindow(800, 600, "Window", NULL, NULL);
    glfwMakeContextCurrent(window);
    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f ,-0.5f);
        glVertex2f(0.5f ,0.5f);
        glVertex2f(0.5f ,-0.5f);
        glEnd();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}