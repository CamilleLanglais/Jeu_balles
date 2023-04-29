#include "draw_scene.h"
#include "3D_tools.h"
#include <math.h>


void drawCorridor(){
    //sol
    glPushMatrix();
		glTranslatef(0.,0.,-5.);
		glScalef(130., 40., 1.);
		glColor3f(0.0,0.0,1.);
		drawSquareXY();
	glPopMatrix();

    // Mur gauche
	glPushMatrix();
		glTranslatef(0., -10., 0.);
		glScalef(130., 1., 100.);
		glColor3f(0.0,0.0,0.5);
		drawSquareXZ();
    glPopMatrix();

// mur droit
	glPushMatrix();
		// glTranslatef(-5., -2., 0.);
		glTranslatef(0., 10., 0.);
		glScalef(130., 1., 100.);
		glColor3f(0.0,0.0,0.5);
		drawSquareXZ();
    glPopMatrix();


    //plafond
    glPushMatrix();
		glTranslatef(0.,0.,5.);
		glScalef(130., 40., 1.);
		glColor3f(0.0,0.0,1.);
		drawSquareXY();
	glPopMatrix();
}