#include "raquette.h"
#include "3D_tools.h"
#include <math.h>

void drawRaquette(float x, float y){
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
		glVertex3f(0.0,x+1.0,y-1.0);
		glVertex3f(0.0,x-1.0,y-1.0);
		glVertex3f(0.0,x+1.0,y-1.0);
		glVertex3f(0.0,x+1.0,y+1.0);
		glVertex3f(0.0,x+1.0,y+1.0);
		glVertex3f(0.0,x-1.0,y+1.0);
		glVertex3f(0.0,x-1.0,y+1.0);
		glVertex3f(0.0,x-1.0,y-1.0);
    glEnd();
}

