/*
	This Code Is Written By Amir Parsa Rahimian
	Language C++
	Opengl
	More Code And Project https://github.com/parsarahimian1997/Amir-Parsa-Rahimian#amir-parsa-rahimian
*/
#include "stdafx.h"
#include <windows.h> // use as needed for your system
#include <gl\glut.h>
#include <cmath>
#include <iostream>
#include <mmsystem.h>
using namespace std;
const float PI = 3.141592653589;
float width = 800.f; //عرض صفحه نمایش
float height = 800.f; // ارتفاع صفحه نمایش
GLfloat t[20];
int axis = 0;
float f[20];
float l = 0;
float a = 0;
float r0 = 0.05;
float r1 = 0.07;
int r = 0;
int a5 = 0;
float c = 0;
float baseY = 0;
float baseX = 0;
float base = 0; // ایگرگ نقطه مرکزی دایره
int radius1 = 50; // شعاع رسم دایره کوچک
int edges = 20;// مقدار دهی به تعداد اضلاع نمایش دهنده دایره
void dayere() {
	glColor3f(1.f, 0.f, 0.f);//قرمز
	glBegin(GL_POLYGON); {
		for (int i = 0; i <= edges; i++) {
			int x = (radius1 * cos((2 * PI * i) / edges)) + baseX;
			int y5 = (radius1 * sin((2 * PI * i) / edges)) + baseY;
			glVertex2f(x, y5);
		}
	}
	glEnd();
}
// تابع رسم دایره های قرمز گردان
void drawCircles() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[0], 0.0);
	glRotatef(t[0], 0.0, 0.0, 1.0);
	glColor3f(1.f, 0.f, 0.f);//قرمز
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles1() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[1], 0.0);
	glRotatef(t[1], 0.0, 0.0, 1.0);
	glColor3f(1.f, 0.f, 0.f);//قرمز
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles3() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[2], 0.0);
	glRotatef(t[2], 0.0, 0.0, 1.0);
	glColor3f(1.f, 0.f, 0.f);//قرمز
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles4() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[3], 0.0);
	glRotatef(t[3], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles5() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[4], 0.0);
	glRotatef(t[4], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles6() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[5], 0.0);
	glRotatef(t[5], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles7() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[6], 0.0);
	glRotatef(t[6], 0.0, 0.0, 1.0);
	dayere();
}

// تابع رسم دایره های قرمز گردان1
void drawCircles8() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[7], 0.0);
	glRotatef(t[7], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles9() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[8], 0.0);
	glRotatef(t[8], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles10() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[9], 0.0);
	glRotatef(t[9], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles11() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[10], 0.0);
	glRotatef(t[10], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles12() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[11], 0.0);
	glRotatef(t[11], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles13() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[12], 0.0);
	glRotatef(t[12], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles14() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[13], 0.0);
	glRotatef(t[13], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles15() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[14], 0.0);
	glRotatef(t[14], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles16() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[15], 0.0);
	glRotatef(t[15], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles17() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[16], 0.0);
	glRotatef(t[16], 0.0, 0.0, 1.0);
	dayere();
}
// تابع رسم دایره های قرمز گردان1
void drawCircles18() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, f[17], 0.0);
	glRotatef(t[17], 0.0, 0.0, 1.0);
	dayere();
}



//  دایره قرمز وسط 
void drawCircles2() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0, 0, 0);
	glRotatef(t[19], 0.0, 0.0, 0.0);
	float x, y;
	float radius; // شعاع رسم دایره
	float stage; // مقدار افزایش مرحله به مرحله زاویه
	int edges1 = 360;// مقدار دهی به تعداد اضلاع نمایش دهنده دایره
	glColor3f(0.2, 0.2, 0.2);//خاکستری
	radius = 355;

	// رسم دایره خاکستری وسط با روش چندضلعی
	glBegin(GL_POLYGON); {
		for (int i = 0; i <= edges1; i++) {
			int x = (radius * cos((2 * PI * i) / edges1));
			int y = (radius * sin((2 * PI * i) / edges1) + base);
			glVertex2f(x, y);
		}
	}
	glEnd();

}

