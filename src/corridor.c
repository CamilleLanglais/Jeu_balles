#include "draw_scene.h"
#include "3D_tools.h"
#include <math.h>


void drawCorridor(float profondeur){
    //sol
    glPushMatrix();
		glTranslatef(profondeur,0.,-5.);
		glScalef(600., 40., 1.);
		glColor3f(0.0,0.0,1.);
		drawSquareXY();
	glPopMatrix();

    // Mur gauche
	glPushMatrix();
		glTranslatef(profondeur, -10., 0.);
		glScalef(600., 1., 100.);
		glColor3f(0.0,0.0,0.5);
		drawSquareXZ();
    glPopMatrix();

// mur droit
	glPushMatrix();
		glTranslatef(profondeur, 10., 0.);
		glScalef(600., 1., 100.);
		glColor3f(0.0,0.0,0.5);
		drawSquareXZ();
    glPopMatrix();


    //plafond
    glPushMatrix();
		glTranslatef(profondeur,0.,5.);
		glScalef(600., 40., 1.);
		glColor3f(0.0,0.0,1.);
		drawSquareXY(profondeur);
	glPopMatrix();
}