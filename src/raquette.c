#include "raquette.h"
#include "3D_tools.h"
#include <math.h>

void drawRaquette(){
    glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
		glVertex3f(0.0,1.0,-1.0);
		glVertex3f(0.0,-1.0,-1.0);
		glVertex3f(0.0,1.0,-1.0);
		glVertex3f(0.0,1.0,1.0);
		glVertex3f(0.0,1.0,1.0);
		glVertex3f(0.0,-1.0,1.0);
		glVertex3f(0.0,-1.0,1.0);
		glVertex3f(0.0,-1.0,-1.0);
    glEnd();
}

