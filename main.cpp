#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416
int windowWidth=1540;
int windowHeight=940;
double Txval=0;
double Tyval=0;
double sval=0;
double cval=0;
 bool flagScale=true;


 ///sun
void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
int i;
int triangleAmount = 60; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
}

void cloud()
{
    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(9.4,17,0.6);
    glPopMatrix();

     glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(9.9,17.7,0.6);
    glPopMatrix();

     glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(10,16.7,0.6);
    glPopMatrix();

     glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(10.6,17.3,0.6);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(14,17.3,0.6);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(14.9,17.8,0.7);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(14.8,16.8,0.7);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(15,20,0.8);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(15.7,20.5,0.7);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(8.6,20,0.6);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(9,20.7,0.9);
    glPopMatrix();

    glPushMatrix();
  glColor3f(1.0,1.0,1.0);
    drawFilledCircle(9.5,20,0.9);
    glPopMatrix();



}

///tree
void triroot()
{glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.6,0.2,0.0);
glVertex2f(8.9, 9.4);
glVertex2f(9.1, 9.4);
glVertex2f(9.1, 5.8);
glVertex2f(8.9, 5.8);
glEnd();
glPopMatrix();
}

void treeTri()
{glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,1.0,0.1);
glVertex2f(9, 10.8);
glVertex2f(8.5, 9.2);
glVertex2f(9.5, 9.2);
glEnd();
glPopMatrix();
}
///hills
void triangles()
{ glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.8,0.1);
glVertex2f(0.9, 16.1);
glColor3f(0.0,0.1,0.0);
glVertex2f(-0, 14);
glColor3f(0.0,0.2,0.0);
glVertex2f(1.8, 14);
glEnd();
glPopMatrix();
}
///river bank
void riverbank()
{ glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.6,0.0);
glVertex2f(9.6, 14);
glVertex2f(8, 9.1);
glVertex2f(11.2, 9.1);
glEnd();
glPopMatrix();
}

void boat()
{
 glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.0,0.0);
glVertex2f(13.3, 10.3);
glVertex2f(15.5, 10.3);
glVertex2f(15.5, 8.9);
glVertex2f(13.3, 8.9);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.0,0.0);
glVertex2f(12.2, 10.9);
glVertex2f(13.3, 8.9);
glVertex2f(13.3, 10.3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.0,0.0);
glVertex2f(16.6, 10.9);
glVertex2f(15.5, 8.9);
glVertex2f(15.5, 10.3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.5,0.2,0.0);
glVertex2f(13.7, 11.6);
glVertex2f(15, 11.6);
glVertex2f(14.6, 10.3);
glVertex2f(13.3, 10.3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.0,0.0);
glVertex2f(15, 11.6);
glVertex2f(14.6, 10.3);
glVertex2f(15.5, 10.3);
glEnd();
glPopMatrix();

}

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(-0, 24, -0, 24);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);


///sky background
glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.8,0.9);
glVertex2f(-0, 24);
glVertex2f(24, 24);
glVertex2f(24, 14);
glVertex2f(-0, 14);

glEnd();
glPopMatrix();

///sun
glPushMatrix();

    glPushMatrix();
    glColor3f(1.5,1.0,0.0);
    glTranslated(0,sval,0);
    drawFilledCircle(13,18,1);
    glPopMatrix();

   glPushMatrix();
   glTranslated(sval,0,0);
   cloud();
  glPopMatrix();
 glPopMatrix();


///triangles of hills


