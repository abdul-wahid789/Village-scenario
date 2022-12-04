#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void rectengle(float a,float b, float c, float d)
{




}
static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}


void circle(float radius,float x=0,float y=0)
{

    glPushMatrix();
    glTranslated(x,y,0);
    glScaled(1,1,0);
    glutSolidSphere(radius,100,100);
    glPopMatrix();

}
void tree1()
{
    //tree
    glColor3ub(15,149,71);
    glPushMatrix();
    circle(6.128,-176.40072, 20.40875);
    circle(7.4899,-174.90286, 32.84733);
    circle(9.09,-160.97746,38.84979);
    circle(6.53,-146,38);
    circle(8.99,-142.89776,24.21895);
    glBegin(GL_POLYGON);
    glVertex2f(-174.90286,32.84733);
    glVertex2f(-146.11722,36.34942);
    glVertex2f(-144.67996,18.81485);
    glVertex2f(-173.54012,17.3201);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-174.90286,32.84733);
    glVertex2f(-146.11722,36.34942);
    glVertex2f(-144.67996,18.81485);
    glVertex2f(-173.54012,17.3201);
    glEnd();

    //center leaf
    glBegin(GL_POLYGON);
    glVertex2f(-174.90286, 32.84733);
    glVertex2f(-146, 38);
    glVertex2f(-144.67996, 18.81485);
    glVertex2f(-173.54012, 17.3201);
    glEnd();

    //main branch
    glBegin(GL_POLYGON);
    glColor3ub(144,44,29);
    glVertex2f(-164.13,17.81);
    glVertex2f(-153.46,18.36);
    glVertex2f(-149.27003, 2.35337);
    glVertex2f(-161.43612, -0.07985);
    glEnd();



    glPopMatrix();
}
void house1()
{
    // house roof side
    glPushMatrix();
    glColor3ub(176,157,50);
    glBegin(GL_TRIANGLES);
    glVertex2f(-217.9067, 13.9166);
    glVertex2f(-206.605, -9.31858);
    glVertex2f(-240.274, -9.35974);
    glEnd();

    // house roof front
    glBegin(GL_POLYGON);
    glColor3ub(220,202,35);
    glVertex2f(-217.9067, 13.9166);
    glVertex2f(-170, 15);
    glVertex2f(-155.50166, -3.42204);
    glVertex2f(-206.605, -9.31858);
    glEnd();

    // house wall
    glBegin(GL_POLYGON);
    glColor3ub(153,102,39);
    glVertex2f(-230.90697,-9.46407);
    glVertex2f(-156.94105, -3.66808);
    glVertex2f(-156.89635, -21.04092);
    glVertex2f(-203.8286, -26.32341);
    glVertex2f(-233.06247, -20.91807);
    glEnd();

    //house window
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-223.46799, -10.55784);
    glVertex2f(-212.92759, -10.51279);
    glVertex2f(-212.20688, -17.22442);
    glVertex2f(-223.3779, -17.31451);
    glEnd();

    //house door
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-184.33253, -15.11143);
    glVertex2f(-172.90762, -13.3506);
    glVertex2f(-171.55628, -22.48234);
    glVertex2f(-184.41443, -23.66988);
    glEnd();
    glPopMatrix();
}
void house2()
{
    //roof
    glPushMatrix();
    glColor3ub(221,216,32);
    glBegin(GL_POLYGON);
    glVertex2f(-157.1104, -0.89092);
    glVertex2f(-141.70002, 14.2491);
    glVertex2f(-140.16,12.19);
    glVertex2f(-153.32539, -3.32414);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-141.70002, 14.2491);
    glVertex2f(-97.63175, 17.62857);
    glVertex2f(-86.00637, 3.84034);
    glVertex2f(-129.39875, -2.24271);
    glEnd();

    //door left side
    glColor3ub(146,96,38);
    glBegin(GL_POLYGON);
    glVertex2f(-140.16,12.19);
    glVertex2f(-129.39875, -2.24271);
    glVertex2f(-129.3151, -20.84001);
    glVertex2f(-153.85675, -19.63919);
    glVertex2f(-153.32539, -3.32414);
    glEnd();

    //door front side
    glColor3ub(190,129,43);
    glBegin(GL_POLYGON);
    glVertex2f(-129.39875, -2.24271);
    glVertex2f(-89.79,3.31);
    glVertex2f(-87.74161, -14.98083);
    glVertex2f(-129.35333, -19.66115);
    glEnd();

    //window
    glColor3ub(35,31,32);
    glBegin(GL_POLYGON);
    glVertex2f(-146.10714, -7.33973);
    glVertex2f(-137.85205, -6.39242);
    glVertex2f(-137.08518, -12.61758);
    glVertex2f(-146.19736, -12.7078);
    glEnd();

    //door
    glColor3ub(35,31,32);
    glBegin(GL_POLYGON);
    glVertex2f(-112.29715, -9.65636);
    glVertex2f(-103.74548, -7.46168);
    glVertex2f(-101.55081, -16.24039);
    glVertex2f(-112.07012, -17.67828);
    glEnd();


    glPopMatrix();

}

