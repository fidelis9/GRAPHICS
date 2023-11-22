#include <GL/gl.h>
#include <GL/glut.h>


void display() {

  
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
    glColor3f(1, 0, 0); glVertex2f(-0.75, 0);
    glColor3f(0, 1, 0); glVertex2f(0.75, 0);
    glColor3f(0, 0, 1); glVertex2f(0, 0.6);
  glEnd();
  glFlush();
  
  glBegin(GL_POLYGON);
  	glColor3f(1,0,0); glVertex2f(-0.4,0);
  	glColor3f(0,0,1); glVertex2f(-0.4,-0.5);
  	glColor3f(0,1,0); glVertex2f(0.4,-0.5);
  	glColor3f(0,1,0); glVertex2f(0.4,0);
  glEnd();
  glFlush();
  
  glLineWidth(3.0f);
  
  glBegin(GL_LINES);
  	glColor3f(1,0,0); glVertex2f(-0.5, 0);
	glColor3f(1,0,0); glVertex2f(-0.5, -0.6);
	
	glColor3f(0,1,0); glVertex2f(-0.5, -0.6);
	glColor3f(0,1,0); glVertex2f(0.5, -0.6);
	
	glColor3f(0,0,1); glVertex2f(0.5, -0.6);
	glColor3f(0,0,1); glVertex2f(0.5, 0);
	
  glEnd();
  glFlush();  	

}


int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glClearColor(0.0,0.0,0.0,0.0);
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("A Simple Colored Hut");
  glutDisplayFunc(display);

  glutMainLoop();
}
