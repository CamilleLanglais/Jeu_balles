#include "draw_scene.h"
#include "3D_tools.h"
#include <math.h>
#include "ball.h"

void drawball(){
    glPushMatrix();
        glColor3f(0.,0.,0.);       
        drawSphere();
        glTranslatef(0.,0.,2.);

    glPopMatrix();

}