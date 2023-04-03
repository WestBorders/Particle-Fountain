#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <freeglut.h>

using namespace std;

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutInitWindowSize(500, 500);
    glutCreateWindow("Particle Fountain");
    glShadeModel(GL_SMOOTH);

    //glutDisplayFunc(display_image);

    glMatrixMode(GL_PROJECTION);
    glOrtho(0, 500, 0, 500, 0, 1);

    glutMainLoop();

    return 0;
}