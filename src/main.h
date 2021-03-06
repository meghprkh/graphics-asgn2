#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace std;

struct color_t {
    int r;
    int g;
    int b;
};

// nonedit.cpp
extern GLFWwindow* window;
GLFWwindow* initGLFW (int width, int height);
GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);
struct VAO* create3DObject (GLenum primitive_mode, int numVertices, const GLfloat* vertex_buffer_data, const GLfloat* color_buffer_data, GLenum fill_mode=GL_FILL);
struct VAO* create3DObject (GLenum primitive_mode, int numVertices, const GLfloat* vertex_buffer_data, const GLfloat red, const GLfloat green, const GLfloat blue, GLenum fill_mode=GL_FILL);
struct VAO* create3DObject (GLenum primitive_mode, int numVertices, const GLfloat* vertex_buffer_data, const color_t color, GLenum fill_mode);
void draw3DObject (struct VAO* vao);

// input.cpp
void keyboard (GLFWwindow* window, int key, int scancode, int action, int mods);
void keyboardChar (GLFWwindow* window, unsigned int key);
void mouseButton (GLFWwindow* window, int button, int action, int mods);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void tick_input(GLFWwindow* window);

// other_handlers.cpp
void error_callback(int error, const char* description);
void quit(GLFWwindow *window);
void reshapeWindow (GLFWwindow* window, int width, int height);

// Split main
void draw();
void initGL (GLFWwindow* window, int width, int height);

// Types
struct VAO {
    GLuint VertexArrayID;
    GLuint VertexBuffer;
    GLuint ColorBuffer;

    GLenum PrimitiveMode;
    GLenum FillMode;
    int NumVertices;
};

struct GLMatrices {
    glm::mat4 projectionP;
    glm::mat4 projectionO;
    glm::mat4 model;
    glm::mat4 view;
    GLuint MatrixID;
};

extern GLuint programID;
extern GLMatrices Matrices;
extern glm::mat4 VP;
extern double camera_rotation_angle, camera_y, camera_zoom, screen_center_x, screen_center_y, camera_look_x, camera_look_y;
enum camera_view_t {CAMERA_TOWER, CAMERA_FPS, CAMERA_FOLLOW, CAMERA_TOP, CAMERA_HELICOPTER};
extern enum camera_view_t camera_view;
extern bool camera_ortho;

// ---- Logic ----

enum brick_color_t {BRICK_RED, BRICK_GREEN, BRICK_BLACK};
enum direction_t {DIR_UP, DIR_RIGHT, DIR_DOWN, DIR_LEFT};
enum square_t {SQUARE_NONE, SQUARE_HOLE, SQUARE_NORMAL, SQUARE_WEAK, SQUARE_B1, SQUARE_B1SX, SQUARE_B1SO, SQUARE_B2, SQUARE_B2SX, SQUARE_B2SO, SQUARE_TELEPORT};
extern bool bridge1, bridge2;

// ---- Levels ----
extern int nlevels;
extern square_t levels[][400];
extern int levels_start[][2];

// Audio
void audio_init();
void audio_play();
void audio_close();

#endif