//<<<<<<<<<<<<<<<<<<<<<<< myInit >>>>>>>>>>>>>>>>>>>>

void myInit(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glPointSize(1.0); // a ‘dot’ is 4 by 4 pixels
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-800, width, -800, height);
}

//<<<<<<<<<<<<<<<<<<<<<<<< myDisplay >>>>>>>>>>>>>>>>>
void myDisplay() {
	glClearColor(0.9, 202, 206, 210);
	glClear(GL_COLOR_BUFFER_BIT); // clear the screen
	if (axis == 0) {
		drawCircles1();
		drawCircles();
		drawCircles3();
		drawCircles2();
		drawCircles4();
		drawCircles5();
		drawCircles6();
		drawCircles7();
		drawCircles8();
		drawCircles9();
		drawCircles10();
	}
	if (axis == 1) {
		drawCircles1();
		drawCircles();
		drawCircles3();
		drawCircles2();
		drawCircles4();
		drawCircles5();
		drawCircles6();
		drawCircles7();
		drawCircles8();
		drawCircles9();
		drawCircles10();
	}
	if (axis == 2) {
		drawCircles1();
		drawCircles();
		drawCircles3();
		drawCircles2();
		drawCircles4();
		drawCircles5();
		drawCircles6();
		drawCircles7();
		drawCircles8();
		drawCircles9();
		drawCircles10();
		drawCircles11();
		drawCircles12();
		drawCircles13();
		drawCircles14();
		drawCircles15();
		drawCircles16();
		drawCircles17();
		drawCircles18();
	}
	glutSwapBuffers();
}
//<<<<<<<<<<<<<<<<<<<<<<<< چرخش >>>>>>>>>>>>>>>>>
void s0() {
	if (axis == 0 || axis == 2) {
		t[0] += r0;
	}
	if (axis == 1) {
		t[0] += r1;
	}
	if (t[0] > 360) t[0] -= 360;
}
void s1() {
	if (axis == 0 || axis == 2) {
		t[1] += r0;
	}
	if (axis == 1) {
		t[1] += r1;
	}
	if (t[1] > 360) t[1] -= 360;
}
void s2() {
	if (axis == 0 || axis == 2) {
		t[2] += r0;
	}
	if (axis == 1) {
		t[2] += r1;
	}
	if (t[2] > 360) t[2] -= 360;
}
void s3() {
	if (axis == 0 || axis == 2) {
		t[3] += r0;
	}
	if (axis == 1) {
		t[3] += r1;
	}
	if (t[3] > 360) t[3] -= 360;
}
void s4() {
	if (axis == 0 || axis == 2) {
		t[4] += r0;
	}
	if (axis == 1) {
		t[4] += r1;
	}
	if (t[4] > 360) t[4] -= 360;
}
void s5() {
	if (axis == 0 || axis == 2) {
		t[5] += r0;
	}
	if (axis == 1) {
		t[5] += r1;
	}
	if (t[5] > 360) t[5] -= 360;
}
void s6() {
	if (axis == 0 || axis == 2) {
		t[6] += r0;
	}
	if (axis == 1) {
		t[6] += r1;
	}
	if (t[6] > 360) t[6] -= 360;
}
void s7() {
	if (axis == 0 || axis == 2) {
		t[7] += r0;
	}
	if (axis == 1) {
		t[7] += r1;
	}
	if (t[7] > 360) t[7] -= 360;
}
void s8() {
	if (axis == 0 || axis == 2) {
		t[8] += r0;
	}
	if (axis == 1) {
		t[8] += r1;
	}
	if (t[8] > 360) t[8] -= 360;
}
void s9() {
	if (axis == 0 || axis == 2) {
		t[9] += r0;
	}
	if (axis == 1) {
		t[9] += r1;
	}
	if (t[9] > 360) t[9] -= 360;
}
void s10() {
	t[10] += 0.05;
	if (t[10] > 360) t[10] -= 360;
}
void s11() {
	t[11] += 0.05;
	if (t[11] > 360) t[11] -= 360;
}
void s12() {
	t[12] += 0.05;
	if (t[12] > 360) t[12] -= 360;
}
void s13() {
	t[13] += 0.05;
	if (t[13] > 360) t[13] -= 360;
}
void s14() {
	t[14] += 0.05;
	if (t[14] > 360) t[14] -= 360;
}
void s15() {
	t[15] += 0.05;
	if (t[15] > 360) t[15] -= 360;
}
void s16() {
	t[16] += 0.05;
	if (t[16] > 360) t[16] -= 360;
}
void s17() {
	t[17] += 0.05;
	if (t[17] > 360) t[17] -= 360;
}
void spin17()
{

	s17();
	s16();
	s15();
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate17() {
	s16();
	s15();
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[17] += 0.35;
	if (f[17] > 250) {
		for (int i = 0; i < 17; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin17);
	}
	glutPostRedisplay();
}
void mykey17(unsigned char key, int x, int y)
{
	if (key == ' '&c == 17) {
		c++;
		glutIdleFunc(translate17);
	}
}
void spin16()
{
	glutKeyboardUpFunc(mykey17);
	s16();
	s15();
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate16() {
	s15();
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[16] += 0.35;
	if (f[16] > 250) {
		for (int i = 0; i < 16; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin16);
	}
	glutPostRedisplay();
}
void mykey16(unsigned char key, int x, int y)
{
	if (key == ' '&c == 16) {
		c++;
		glutIdleFunc(translate16);
	}
}
void spin15()
{
	glutKeyboardUpFunc(mykey16);
	s15();
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate15() {
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[15] += 0.35;
	if (f[15] > 250) {
		for (int i = 0; i < 15; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin15);
	}
	glutPostRedisplay();
}
void mykey15(unsigned char key, int x, int y)
{
	if (key == ' '&c == 15) {
		c++;
		glutIdleFunc(translate15);
	}
}
void spin14()
{
	glutKeyboardUpFunc(mykey15);
	s14();
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate14() {
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[14] += 0.35;
	if (f[14] > 250) {
		for (int i = 0; i < 14; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin14);
	}
	glutPostRedisplay();
}
void mykey14(unsigned char key, int x, int y)
{
	if (key == ' '&c == 14) {
		c++;
		glutIdleFunc(translate14);
	}
}
void spin13()
{
	glutKeyboardUpFunc(mykey14);
	s13();
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate13() {
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[13] += 0.35;
	if (f[13] > 250) {
		for (int i = 0; i < 13; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin13);
	}
	glutPostRedisplay();
}
void mykey13(unsigned char key, int x, int y)
{
	if (key == ' '&c == 13) {
		c++;
		glutIdleFunc(translate13);
	}
}
void spin12()
{
	glutKeyboardUpFunc(mykey13);
	s12();
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate12() {
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[12] += 0.35;
	if (f[12] > 250) {
		for (int i = 0; i < 12; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin12);
	}
	glutPostRedisplay();
}
void mykey12(unsigned char key, int x, int y)
{
	if (key == ' '&c == 12) {
		c++;
		glutIdleFunc(translate12);
	}
}
void spin11()
{
	glutKeyboardUpFunc(mykey12);
	s11();
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate11() {
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[11] += 0.35;
	if (f[11] > 250) {
		for (int i = 0; i < 11; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin11);
	}
	glutPostRedisplay();
}
void mykey11(unsigned char key, int x, int y)
{
	if (key == ' '&c == 11) {
		c++;
		glutIdleFunc(translate11);
	}
}
void spin10()
{
	glutKeyboardUpFunc(mykey11);
	s10();
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate10() {
	s9();
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[10] += 0.35;
	if (f[10] > 250) {
		for (int i = 0; i < 10; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin10);
	}
	glutPostRedisplay();
}
void mykey10(unsigned char key, int x, int y)
{
	if (key == ' '&c == 10) {
		c++;
		glutIdleFunc(translate10);
	}
}
void level0() {

	for (r = 0; r < 10; r++) {
		if (t[r]>-1)
			t[r] -= 0.1;
		if (t[r] < -360) t[r] = 0;
	}
	for (r = 0; r < 10; r++) {
		if (t[r] <1) {
			f[r] -= 0.6;
			if (f[r] < 0) {
				f[r] = 0;
				axis = 1;
			}
		}
	}
	if (f[0] < 1 & f[1] <1 & f[2] <1 & f[3] <1 & f[4] <1 & f[5] <1 & f[6] <1 & f[7] <1 & f[8] <1 & f[9] <1)a5 = 0;
	c = 0;
	glutPostRedisplay();
}
void level1() {

	for (r = 0; r < 10; r++) {
		if (t[r]>1)
			t[r] += 0.1;
		if (t[r] > 360) t[r] = 0;
	}
	for (r = 0; r < 10; r++) {
		if (t[r] < 1) {
			f[r] -= 0.6;
			if (f[r] < 0) {
				f[r] = 0;
				axis = 2;
			}

		}
	}
	if (f[0] < 1 & f[1] <1 & f[2] <1 & f[3] <1 & f[4] <1 & f[5] <1 & f[6] <1 & f[7] <1 & f[8] <1 & f[9] <1)a5 = 0;
	c = 0;
	glutPostRedisplay();
}
void spin9()
{
	if (axis == 0) {
		glutIdleFunc(level0);
	}
	if (axis == 1) {
		glutIdleFunc(level1);
	}
	if (axis = 2) {
		glutKeyboardUpFunc(mykey10);
		s9();
		s8();
		s7();
		s6();
		s5();
		s4();
		s3();
		s2();
		s1();
		s0();
		glutPostRedisplay();
	}


}
void translate9() {
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[9] += 0.35;
	if (f[9] > 250) {
		for (int i = 0; i < 9; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin9);
	}
	glutPostRedisplay();
}
void mykey9(unsigned char key, int x, int y)
{
	if (key == ' '&c == 9) {
		c++;
		glutIdleFunc(translate9);
	}
}
void spin8()
{
	glutKeyboardUpFunc(mykey9);
	s8();
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate8() {
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[8] += 0.35;
	if (f[8] > 250) {
		for (int i = 0; i < 8; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin8);
	}
	glutPostRedisplay();
}
void mykey8(unsigned char key, int x, int y)
{
	if (key == ' '&c == 8) {
		c++;
		glutIdleFunc(translate8);
	}
}
void spin7()
{
	glutKeyboardUpFunc(mykey8);
	s7();
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate7() {
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[7] += 0.35;
	if (f[7] > 250) {
		for (int i = 0; i < 7; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin7);
	}
	glutPostRedisplay();
}
void mykey7(unsigned char key, int x, int y)
{
	if (key == ' '&c == 7) {
		c++;
		glutIdleFunc(translate7);
	}
}
void spin6()
{
	glutKeyboardUpFunc(mykey7);
	s6();
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate6() {
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	f[6] += 0.35;
	if (f[6] > 250) {
		for (int i = 0; i < 6; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin6);
	}
	glutPostRedisplay();
}
void mykey6(unsigned char key, int x, int y)
{
	if (key == ' '&c == 6) {
		c++;
		glutIdleFunc(translate6);
	}
}
void spin5()
{
	glutKeyboardUpFunc(mykey6);
	s5();
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate5() {
	s4();
	s3();
	s2();
	s1();
	s0();
	f[5] += 0.35;
	if (f[5] > 250) {
		for (int i = 0; i < 5; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin5);
	}
	glutPostRedisplay();
}
void mykey5(unsigned char key, int x, int y)
{
	if (key == ' '&c == 5) {
		c++;
		glutIdleFunc(translate5);
	}
}
void spin4()
{
	glutKeyboardUpFunc(mykey5);
	s4();
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate4() {
	s3();
	s2();
	s1();
	s0();
	f[4] += 0.35;
	if (f[4] > 250) {
		for (int i = 0; i < 4; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 4;
			}
		}
		glutIdleFunc(spin4);
	}
	glutPostRedisplay();
}
void mykey4(unsigned char key, int x, int y)
{
	if (key == ' '&c == 4) {
		c++;
		glutIdleFunc(translate4);
	}
}
void spin3()
{
	glutKeyboardUpFunc(mykey4);
	s3();
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate3() {
	s2();
	s1();
	s0();
	f[3] += 0.4;
	if (f[3] > 250) {
		for (int i = 0; i < 3; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 3;
			}
		}
		glutIdleFunc(spin3);
	}
	glutPostRedisplay();
}
void mykey3(unsigned char key, int x, int y)
{
	if (key == ' '&c == 3) {
		c++;
		glutIdleFunc(translate3);
	}
}
void spin2()
{
	glutKeyboardUpFunc(mykey3);
	s2();
	s1();
	s0();
	glutPostRedisplay();
}
void translate2() {
	s1();
	s0();
	f[2] += 0.4;
	if (f[2] > 250) {
		for (int i = 0; i < 2; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 2;
			}
		}
		glutIdleFunc(spin2);
	}
	glutPostRedisplay();

}
void mykey2(unsigned char key, int x, int y)
{
	if (key == ' '&c == 2) {
		c++;
		glutIdleFunc(translate2);
	}
}
void spin1()
{
	glutKeyboardUpFunc(mykey2);
	s1();
	s0();
	glutPostRedisplay();
}
void translate1() {
	s0();
	f[1] += 0.4;
	if (f[1] > 250) {
		for (int i = 0; i < 1; i++) {
			if (t[i] > 347 || t[i] < 13) {
				cout << 1;
			}
		}
		glutIdleFunc(spin1);
	}
	glutPostRedisplay();
}
void mykey1(unsigned char key, int x, int y)
{
	if (key == ' '&c == 1) {
		c++;
		glutIdleFunc(translate1);
	}
}

void spin()
{
	glutKeyboardUpFunc(mykey1);
	s0();
	glutPostRedisplay();
}
//<<<<<<<<<<<<<<<<<<<<<<<< جابه جایی >>>>>>>>>>>>>>>>>
void translate() {
	f[0] += 0.4;
	if (f[0] > 250) { glutIdleFunc(spin); }
	glutPostRedisplay();
}
void translatecol() {
	t[19] += 0.07;
	base += 0.1;
	baseY -= 0.1;
	for (int i = 0; i < 18; i++) {
		t[i] += 0.08;
		if (t[i] > 360)t[i] = 360;
	}

	if (t[19] > 360) {
		t[19] = 360;
		l = 2;
	}
	if (base > 250) {
		base = 250;
	}
	if (baseY < -400) {
		baseY = -400;

	}
	glutPostRedisplay();
}
//<<<<<<<<<<<<<<<<<<<<<<<< ارتباط با کیبورد >>>>>>>>>>>>>>>>>
void mykey(unsigned char key, int x, int y)
{
	if (key == ' '&c == 0 & l == 2 & a5 == 0) {
		c++;
		a5++;
		glutIdleFunc(translate);
	}
	if (key == 's'&axis == 0) {
		PlaySound(TEXT("E:\\project.wav"), NULL, SND_ASYNC);
		glutIdleFunc(translatecol);
	}
}

//<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>

int main() {
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // set display mode
	glutInitWindowSize(width, height); // set window size
	glutInitWindowPosition(300, 0); // set window position on screen
	glutCreateWindow("dayere"); // open the screen window
	glutKeyboardFunc(mykey);
	glutDisplayFunc(myDisplay); // register redraw function
	myInit();
	glutMainLoop(); // go into a perpetual loop
}