#include "square.h"

void Square::init()
{
    static const GLfloat vertex_buffer_data[] = {
        1.000000, -0.050000, 1.000000,
        -1.000000, -0.050000, -1.000000,
        1.000000, -0.050000, -1.000000,

        -1.000000, 0.050000, -1.000000,
        1.000000, 0.050000, 1.000001,
        1.000000, 0.050000, -1.000000,

        1.000000, 0.050000, -1.000000,
        1.000000, -0.050000, 1.000000,
        1.000000, -0.050000, -1.000000,

        1.000000, 0.050000, 1.000001,
        -1.000000, -0.050000, 1.000000,
        1.000000, -0.050000, 1.000000,

        -1.000000, 0.050000, 1.000000,
        -1.000000, -0.050000, -1.000000,
        -1.000000, -0.050000, 1.000000,

        1.000000, -0.050000, -1.000000,
        -1.000000, 0.050000, -1.000000,
        1.000000, 0.050000, -1.000000,

        1.000000, -0.050000, 1.000000,
        -1.000000, -0.050000, 1.000000,
        -1.000000, -0.050000, -1.000000,

        -1.000000, 0.050000, -1.000000,
        -1.000000, 0.050000, 1.000000,
        1.000000, 0.050000, 1.000001,

        1.000000, 0.050000, -1.000000,
        1.000000, 0.050000, 1.000001,
        1.000000, -0.050000, 1.000000,

        1.000000, 0.050000, 1.000001,
        -1.000000, 0.050000, 1.000000,
        -1.000000, -0.050000, 1.000000,

        -1.000000, 0.050000, 1.000000,
        -1.000000, 0.050000, -1.000000,
        -1.000000, -0.050000, -1.000000,

        1.000000, -0.050000, -1.000000,
        -1.000000, -0.050000, -1.000000,
        -1.000000, 0.050000, -1.000000,
    };

    static const GLfloat edge_vertex_buffer_data[] = {
        1.000999, 0.051000, 1.001001,
        -1.001000, 0.051000, 1.001000,
        -1.001000, -0.051000, 1.001000,

        1.001001, 0.051000, -1.000999,
        1.000999, 0.051000, 1.001001,
        1.001000, -0.051000, 1.001000,

        1.001001, 0.051000, -1.000999,
        1.001000, -0.051000, 1.001000,
        1.001000, -0.051000, -1.001000,

        1.000999, 0.051000, 1.001001,
        -1.001000, -0.051000, 1.001000,
        1.001000, -0.051000, 1.001000,

        -1.001000, -0.051000, 1.001000,
        -1.001000, 0.051000, -1.001000,
        -1.001000, -0.051000, -1.001000,

        1.001000, -0.051000, -1.001000,
        -1.001000, 0.051000, -1.001000,
        1.001001, 0.051000, -1.000999,

        0.900900, -0.051000, 0.900900,
        1.001000, -0.051000, -1.001000,
        1.001000, -0.051000, 1.001000,

        0.900900, -0.051000, -0.900900,
        -1.001000, -0.051000, -1.001000,
        1.001000, -0.051000, -1.001000,

        0.900900, -0.051000, 0.900900,
        -1.001000, -0.051000, 1.001000,
        -0.900900, -0.051000, 0.900900,

        -0.900900, -0.051000, -0.900900,
        -1.001000, -0.051000, 1.001000,
        -1.001000, -0.051000, -1.001000,

        0.900899, 0.051000, 0.900901,
        1.001001, 0.051000, -1.000999,
        0.900900, 0.051000, -0.900900,

        0.900900, 0.051000, -0.900900,
        -1.001000, 0.051000, -1.001000,
        -0.900900, 0.051000, -0.900900,

        0.900899, 0.051000, 0.900901,
        -1.001000, 0.051000, 1.001000,
        1.000999, 0.051000, 1.001001,

        -0.900900, 0.051000, -0.900900,
        -1.001000, 0.051000, 1.001000,
        -0.900900, 0.051000, 0.900900,

        -1.001000, -0.051000, 1.001000,
        -1.001000, 0.051000, 1.001000,
        -1.001000, 0.051000, -1.001000,

        1.001000, -0.051000, -1.001000,
        -1.001000, -0.051000, -1.001000,
        -1.001000, 0.051000, -1.001000,

        0.900900, -0.051000, 0.900900,
        0.900900, -0.051000, -0.900900,
        1.001000, -0.051000, -1.001000,

        0.900900, -0.051000, -0.900900,
        -0.900900, -0.051000, -0.900900,
        -1.001000, -0.051000, -1.001000,

        0.900900, -0.051000, 0.900900,
        1.001000, -0.051000, 1.001000,
        -1.001000, -0.051000, 1.001000,

        -0.900900, -0.051000, -0.900900,
        -0.900900, -0.051000, 0.900900,
        -1.001000, -0.051000, 1.001000,

        0.900899, 0.051000, 0.900901,
        1.000999, 0.051000, 1.001001,
        1.001001, 0.051000, -1.000999,

        0.900900, 0.051000, -0.900900,
        1.001001, 0.051000, -1.000999,
        -1.001000, 0.051000, -1.001000,

        0.900899, 0.051000, 0.900901,
        -0.900900, 0.051000, 0.900900,
        -1.001000, 0.051000, 1.001000,

        -0.900900, 0.051000, -0.900900,
        -1.001000, 0.051000, -1.001000,
        -1.001000, 0.051000, 1.001000,
    };

    this->object = create3DObject(GL_TRIANGLES, 12*3, vertex_buffer_data, .75, .25, .35, GL_FILL);
    this->object_edge = create3DObject(GL_TRIANGLES, 24*3, edge_vertex_buffer_data, 0.75, .15, .25, GL_FILL);
}

void Square::draw() {
    if (this->object == NULL) return;
    Matrices.model = glm::mat4(1.0f);
    glm::mat4 translate = glm::translate (this->position);        // glTranslatef
    Matrices.model *= translate;
    glm::mat4 MVP = VP * Matrices.model;
    glUniformMatrix4fv(Matrices.MatrixID, 1, GL_FALSE, &MVP[0][0]);
    draw3DObject(this->object);
    draw3DObject(this->object_edge);
}

void Square::set_position(float x, float y, float z) {
    this->position = glm::vec3(x, y, z);
}
