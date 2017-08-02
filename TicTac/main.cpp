/* Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above notice and this permission notice shall be included in all copies
 * or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
/* File for "Basic Shapes" lesson of the OpenGL tutorial on
 * www.videotutorialsrock.com
 */



#include <iostream>
#include <stdlib.h> //Needed for "exit" function


//Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;


void drawBoard();

int data[9];
int letter = 1;

void detectWin(int x)
{
  if(data[0] == x && data[1] == x && data[2] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[3] == x && data[4] == x && data[5] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[6] == x && data[7] == x && data[8] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[0] == x && data[4] == x && data[8] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[2] == x && data[4] == x && data[6] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[0] == x && data[3] == x && data[6] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[1] == x && data[4] == x && data[7] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[2] == x && data[5] == x && data[8] == x)
  {
    cout << endl << "-----!!PLAYER " << x << " WINS!!-----" << endl << endl;
    exit(0);
  }
  if(data[0] > 0 && data[1] > 0 && data[2] > 0 && data[3] > 0 && data[4] > 0 && data[5] > 0 && data[6] > 0 && data[7] > 0 && data[8] > 0)
  {
    cout << endl << ".....!OH NO! IT'S A DRAW!....." << endl << endl;
    exit(0);
  }
}

//Called when a key is pressed
void handleKeypress(unsigned char key, //The key that was pressed
					int x, int y) {    //The current mouse coordinates
	if(key == 'q')
	{
	  if(letter == 1 && data[0] == 0)
	  {
	    data[0] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[0] == 0)
	  {
	    data[0] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'w')
	{
	  if(letter == 1 && data[1] == 0)
	  {
	    data[1] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[1] == 0)
	  {
	    data[1] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'e')
	{
	  if(letter == 1 && data[2] == 0)
	  {
	    data[2] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[2] == 0)
	  {
	    data[2] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'a')
	{
	  if(letter == 1 && data[3] == 0)
	  {
	    data[3] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[3] == 0)
	  {
	    data[3] = 2;
	    letter = 1;
	  }
	}
	else if(key == 's')
	{
	  if(letter == 1 && data[4] == 0)
	  {
	    data[4] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[4] == 0)
	  {
	    data[4] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'd')
	{
	  if(letter == 1 && data[5] == 0)
	  {
	    data[5] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[5] == 0)
	  {
	    data[5] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'z')
	{
	  if(letter == 1 && data[6] == 0)
	  {
	    data[6] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[6] == 0)
	  {
	    data[6] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'x')
	{
	  if(letter == 1 && data[7] == 0)
	  {
	    data[7] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[7] == 0)
	  {
	    data[7] = 2;
	    letter = 1;
	  }
	}
	else if(key == 'c')
	{
	  if(letter == 1 && data[8] == 0)
	  {
	    data[8] = 1;
	    letter = 2;
	  }
	  else if(letter == 2 && data[8] == 0)
	  {
	    data[8] = 2;
	    letter = 1;
	  }
	}
  switch (key) {
		case 27: //Escape key
			exit(0); //Exit the program
  	/*
		case 'q':
		  data[0] = (letter++ % 2 == 0) ? 1 : 2;
		case 'w':
		  data[1] = (letter++ % 2 == 0) ? 1 : 2;
		case 'e':
		  data[2] = (letter++ % 2 == 0) ? 1 : 2;
		case 'a':
		  data[3] = (letter++ % 2 == 0) ? 1 : 2;
		case 's':
		  data[4] = (letter++ % 2 == 0) ? 1 : 2;
		case 'd':
		  data[5] = (letter++ % 2 == 0) ? 1 : 2;
		case 'z':
		  data[6] = (letter++ % 2 == 0) ? 1 : 2;
		case 'x':
		  data[7] = (letter++ % 2 == 0) ? 1 : 2;
		case 'c':
		  data[8] = (letter++ % 2 == 0) ? 1 : 2;
    */
		}
	drawBoard();
}

//Initializes 3D rendering
void initRendering() {
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	//Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);
	
	glMatrixMode(GL_PROJECTION); //Switch to setting the camera perspective
	
	//Set the camera perspective
	glLoadIdentity(); //Reset the camera
	gluPerspective(45.0,                  //The camera angle
				   (double)w / (double)h, //The width-to-height ratio
				   1.0,                   //The near z clipping coordinate
				   200.0);                //The far z clipping coordinate
}

void drawX(int transX, int transY) {
	//Clear information from last draw
	float x = -0.7;
	float y =  0.7;
	x += transX * 0.7;
	y -= transY * 0.7;
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	//glTranslatef(-0.2f, 0.2f, 0.0f); //Move forward 5 units
	//Line 1
	glVertex3f(-0.1f + x,  0.2f + y, -2.5f);
	glVertex3f(-0.2f + x,  0.1f + y, -2.5f);
	glVertex3f( 0.1f + x, -0.2f + y, -2.5f);
	glVertex3f( 0.2f + x, -0.1f + y, -2.5f);
	
	//Line 2
	glVertex3f( 0.1f + x,  0.2f + y, -2.5f);
	glVertex3f( 0.2f + x,  0.1f + y, -2.5f);
	glVertex3f(-0.1f + x, -0.2f + y, -2.5f);
	glVertex3f(-0.2f + x, -0.1f + y, -2.5f);
	
	glEnd(); //End quadrilateral coordinates
}


void drawO(int transX, int transY) {
	//Clear information from last draw
	float x = -0.7;
	float y =  0.7;
	x += transX * 0.7;
	y -= transY * 0.7;
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	//glTranslatef(-0.2f, 0.2f, 0.0f); //Move forward 5 units
	//top line
	glVertex3f(-0.15f + x, 0.2f  + y, -2.5f);
	glVertex3f(-0.15f + x, 0.15f + y, -2.5f);
	glVertex3f( 0.15f + x, 0.15f + y, -2.5f);
	glVertex3f( 0.15f + x, 0.2f  + y, -2.5f);
	
	//bottom line
	glVertex3f(-0.15f + x, -0.2f  + y, -2.5f);
	glVertex3f(-0.15f + x, -0.15f + y, -2.5f);
	glVertex3f( 0.15f + x, -0.15f + y, -2.5f);
	glVertex3f( 0.15f + x, -0.2f  + y, -2.5f);
	
	//left line
	glVertex3f(-0.2f  + x, 0.15f + y, -2.5f);
	glVertex3f(-0.15f + x, 0.15f + y, -2.5f);
	glVertex3f(-0.15f + x,-0.15f + y, -2.5f);
	glVertex3f(-0.2f  + x,-0.15f + y, -2.5f);
	
	//right line
	glVertex3f(0.2f  + x, 0.15f + y, -2.5f);
	glVertex3f(0.15f + x, 0.15f + y, -2.5f);
	glVertex3f(0.15f + x,-0.15f + y, -2.5f);
	glVertex3f(0.2f  + x,-0.15f + y, -2.5f);
	
	glEnd(); //End quadrilateral coordinates
}


//Draws the 3D scene
void drawBoard() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	
	glBegin(GL_QUADS); //Begin quadrilateral coordinates
	
	//Virtical Line 1
	glVertex3f(-0.35f, -1.0f, -2.5f);
	glVertex3f(-0.25f, -1.0f, -2.5f);
	glVertex3f(-0.25f,  1.0f, -2.5f);
	glVertex3f(-0.35f,  1.0f, -2.5f);
	
	//Virtical Line 2
	glVertex3f(0.35f, -1.0f, -2.5f);
	glVertex3f(0.25f, -1.0f, -2.5f);
	glVertex3f(0.25f,  1.0f, -2.5f);
	glVertex3f(0.35f,  1.0f, -2.5f);
	
	//Horizontal Line 1
	glVertex3f(-1.00f, -0.35f, -2.5f);
	glVertex3f(-1.00f, -0.25f, -2.5f);
	glVertex3f( 1.00f, -0.25f, -2.5f);
	glVertex3f( 1.00f, -0.35f, -2.5f);
	
	//Horizontal Line 2
	glVertex3f(-1.00f, 0.35f, -2.5f);
	glVertex3f(-1.00f, 0.25f, -2.5f);
	glVertex3f(1.00f, 0.25f, -2.5f);
	glVertex3f(1.00f, 0.35f, -2.5f);
	
	glEnd(); //End quadrilateral coordinates
	
	for(int i = 0; i < 9; i++)
	{
	 if(data[i] == 1)
	 {
	  drawX(i%3,i/3);
	  detectWin(1);
	 }
	 if(data[i] == 2)
	 {
	  drawO(i%3,i/3);
	  detectWin(2);
	 }
	}
	
	/*
	glBegin(GL_TRIANGLES); //Begin triangle coordinates
	
	//Pentagon
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(1.5f, 0.5f, -5.0f);
	glVertex3f(0.5f, 1.0f, -5.0f);
	
	glVertex3f(0.5f, 1.0f, -5.0f);
	glVertex3f(1.5f, 0.5f, -5.0f);
	glVertex3f(1.5f, 1.0f, -5.0f);
	
	glVertex3f(0.5f, 1.0f, -5.0f);
	glVertex3f(1.5f, 1.0f, -5.0f);
	glVertex3f(1.0f, 1.5f, -5.0f);
	
	//Triangle
	glVertex3f(-0.5f, 0.5f, -5.0f);
	glVertex3f(-1.0f, 1.5f, -5.0f);
	glVertex3f(-1.5f, 0.5f, -5.0f);
	
	glEnd(); //End triangle coordinates
	*/
	
	glutSwapBuffers(); //Send the 3D scene to the screen
}

int main(int argc, char** argv) {
	for(int i = 0; i < 10; i++)
	{
	  data[i] = 0;
	}
	
	
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(480, 480); //Set the window size
	
	//Create the window
	glutCreateWindow("Basic Shapes - videotutorialsrock.com");
	initRendering(); //Initialize rendering
	
	//Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawBoard);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);
	
	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached
}









