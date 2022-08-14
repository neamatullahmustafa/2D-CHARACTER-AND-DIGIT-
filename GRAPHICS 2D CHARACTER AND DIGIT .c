#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
void display(void)
{
    //N 2D RED
    glColor3f(1,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.1,0.9);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.9,0.1);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.7,0.9);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,0.9);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.7,0.6);
    glVertex2f(-0.3,0.1);
    glVertex2f(-0.7,0.1);
    glEnd();
    //M 2D GREEN
    glColor3f(0,1,0);
    glBegin(GL_QUADS);
    glVertex2f(0.9,0.1);
    glVertex2f(0.9,0.9);
    glVertex2f(0.1,0.9);
    glVertex2f(0.1,0.1);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.4,0.9);
    glVertex2f(0.6,0.9);
    glVertex2f(0.5,0.7);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.3,0.1);
    glVertex2f(0.5,0.1);
    glVertex2f(0.3,0.6);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.7,0.1);
    glVertex2f(0.5,0.1);
    glVertex2f(0.7,0.6);
    glEnd();
    //5 2D BLUE
    glColor3f(0,0,1);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.1,-0.1);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.9,-0.55);
    glVertex2f(-0.2,-0.55);
    glVertex2f(-0.2,-0.8);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.9,-0.9);
    glVertex2f(-0.1,-0.9);
    glVertex2f(-0.1,-0.45);
    glVertex2f(-0.8,-0.45);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.1,-0.2);
    glEnd();
    //0 2D YELLOW
    glColor3f(1,1,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.1,-0.9);
    glVertex2f(0.9,-0.9);
    glVertex2f(0.9,-0.1);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.8,-0.8);
    glVertex2f(0.8,-0.2);
    glEnd();


    glFlush();
};
void mouse(int button , int state)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
     //N 3D
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.95,0.1);
    glVertex2f(-0.9,0.1);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.95,0.85);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.95,0.1);
    glVertex2f(-0.95,0.05);
    glVertex2f(-0.75,0.05);
    glVertex2f(-0.7,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.7,0.6);
    glVertex2f(-0.3,0.1);
    glVertex2f(-0.35,0.1);
    glVertex2f(-0.7,0.55);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.15,0.05);
    glVertex2f(-0.3,0.05);
    glVertex2f(-0.35,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.3,0.9);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.35,0.46);
    glVertex2f(-0.35,0.85);
    glEnd();
    //M 3D
    glBegin(GL_POLYGON);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0.1);
    glVertex2f(0.1,0.9);
    glVertex2f(0.05,0.85);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.25,0.05);
    glVertex2f(0.3,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(0.05,0.05);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.5,0.1);
    glVertex2f(0.5,0.1);
    glVertex2f(0.45,0.1);
    glVertex2f(0.3,0.5);
    glVertex2f(0.3,0.6);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.5,0.7);
    glVertex2f(0.6,0.9);
    glVertex2f(0.525,0.85);
    glVertex2f(0.475,0.75);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.7,0.1);
    glVertex2f(0.7,0.6);
    glVertex2f(0.65,0.475);
    glVertex2f(0.65,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.9,0.1);
    glVertex2f(0.85,0.05);
    glVertex2f(0.65,0.05);
    glVertex2f(0.65,0.1);
    glEnd();
    //5 3D
    glColor3f(0,0,1);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.95,-0.15);
    glVertex2f(-0.95,-0.6);
    glVertex2f(-0.25,-0.6);
    glVertex2f(-0.25,-0.8);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1,-0.2);
    glVertex2f(-0.15,-0.25);
    glVertex2f(-0.8,-0.25);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1,-0.9);
    glVertex2f(-0.15,-0.95);
    glVertex2f(-0.95,-0.95);
    glVertex2f(-0.95,-0.85);
    glVertex2f(-0.9,-0.8);
    glEnd();
    //0 3D
    glColor3f(1,1,0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.05,-0.15);
    glVertex2f(0.05,-0.95);
    glVertex2f(0.85,-0.95);
    glVertex2f(0.9,-0.9);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.2,-0.25);
    glVertex2f(0.75,-0.25);
    glVertex2f(0.75,-0.8);
    glEnd();
    glFlush();
    };
};
/*void keyboard(char key)
{
    if (key<10)
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
};*/
int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(400,150);
  glutInitWindowSize(500,500);
  glutCreateWindow("neamatullah moustafa 19250");
  glutDisplayFunc(display);
  glutMouseFunc(mouse);
  //glutKeyboardFunc(keyboard);
  glutMainLoop();
}