glPushMatrix();
    glTranslatef(1,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(-0,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(1.8,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(2.9,-6,0);
    glScalef(1.9,1.4,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(6.9,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(5.6,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(7.9,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(10.8,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(9.5,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(12,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(13.2,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(15,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(16.8,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(17.8,-7,0);
    glScalef(1.5,1.5,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(20.3,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();

glPushMatrix();
    glTranslatef(22.7,-0,0);
    glScalef(1,1,1);
    triangles();
glPopMatrix();


///river background
glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.0,1.0);
glVertex2f(9.6, 14);
glVertex2f(24, 14);
glColor3f(0.0,0.6,0.8);
glVertex2f(24, -0);
glVertex2f(9.6, -0);
glEnd();
glPopMatrix();


///boat
glPushMatrix();
 glPushMatrix();
   glTranslated(cval,0,0);
   boat();
 glPopMatrix();
 glPopMatrix();


///2nd boat

glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.3,0.2,0.0);
glVertex2f(16, 8);
glVertex2f(16.2, 8);
glVertex2f(16.2, 3);
glVertex2f(16, 3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.0,0.0);
glVertex2f(16.4, 4.5);
glVertex2f(18.6, 4.5);
glVertex2f(18.6, 3.1);
glVertex2f(16.4, 3.1);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.0,0.0);
glVertex2f(15.2, 5);
glVertex2f(16.4, 3.1);
glVertex2f(16.4, 4.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.0,0.0);
glVertex2f(19.8, 5);
glVertex2f(18.6, 3.1);
glVertex2f(18.6, 4.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.5,0.2,0.0);
glVertex2f(16.7, 5.8);
glVertex2f(18, 5.8);
glVertex2f(17.7, 4.5);
glVertex2f(16.4, 4.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.0,0.0);
glVertex2f(18, 5.8);
glVertex2f(17.7, 4.5);
glVertex2f(18.6, 4.5);
glEnd();
glPopMatrix();

///river plus background
glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.6,0.0);
glVertex2f(-0, 14);
glVertex2f(9.6, 14);
glVertex2f(10, -0);
glVertex2f(-0, -0);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.0,0.6,0.0);
glVertex2f(9.6, 13);
glVertex2f(9.3, 2);
glVertex2f(14, 2);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.6,0.0);
glVertex2f(9.6, 5);
glVertex2f(24, 0.8);
glVertex2f(24, -0);
glVertex2f(9.6, -0);
glEnd();
glPopMatrix();


///river bank
glPushMatrix();

    glTranslatef(16,0.8,0);
    glRotatef(75,0,0,1);
    glScalef(1,1,1);
    riverbank();
glPopMatrix();

///triroot

glPushMatrix();
    glTranslatef(-0,-0,0);
    glScalef(1,1,1);
    triroot();
glPopMatrix();

glPushMatrix();
    glTranslatef(-2,1.3,0);
    glScalef(1,1,1);
    triroot();
glPopMatrix();

glPushMatrix();
    glTranslatef(-3.8,1.3,0);
    glScalef(1,1,1);
    triroot();
glPopMatrix();

glPushMatrix();
    glTranslatef(-5.9,1.3,0);
    glScalef(1,1,1);
    triroot();
glPopMatrix();


///grass
glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(1.3,0.6 ,0.0);
glVertex2f(5, 8.1);
glVertex2f(8, 7.5);
glVertex2f(8, 3.8);
glVertex2f(5, 3.9);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(1.3, 0.6 ,0.0);
glVertex2f(6.8, 9);
glVertex2f(5, 8.1);
glVertex2f(8, 7.5);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.0,0.0,0.0);
glVertex2f(6.72, 9.7);
glVertex2f(6.82, 9.7);
glVertex2f(6.82, 9);
glVertex2f(6.72, 9);
glEnd();
glPopMatrix();


///hut front and ground part
glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.5,0.3,0.0);
glVertex2f(3.2, 7.6);
glVertex2f(5.8, 7.6);
glVertex2f(5.8, 3.3);
glVertex2f(3.2, 3.3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

glColor3f(0.12,0.1,0.0);
glVertex2f(3.2, 3.3);
glVertex2f(5.8, 3.3);
glVertex2f(5.8, 2.8);
glVertex2f(3.2, 2.8);
glEnd();
glPopMatrix();
///home tin
glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.12,0.1,0.0);
glVertex2f(2.5, 9.4);
glVertex2f(5.7, 9.4);
glVertex2f(6.3, 7.2);
glVertex2f(3.2, 7.2);
glEnd();
glPopMatrix();
///home side
glPushMatrix();
glBegin(GL_TRIANGLES);

glColor3f(0.5,0.4,0.0);
glVertex2f(2.5, 9.4);
glVertex2f(1.6, 7.2);
glVertex2f(3.2, 7.2);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.12,0.1,0.0);
glVertex2f(2.3, 9.2);
glVertex2f(2.5, 9.4);
glVertex2f(1.6, 7.2);
glVertex2f(1.2, 7.2);
glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.5,0.4,0.0);
glVertex2f(1.6, 7.2);
glVertex2f(3.2, 7.2);
glVertex2f(3.2, 3.3);
glVertex2f(1.6, 3.9);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.12,0.2,0.0);
glVertex2f(1.6, 3.9);
glVertex2f(3.2, 3.3);
glVertex2f(3.2, 2.8);
glVertex2f(1.6, 3.4);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.9,0.3,0.0);
glVertex2f(4, 5.9);
glVertex2f(5, 5.9);
glVertex2f(5, 3.3);
glVertex2f(4, 3.3);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_POLYGON);

glColor3f(0.9,0.4,0.0);
glVertex2f(1.9, 6.6);
glVertex2f(2.9, 6.4);
glVertex2f(2.9, 5);
glVertex2f(1.9, 5.2);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(Txval, Tyval, 0);
glPushMatrix();
treeTri();



///tree triangles

glPushMatrix();
    glTranslatef(-12.6,0.5,0);
    glScalef(2.4,1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-4.5,1.8,0);
    glScalef(1.5,1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-0,1.8,0);
    glScalef(1,1.1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-6.4,0.2,0);
    glScalef(1.5,1.2,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-9.1,-0.9,0);
    glScalef(1.8,1.2,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-3.7,1.8,0);
    glScalef(1,1.1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-8.2,0.8,0);
    glScalef(1.5,1.1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-8.2,0.1,0);
    glScalef(1.5,1.1,1);
    treeTri();
glPopMatrix();


glPushMatrix();
    glTranslatef(-5.9,1.8,0);
    glScalef(1,1.1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-10.4,0.1,0);
    glScalef(1.5,1.1,1);
    treeTri();
glPopMatrix();

glPushMatrix();
    glTranslatef(-10.4,0.8,0);
    glScalef(1.5,1.1,1);
    treeTri();
glPopMatrix();

glPopMatrix();

glFlush();
glutSwapBuffers();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'r':
        Txval+=0.2;
        break;
    case 'l':
        Txval-=0.2;
        break;
    case 'u':
        Tyval+=0.2;
        break;
    case 'd':
        Tyval-=0.2;
        break;

            case 's':
        flagScale=true;
        break;
    case 'e':
        flagScale=false;
        break;

    case 27: // Escape key
        exit(1);
    }
glutPostRedisplay();
}

void update()
{
if (flagScale == true)
{
sval+= 0.01;
if(sval > 24)
sval = -14;

cval+= 0.02;
if(cval>11)
cval = 0;

}
if (flagScale == false)
{
sval = 0;

}

glutPostRedisplay();
}
int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("Poushali Home City View");
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(update);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