void tree2()
{
    glPushMatrix();
    glScaled(0.8,0.8,0);
    glTranslated(19.3,10,0);
    tree1();
    glPopMatrix();

}
void fencebarVertical(){
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(-82.01707, 14.39685);
    glVertex2f(-80.6,10.29);
    glVertex2f(-80.55318, -10.74745);
    glVertex2f(-83.3364, -10.74745);
    glVertex2f(-83.46, 10.44);
    glEnd();
    glPopMatrix();

}
void fence(){
    //horizontal bar
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(244,118,33);
    glVertex2f(-93.53356, 10.23951);
    glVertex2f(-18.67149, 10.54548);
    glVertex2f(-18.67149, 8.50564);
    glVertex2f(-93.22759, 8.30166);
    glEnd();


    //bar down
    glPushMatrix();
    glTranslated(0,-8.06,0);
    glBegin(GL_POLYGON);
    glColor3ub(244,118,33);
    glVertex2f(-93.53356, 10.23951);
    glVertex2f(-18.67149, 10.54548);
    glVertex2f(-18.67149, 8.50564);
    glVertex2f(-93.22759, 8.30166);
    glEnd();
    glPopMatrix();

    //Y bar
    fencebarVertical();

    glPushMatrix();
    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glPopMatrix();

    glPushMatrix();






}
static void display(void)
{


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //ground
    glPushMatrix();
    glColor3ub(190,222,169);
    glBegin(GL_POLYGON);
    glVertex2d(-250,165);
    glVertex2d(250,165);
    glVertex2d(250,-165);
    glVertex2d(-250,-165);
    glEnd();
    glPopMatrix();

    //sky
    glPushMatrix();
    glColor3ub(9,176,218);
    glBegin(GL_POLYGON);
    glVertex2d(-250,165);
    glVertex2d(250,165);
    glVertex2f(250,90.04171);
    glVertex2f(-250,80.9076);
    glEnd();
    glPopMatrix();




    //river
    glPushMatrix();
    glColor3ub(40,196,244);
    glBegin(GL_POLYGON);
    glVertex2f(-250,-107.256);
    glVertex2f(-90,-90);
    glVertex2f(-89.20139,-165);
    glVertex2f(-250,-165);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-90,-95.63584);
    glVertex2f(1.00305,-67.53294);
    glVertex2f(3.48574,-165);;
    glVertex2f(-89.94126,-165);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.00305,-73.49413);
    glVertex2f(250,-25.46563);
    glVertex2f(250,-165);
    glVertex2f(2.36956,-165);
    glEnd();
    glPopMatrix();


    house1();
    tree1();
    tree2();
    fence();
    house2();







    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(800,596.013);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Village scenario");

    //glutReshapeFunc(resize);


    gluOrtho2D(-250,250,-165,165);
    glClearColor(1,1,1,0);
    glutDisplayFunc(display);



    glutMainLoop();

    return EXIT_SUCCESS;
}
