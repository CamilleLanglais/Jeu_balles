#include "draw_scene.h"
#include "3D_tools.h"
#include <math.h>


void drawCorridor(){
    //sol
    glPushMatrix();
		glTranslatef(0.,0.,-2.5);
		glScalef(30.0,10.0,-2.5);
		glColor3f(0.0,0.0,0.5);
		drawSquare();
		glPopMatrix();

    //Mur
	glPushMatrix();
		glTranslatef(-5., -2., 0.);
		glScalef(30., 10.,4.);
		glRotatef(90.,1.,0.,0.);
		glColor3f(0.,0.5,0.5);
		drawSquare();
    glPopMatrix();

    //plafond
    glPushMatrix();
		glTranslatef(0.,0.,5.);
		glScalef(30.0,10.0,2.5);
		glColor3f(0.5,0.0,0.5);
		drawSquare();
	glPopMatrix();
}