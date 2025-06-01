#pragma once

#include <GL/glew.h>
#include <vector>

class Cube {
public:
    Cube();
    ~Cube();
    void render();

private:
    GLuint VAO, VBO;
};
