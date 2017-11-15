#include <windows.h>    // Only for WINDOWS
#include <GL/glut.h>    // Header File For The GLUT Library 	UBUNTU / WINDOWS
#define  PI 1415926535898
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
using std::getline;

int xAprova=302;
int xRejeita=302, yRejeita = 70;
int tintaVisivel=0;

#pragma once

class Pessoa
{
public:
	Pessoa(int i);
	~Pessoa();
	string nome;
	int peso;
	double altura;
	string profissao;
	string dataNascimento;
	string sexo;
	string nacionalidade;

	int duracaoViagem;
	string propositoViagem;
	int numeroPassaporte;
	int validadePassaporte;

private:

};

//construtor
Pessoa::Pessoa(int i)
{
	if (i == 0) {
		sexo = "Feminino";
		nome = "Alexa Mellegard";
		peso = 50;
		altura = 1.53;
		profissao = "Fazendeira";
		nacionalidade = "Obristan";
		dataNascimento = "22 / 07 / 1938";
		duracaoViagem = 30;
		propositoViagem = "Turismo";
		numeroPassaporte = 747729398;
		validadePassaporte = 1984;
	}
	else if (i == 1) {
		sexo = "Feminino";
		nome = "Anna Panton";
		peso = 59;
		altura = 1.62;
		profissao = "Fazendeira";
		nacionalidade = "Kolechia";
		dataNascimento = "03 / 04 / 1939";
		duracaoViagem = 181;
		propositoViagem = "Negocios";
		numeroPassaporte = 55509500;
		validadePassaporte = 1984;
	}
	else if (i == 2) {
		sexo = "Feminino";
		nome = "Arnia Rosovna";
		peso = 67;
		altura = 1.67;
		profissao = "Dentista";
		nacionalidade = "Antegria";
		dataNascimento = "05 / 04 / 1939";
		duracaoViagem = 62;
		propositoViagem = "Turismo";
		numeroPassaporte = 642509937;
		validadePassaporte = 1982;
	}
	else if (i == 3) {
		sexo = "Feminino";
		nome = "Caroline Barnard";
		peso = 79;
		altura = 1.80;
		profissao = "Desempregado";
		nacionalidade = "Obristan";
		dataNascimento = "07 / 02 / 1940";
		duracaoViagem = 25;
		propositoViagem = "Turismo";
		numeroPassaporte = 438305888;
		validadePassaporte = 1981;
	}
	else if (i == 4) {
		sexo = "Feminino";
		nome = "Cinthia Taksami";
		peso = 71;
		altura = 1.75;
		profissao = "Motorista";
		nacionalidade = "Antegria";
		dataNascimento = "04 / 12 / 1940";
		duracaoViagem = 69;
		propositoViagem = "Indefinido";
		numeroPassaporte = 139639579;
		validadePassaporte = 1986;
	}
	else if (i == 5) {
		sexo = "Feminino";
		nome = "Demitra Haralson";
		peso = 95;
		altura = 1.93;
		profissao = "Policial";
		nacionalidade = "Obristan";
		dataNascimento = "31 / 01 / 1941";
		duracaoViagem = 168;
		propositoViagem = "Turismo";
		numeroPassaporte = 972380848;
		validadePassaporte = 1984;
	}
	else if (i == 6) {
		sexo = "Feminino";
		nome = "Dorothy Szymanska";
		peso = 72;
		profissao = "Cantora";
		nacionalidade = "Kolechia";
		dataNascimento = "11 / 06 / 1942";
		duracaoViagem = 95;
		propositoViagem = "Negocios";
		numeroPassaporte = 177388708;
		validadePassaporte = 1982;
	}
	else if (i == 7) {
		sexo = "Feminino";
		nome = "Ellen Hallovska";
		peso = 64;
		altura = 1.55;
		profissao = "Atriz";
		nacionalidade = "Kolechia";
		dataNascimento = "18 / 03 / 1945";
		duracaoViagem = 68;
		propositoViagem = "Estudos";
		numeroPassaporte = 554024730;
		validadePassaporte = 1986;
	}
	else if (i == 8) {
		sexo = "Feminino";
		nome = "Gianna Antonucci";
		peso = 99;
		altura = 1.90;
		profissao = "Estudante";
		nacionalidade = "Obristan";
		dataNascimento = "15 / 01 / 1946";
		duracaoViagem = 141;
		propositoViagem = "Indefinido";
		numeroPassaporte = 736478355;
		validadePassaporte = 1981;
	}
	else if (i == 9) {
		sexo = "Feminino";
		nome = "Hanna Skuis";
		peso = 99;
		altura = 1.90;
		profissao = "Reporter";
		nacionalidade = "Kolechia";
		dataNascimento = "24 / 05 / 1946";
		duracaoViagem = 103;
		propositoViagem = "Turismo";
		numeroPassaporte = 964001514;
		validadePassaporte = 1985;
	}
	else if (i == 10) {
		sexo = "Feminino";
		nome = "Ingrid Chesnokova";
		peso = 75;
		altura = 1.78;
		profissao = "Professora";
		nacionalidade = "Antegria";
		dataNascimento = "20 / 08 / 1947";
		duracaoViagem = 127;
		propositoViagem = "Turismo";
		numeroPassaporte = 894776489;
		validadePassaporte = 1981;
	}
	else if (i == 11) {

		sexo = "Feminino";
		nome = "Jani Sajarvi";
		peso = 75;
		altura = 1.64;
		profissao = "Dentista";
		nacionalidade = "Antegria";
		dataNascimento = "15 / 07 / 1942";
		duracaoViagem = 41;
		propositoViagem = "Turismo";
		numeroPassaporte = 467552957;
		validadePassaporte = 1983;
	}
	else if (i == 12) {
		sexo = "Feminino";
		nome = "Kem Mariovska";
		peso = 68;
		altura = 1.64;
		profissao = "Professora";
		nacionalidade = "Obristan";
		dataNascimento = "07 / 02 / 1948";
		duracaoViagem = 135;
		propositoViagem = "Turismo";
		numeroPassaporte = 885511343;
		validadePassaporte = 1985;
	}
	else if (i == 13) {
		sexo = "Feminino";
		nome = "Lynda Moldavich";
		peso = 72;
		altura = 1.80;
		profissao = "Desempregado";
		nacionalidade = "Antegria";
		dataNascimento = "09 / 06 / 1948";
		duracaoViagem = 28;
		propositoViagem = "Turismo";
		numeroPassaporte = 319294169;
		validadePassaporte = 1983;
	}
	else if (i == 14) {

		sexo = "Feminino";
		nome = "Nikita Westrova";
		peso = 75;
		altura = 1.75;
		profissao = "Professora";
		nacionalidade = "Kolechia";
		dataNascimento = "30 / 10 / 1948";
		duracaoViagem = 4;
		propositoViagem = "Negocios";
		numeroPassaporte = 558348114;
		validadePassaporte = 1985;
	}
	// homens
	else if (i == 15) {
		nacionalidade = "Obristan";
		peso = 84;
		altura = 1.82;
		profissao = "Desempregado";
		sexo = "Masculino";
		nome = "Aleksander Zelazo";
		dataNascimento = "12 / 01 / 1949";
		duracaoViagem = 70;
		propositoViagem = "Negocios";
		numeroPassaporte = 976830981;
		validadePassaporte = 1982;
	}
	else if (i == 16) {
		nacionalidade = "Kolechia";
		peso = 72 ;
		altura = 1.74;
		profissao = "Professor";
		sexo = "Masculino";
		nome = "Christopher Dragomer";
		dataNascimento = "01 / 06 / 1950";
		duracaoViagem = 101;
		propositoViagem = "Turismo";
		numeroPassaporte = 283769909;
		validadePassaporte = 1984;
	}
	else if (i == 17) {
		nacionalidade = "Antegria";

		peso = 86;
		altura = 1.75;
		profissao = "Motorista";
		sexo = "Masculino";
		nome = "Dmitriy Sokolov";
		dataNascimento = "22 / 09 / 1950";
		duracaoViagem = 53;
		propositoViagem = "Turismo";
		numeroPassaporte = 910580627;
		validadePassaporte = 1982;
	}
	else if (i == 18) {
		nacionalidade = "Antegria";
		peso = 73;
		altura = 1.65;
		profissao = "Jornalista";
		sexo = "Masculino";
		nome = "Dominik Pavlek";
		dataNascimento = "26 / 01 / 1951";
		duracaoViagem = 65;
		propositoViagem = "Estudos";
		numeroPassaporte = 644841005;
		validadePassaporte = 1983;
	}
	else if (i == 19) {
		nacionalidade = "Kolechia";
		peso = 86 ;
		altura = 1,73;
		profissao = "Policial";
		sexo = "Masculino";
		nome = "Iulian Mocanu";
		dataNascimento = "21 / 10 / 1952";
		duracaoViagem = 165;
		propositoViagem = "Estudos";
		numeroPassaporte = 368026803;
		validadePassaporte = 1986;
	}
	else if (i == 20) {
		nacionalidade = "Obristan";
		peso = 70;
		altura = 1.63 ;
		profissao = "Medico";
		sexo = "Masculino";
		nome = "Ivan Omegosky";
		dataNascimento = "09 / 02 / 1954";
		duracaoViagem = 173;
		propositoViagem = "Indefinido";
		numeroPassaporte = 189875394;
		validadePassaporte = 1983;
	}
	else if (i == 21) {
		nacionalidade = "Kolechia";
		peso = 83;
		altura = 1.74;
		profissao = "Desempregado";
		sexo = "Masculino";
		nome = "Jovan Grbic";
		dataNascimento = "19 / 03 / 1954";
		duracaoViagem = 81;
		propositoViagem = "Estudos";
		numeroPassaporte = 863235508;
		validadePassaporte = 1985;
	}
	else if (i == 22) {
		nacionalidade = "Antegria";
		peso = 88;
		altura = 1.73;
		profissao = "Ferreiro";
		dataNascimento = "17 / 03 / 1957";
		nome = "Karl Bergstrom";
		duracaoViagem = 140;
		propositoViagem = "Estudos";
		numeroPassaporte = 653765202;
		validadePassaporte = 1981;
	}
	else if (i == 23) {
		nacionalidade = "Kolechia";
		peso = 86;
		altura = 1.69;
		profissao = "Estudante";
		sexo = "Masculino";
		nome = "Nikolay Osokin";
		dataNascimento = "05 / 03 / 1960";
		duracaoViagem = 81;
		propositoViagem = "Turismo";
		numeroPassaporte = 860423688;
		validadePassaporte = 1984;
	}
	else if (i == 24) {
		nacionalidade = "Obristan";
		peso = 72;
		altura = 1.71;
		profissao = "Estudante";
		sexo = "Masculino";
		nome = "Patrik Carsonov";
		dataNascimento = "29 / 01 / 1961";
		duracaoViagem = 38;
		propositoViagem = "Estudos";
		numeroPassaporte =
		validadePassaporte = 1982;
	}
	else if (i == 25) {
		nacionalidade = "Kolechia";
		peso = 85 ;
		altura = 1.74;
		profissao = "Militar";
		sexo = "Masculino";
		nome = "Pyetr Kerrinski";
		dataNascimento = "03 / 01 / 1962";
		duracaoViagem = 26;
		propositoViagem = "Indefinido";
		numeroPassaporte = 26131540;
		validadePassaporte = 1983;
	}
	else if (i == 26) {
		nacionalidade = "Antegria";
		peso = 77;
		altura = 1.80;
		profissao = "Ator";
		sexo = "Masculino";
		nome = "Sven Schroder";
		duracaoViagem = 58;
		propositoViagem = "Negocios";
		numeroPassaporte = 722658865;
		validadePassaporte = 1984;
		dataNascimento = "14/01/1938";
	}
	else if (i == 27) {
		nacionalidade = "Obristan";
		peso = 98;
		altura = 1.92;
		profissao = "Professor";
		sexo = "Masculino";
		nome = "Tomasz Parkov";
		dataNascimento = "19 / 03 / 1939";
		duracaoViagem = 37;
		propositoViagem = "Indefinido";
		numeroPassaporte = 299789115;
		validadePassaporte = 1983;

	}
	else if (i == 28) {
		nacionalidade = "Antegria";
		peso = 76 ;
		altura = 1.73;
		profissao = "Musico";
		sexo = "Masculino";
		nome = "Yohann Lacaze";
		dataNascimento = "21 / 11 / 1942";
		duracaoViagem = 56;
		propositoViagem = "Negocios";
		numeroPassaporte = 347301911;
		validadePassaporte = 1982;
	}
	else if (i == 29) {
		nacionalidade = "Obristan";
		peso = 88;
		altura = 1.74;
		profissao = "Comerciante";
		sexo = "Masculino";
		nome = "Yuri Stanislav";
		dataNascimento = "19 / 08 / 1943";
		duracaoViagem = 26;
		propositoViagem = "Turismo";
		numeroPassaporte = 423910405;
		validadePassaporte = 1983;
	}
}

//destruidor
Pessoa::~Pessoa()
{

}

void Backgound(){
	glPushMatrix();
	glColor3ub(66,42,29);
	glBegin(GL_QUADS);
	  glVertex2i(0,0);
	  glVertex2i(0, 10);
	  glVertex2i(20, 10);
	  glVertex2i(20, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(133,138,108);
	glBegin(GL_QUADS);
	  glVertex2i(0,10);
	  glVertex2i(0, 15);
	  glVertex2i(20, 15);
	  glVertex2i(20, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(70,55,55);
	glBegin(GL_QUADS);
	  glVertex2i(0,15);
	  glVertex2i(0, 30);
	  glVertex2i(20, 30);
	  glVertex2i(20, 15);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(141,141,141);
	glBegin(GL_QUADS);
	  glVertex2i(20,0);
	  glVertex2i(20, 5);
	  glVertex2i(60, 5);
	  glVertex2i(60, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(110,80,42);
	glBegin(GL_QUADS);
	  glVertex2i(20,5);
	  glVertex2i(20, 30);
	  glVertex2i(60, 30);
	  glVertex2i(60, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,90,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,95,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,100,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,105,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,110,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,115,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,120,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,125,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,130,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,135,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,140,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,145,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,150,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,155,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,160,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,165,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,170,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,175,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(52,43,43);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(15,180,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(118, 16);
	  		glVertex2i(118, 15);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(104,106,85);
		glTranslatef(0,-1,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,14);
	  		glVertex2i(0, 16);
	  		glVertex2i(20, 16);
	  		glVertex2i(20, 14);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(5,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(8,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(11,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(14,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(17,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(111,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(114,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(117,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(120,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(133,133,107);
		glScalef(0.15f,0.15f,1.0f);
		glTranslatef(123,91,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0, 0);
	  		glVertex2i(0, 9);
	  		glVertex2i(1, 9);
	  		glVertex2i(1, 0);
			glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor3ub(10,10,10);
		glScalef(0.16f,0.16f,1.0f);
		glTranslatef(30,72,0);
		glBegin(GL_QUADS);
	  		glVertex2i(0,15);
	  		glVertex2i(0, 16);
	  		glVertex2i(60, 16);
	  		glVertex2i(60, 15);
			glEnd();
	glPopMatrix();

}

void DesenhaCirculo(double _x, double _y, double _raio){
    int  pontos =40;
    double angulo, raio = _raio, x =_x, y=_y;
    glLineWidth(2.5f);			// Altera a espessura da linha para 2.5
    glBegin(GL_POLYGON);
    for (int i = 0; i <= pontos; i++)
        {
        angulo =i;
        // int angulo=((2*PI)*i)/pontos;
        glVertex2f ( (x + (raio+2) * cos(angulo)), (y + (raio+2) * sin(angulo)));
        }
	glEnd();
}

void DesenhaCirculo2(){
	float angulo = 0, pontos = 1000, raio=1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(100, 100, 100);	// RGB: 0 (preto) ate 255 (branco)
	for (int i = 0; i < pontos; i++){
		angulo = (2*PI)*i/pontos;
		glVertex2f(((cos(angulo))*raio)+17, ((sin(angulo))*raio)+10);
	}
	glEnd();
}

void DesenhaCirculo3(){
	float angulo = (7*PI)/4, pontos = 1000, raio=3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(170, 170, 170);	// RGB: 0 (preto) ate 255 (branco)
	for (int i = 0; i < pontos; i++){
		glVertex2f(((cos(angulo))*raio)+8, ((sin(angulo))*raio)+17);
		angulo = (2*PI)*i/pontos + 0;
		if(angulo > (3*PI)/4) break;
	}
	glEnd();
}

void DesenhaCirculo4(){
	float angulo = 0, pontos = 1000, raio=2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 225, 0);	// RGB: 0 (preto) ate 255 (branco)
	for (int i = 0; i < pontos; i++){
		angulo = (2*PI)*i/pontos;
		glVertex2f(((cos(angulo))*raio)+5, ((sin(angulo))*raio)+14);
	}
	glEnd();
}

void BaseCarimbo(){

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(115,123,178);
	  glVertex2i(5,5);
	  glVertex2i(7, 58);
	  glVertex2i(54, 58);
	  glVertex2i(56, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(120,120,120);
	  glVertex2i(5,5);
	  glColor3ub(110,111,111);
	  glVertex2i(56, 5);
	  glVertex2i(56, 1);
	  glVertex2i(5, 1);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(5,5);
	  glVertex2i(7, 5);
	  glVertex2i(7, 10);
	  glVertex2i(5, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(56,5);
	  glVertex2i(54, 5);
	  glVertex2i(54, 10);
	  glVertex2i(56, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(5,5);
	  glVertex2i(5, 7);
	  glVertex2i(56, 7);
	  glVertex2i(56, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(54,10);
	  glVertex2i(56, 10);
	  glVertex2i(56, 58);
	  glVertex2i(54, 58);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(5,10);
	  glVertex2i(7, 58);
	  glVertex2i(9, 58);
	  glVertex2i(7, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(8,58);
	  glVertex2i(54, 58);
	  glVertex2i(54, 56);
	  glVertex2i(8, 56);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,-23,0);
	glBegin(GL_QUADS);
	  glColor3ub(68,68,68);
	  glVertex2i(8,58);
	  glVertex2i(54, 58);
	  glVertex2i(54, 56);
	  glVertex2i(8, 56);
	glEnd();
	glPopMatrix();
}

void DesenhaTextoStroke(void *font, char *string){
	int i=0;
	// Exibe caractere a caractere
	while(string[i] != '\0'){
		glutStrokeCharacter(font, string[i]);
		i++;
	}
}

void tintaAceita(){
    glPushMatrix();
		glColor3ub(0,137,0);
		glTranslatef(226,49,0);
		glScalef(0.06, 0.06, 0.1); // diminui o tamanho do fonte
		glLineWidth(2); // define a espessura da linha
		DesenhaTextoStroke(GLUT_STROKE_ROMAN, "Aprovado");
	glPopMatrix();
}

void tintaRejeita(){
    glPushMatrix();
		glColor3ub(255,48,48);
		glTranslatef(226,49,0);
		glScalef(0.05, 0.06, 0.1); // diminui o tamanho do fonte
		glLineWidth(2); // define a espessura da linha
		DesenhaTextoStroke(GLUT_STROKE_ROMAN, "Reprovado");
	glPopMatrix();
}

void CarimboAceita(){
	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(104,181,111);
	  glVertex2i(5,5);
	  glColor3ub(40,100,69);
	  glVertex2i(7, 14);
	  glVertex2i(38, 14);
	  glVertex2i(40, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(12,81,11);
	glBegin(GL_QUADS);
	  glVertex2i(7,14);
	  glVertex2i(7, 22);
	  glVertex2i(38, 22);
	  glVertex2i(38, 14);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(12,100,11);
	glBegin(GL_QUADS);
	  glVertex2i(8,15);
	  glVertex2i(8, 21);
	  glVertex2i(37, 21);
	  glVertex2i(37, 15);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(15,63,36);
	glBegin(GL_QUADS);
	  glVertex2i(5, 5);
	  glVertex2i(5, 9);
	  glVertex2i(7, 22);
	  glVertex2i(7, 14);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(15,63,36);
	glBegin(GL_QUADS);
	  glVertex2i(40, 5);
	  glVertex2i(38, 14);
	  glVertex2i(38, 22);
	  glVertex2i(40, 9);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(45,68,62);
	glBegin(GL_QUADS);
	  glVertex2i(18, 20);
	  glVertex2i(18, 28);
	  glVertex2i(27, 28);
	  glVertex2i(27, 20);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(45,68,62);
	glTranslatef(22.5,20.0,0);
	glScalef(2.3,2.3,1);
		DesenhaCirculo(0,0,0);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(32,79,53);
	glTranslatef(22.5,27.0,0);
	glScalef(2.8,2.8,1);
		DesenhaCirculo(0,0,0);
	glPopMatrix();

	glPushMatrix();
		glColor3ub(0,0,0);
		glTranslatef(10,7,0);
		glScalef(0.06, 0.06, 0.1); // diminui o tamanho do fonte
		glLineWidth(2); // define a espessura da linha
		DesenhaTextoStroke(GLUT_STROKE_ROMAN, "Aprova");
	glPopMatrix();
}

void CarimboNega(){
	glPushMatrix();
	glBegin(GL_QUADS);
	  glColor3ub(144,51,51);
	  glVertex2i(5,5);
	  glColor3ub(185,81,81);
	  glVertex2i(7, 14);
	  glVertex2i(38, 14);
	  glVertex2i(40, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(144,51,51);
	glBegin(GL_QUADS);
	  glVertex2i(7,14);
	  glVertex2i(7, 22);
	  glVertex2i(38, 22);
	  glVertex2i(38, 14);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(169,37,37);
	glBegin(GL_QUADS);
	  glVertex2i(8,15);
	  glVertex2i(8, 21);
	  glVertex2i(37, 21);
	  glVertex2i(37, 15);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(105,34,34);
	glBegin(GL_QUADS);
	  glVertex2i(5, 5);
	  glVertex2i(5, 9);
	  glVertex2i(7, 22);
	  glVertex2i(7, 14);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(105,34,34);
	glBegin(GL_QUADS);
	  glVertex2i(40, 5);
	  glVertex2i(38, 14);
	  glVertex2i(38, 22);
	  glVertex2i(40, 9);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(84,34,34);
	glBegin(GL_QUADS);
	  glVertex2i(18, 20);
	  glVertex2i(18, 28);
	  glVertex2i(27, 28);
	  glVertex2i(27, 20);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(84,34,34);
	glTranslatef(22.5,20.0,0);
	glScalef(2.3,2.3,1);
		DesenhaCirculo(0,0,0);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(125,0,0);
	glTranslatef(22.5,27.0,0);
	glScalef(2.8,2.8,1);
		DesenhaCirculo(0,0,0);
	glPopMatrix();

	glPushMatrix();
		glColor3ub(0,0,0);
		glTranslatef(9,7,0);
		glScalef(0.06, 0.06, 0.1); // diminui o tamanho do fonte
		glLineWidth(2); // define a espessura da linha
		DesenhaTextoStroke(GLUT_STROKE_ROMAN, "Reprova");
	glPopMatrix();
}

void Luminaria(){
	glPushMatrix();
	glLineWidth(2.5f);			// Altera a espessura da linha para 2.5
	glColor3ub(140, 140, 140);	// RGB: 0 (preto) ate 255 (branco)
	glTranslatef(0,1,0);
	glBegin(GL_QUADS);  //Base
	  glVertex2i(6, 0);
	  glVertex2i(7, 2);
	  glVertex2i(13,2);
	  glVertex2i(14, 0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glLineWidth(2.5f);			// Altera a espessura da linha para 2.5
	glColor3ub(155, 155, 155);	// RGB: 0 (preto) ate 255 (branco)
	glBegin(GL_QUADS);  //aste 1
	  glVertex2i(9, 3);
	  glVertex2i(11, 3);
	  glVertex2i(17, 9);
	  glVertex2i(16, 10);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glLineWidth(2.5f);			// Altera a espessura da linha para 2.5
	glColor3ub(155, 155, 155);	// RGB: 0 (preto) ate 255 (branco)
	glBegin(GL_QUADS);  //aste 2
	  glVertex2i(16, 10);
	  glVertex2i(17, 11);
	  glVertex2i(10, 18);
	  glVertex2i(10, 16);
	glEnd();
	glPopMatrix();

	//Circulo 2
	glPushMatrix();
		DesenhaCirculo2();
	glPopMatrix();

	//Circulo 3
	glPushMatrix();
		DesenhaCirculo3();
	glPopMatrix();

	glPushMatrix();
	glLineWidth(2.5f);			// Altera a espessura da linha para 2.5
	glColor3ub(85, 85, 85);	// RGB: 0 (preto) ate 255 (branco)
	glBegin(GL_POLYGON);
	  glVertex2i(5, 18);
	  glVertex2i(9, 14);
	  glVertex2i(10, 14);
	  glVertex2i(10, 15);
	  glVertex2i(6, 19);
	  glVertex2i(5, 19);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glLineWidth(2.5f);
	glColor3ub(92, 92, 80);
	glBegin(GL_POLYGON);
	  glVertex2i(2, 17);
	  glVertex2i(3, 14);
	  glVertex2i(5, 12);
	  glVertex2i(8, 11);
	  glVertex2i(6, 14);
	  glVertex2i(5, 15);
	glEnd();
	glPopMatrix();

	//Circulo 4
	glPushMatrix();
		DesenhaCirculo4();
	glPopMatrix();

	glPushMatrix();
	glLineWidth(2.5f);
	glColor3ub(170, 170, 170);
	glBegin(GL_TRIANGLE_STRIP);
	  glVertex2i(8, 11);
	  glVertex2i(9, 14);
	  glVertex2i(6, 14);
	  glVertex2i(7, 16);
	  glVertex2i(5, 15);
	  glVertex2i(5, 18);
	  glVertex2i(2, 17);
	glEnd();
	glPopMatrix();
}

void tecla(){

    glPushMatrix();
	glBegin(GL_POLYGON); //DESENHA CORPO DA TECLA
	  glColor3ub(150,150,150);
	  glVertex2i(36, 129);
	  glVertex2i(38, 128);
	  glVertex2i(39, 127);
	  glVertex2i(40, 125);
	  glVertex2i(40, 100);
	  glVertex2i(39, 98);
	  glVertex2i(38, 97);
	  glVertex2i(36, 96);
	  glVertex2i(14, 96);
	  glVertex2i(12, 97);
	  glVertex2i(11, 98);
	  glVertex2i(10, 100);
	  glVertex2i(10, 125);
	  glVertex2i(11, 127);
	  glVertex2i(12, 128);
	  glVertex2i(14, 129);
    glEnd();
	glPopMatrix();
}

void desenhaTelefone(){

	glPushMatrix(); // BASE TELEFONE
	glBegin(GL_POLYGON);
	  glColor3ub(100,100,100);
	  glVertex2i(1, 5);
	  glVertex2i(2, 3);
	  glVertex2i(3, 2);
	  glVertex2i(5, 1);
	  glVertex2i(100, 1);
	  glVertex2i(102, 2);
	  glVertex2i(103, 3);
	  glVertex2i(104, 5);
	  glVertex2i(104, 130);
	  glVertex2i(103, 132);
	  glVertex2i(102, 133);
	  glVertex2i(100, 134);
	  glVertex2i(45, 134);
	  glVertex2i(43, 133);
	  glVertex2i(42, 132);
	  glVertex2i(41, 130);
	  glVertex2i(9, 130);
	  glVertex2i(7, 131);
	  glVertex2i(6, 132);
	  glVertex2i(5, 134);
	  glVertex2i(3, 133);
	  glVertex2i(2, 132);
	  glVertex2i(1, 130);
    glEnd();
	glPopMatrix();

	glPushMatrix(); // ESPAÇO GANCHO
	glBegin(GL_POLYGON);
	  glColor3ub(110,110,110);
	  glVertex2i(41, 130);
	  glVertex2i(41, 20);
	  glVertex2i(40, 18);
	  glVertex2i(39, 17);
	  glVertex2i(37, 16);
	  glVertex2i(13, 16);
	  glVertex2i(11, 17);
	  glVertex2i(10, 18);
	  glVertex2i(9, 20);
	  glVertex2i(9, 130);
    glEnd();
	glPopMatrix();

	glPushMatrix(); // QUADRADO SUPERIOR GANCHO
	glBegin(GL_POLYGON);
	  glColor3ub(150,150,150);
	  glVertex2i(36, 129);
	  glVertex2i(38, 128);
	  glVertex2i(39, 127);
	  glVertex2i(40, 125);
	  glVertex2i(40, 100);
	  glVertex2i(39, 98);
	  glVertex2i(38, 97);
	  glVertex2i(36, 96);
	  glVertex2i(14, 96);
	  glVertex2i(12, 97);
	  glVertex2i(11, 98);
	  glVertex2i(10, 100);
	  glVertex2i(10, 125);
	  glVertex2i(11, 127);
	  glVertex2i(12, 128);
	  glVertex2i(14, 129);
    glEnd();
	glPopMatrix();

	glPushMatrix(); // QUADRADO INFERIOR GANCHO
	glTranslatef(0,-79,0);
	glBegin(GL_POLYGON);
	  glColor3ub(150,150,150);
	  glVertex2i(36, 129);
	  glVertex2i(38, 128);
	  glVertex2i(39, 127);
	  glVertex2i(40, 125);
	  glVertex2i(40, 100);
	  glVertex2i(39, 98);
	  glVertex2i(38, 97);
	  glVertex2i(36, 96);
	  glVertex2i(14, 96);
	  glVertex2i(12, 97);
	  glVertex2i(11, 98);
	  glVertex2i(10, 100);
	  glVertex2i(10, 125);
	  glVertex2i(11, 127);
	  glVertex2i(12, 128);
	  glVertex2i(14, 129);
    glEnd();
	glPopMatrix();

	glPushMatrix(); // RETANGULO GANCHO
	glBegin(GL_POLYGON);
	  glColor3ub(160,160,160);
	  glVertex2i(20, 110);
	  glVertex2i(30, 110);
	  glVertex2i(30, 38);
	  glVertex2i(20, 38);
    glEnd();
	glPopMatrix();

	glPushMatrix(); // RETANGULO BRANCO ANOTAÇÕES
	glTranslatef(26,38,0);
	glScalef(1.88f,0.7f,1.0f);
	glBegin(GL_POLYGON);
	  glColor3ub(230,230,230);
	  glVertex2i(36, 129);
	  glVertex2i(38, 128);
	  glVertex2i(39, 127);
	  glVertex2i(40, 125);
	  glVertex2i(40, 100);
	  glVertex2i(39, 98);
	  glVertex2i(38, 97);
	  glVertex2i(36, 96);
	  glVertex2i(14, 96);
	  glVertex2i(12, 97);
	  glVertex2i(11, 98);
	  glVertex2i(10, 100);
	  glVertex2i(10, 125);
	  glVertex2i(11, 127);
	  glVertex2i(12, 128);
	  glVertex2i(14, 129);
    glEnd();

	glLineWidth(1); // DESENHA LINHAS ANOTAÇÕES
    glColor3ub(60,60,60);
	glBegin(GL_LINES);
	  glVertex2i(12, 120);
	  glVertex2i(38, 120);
    glEnd();
    glBegin(GL_LINES);
	  glVertex2i(12, 110);
	  glVertex2i(38, 110);
    glEnd();
    glBegin(GL_LINES);
	  glVertex2i(12, 100);
	  glVertex2i(38, 100);
    glEnd();
	glPopMatrix();

    glPushMatrix(); // TECLA REDIAL
	glTranslatef(62,70,0);
	glScalef(0.80f,0.2f,1.0f);
	tecla();
	glTranslatef(12,102,0);
	glColor3ub(60,60,60);
    glScalef(0.065, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "REDIAL");
	glPopMatrix();

	glPushMatrix(); // TECLA FLASH
	glTranslatef(62,60,0);
	glScalef(0.80f,0.2f,1.0f);
	tecla();
	glTranslatef(12,102,0);
	glColor3ub(60,60,60);
    glScalef(0.065, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "FLASH");
	glPopMatrix();

    glPushMatrix(); // TECLA MUTE
	glTranslatef(62,50,0);
	glScalef(0.80f,0.2f,1.0f);
	tecla();
	glTranslatef(12,102,0);
	glColor3ub(60,60,60);
    glScalef(0.065, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "MUTE");
	glPopMatrix();

    glPushMatrix(); // TECLA 1
	glTranslatef(45,22,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(19,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "1");
	glPopMatrix();

	glPushMatrix(); // TECLA 2
	glTranslatef(62,22,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(18,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "2");
	glPopMatrix();

	glPushMatrix(); // TECLA 3
	glTranslatef(79,22,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "3");
	glPopMatrix();

	glPushMatrix(); // TECLA 4
	glTranslatef(45,9,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "4");
	glPopMatrix();

	glPushMatrix(); // TECLA 5
	glTranslatef(62,9,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "5");
	glPopMatrix();

	glPushMatrix(); // TECLA 6
	glTranslatef(79,9,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "6");
	glPopMatrix();

	glPushMatrix(); // TECLA 7
	glTranslatef(45,-4,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "7");
	glPopMatrix();

	glPushMatrix(); // TECLA 8
	glTranslatef(62,-4,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "8");
	glPopMatrix();

	glPushMatrix(); // TECLA 9
	glTranslatef(79,-4,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "9");
	glPopMatrix();

	glPushMatrix(); // TECLA *
	glTranslatef(45,-17,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "*");
	glPopMatrix();

	glPushMatrix(); // TECLA 0
	glTranslatef(62,-17,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "0");
	glPopMatrix();

	glPushMatrix(); // TECLA #
	glTranslatef(79,-17,0);
	glScalef(0.4f,0.3f,1.0f);
	tecla();
	glTranslatef(17,102,0);
	glColor3ub(60,60,60);
    glScalef(0.2, 0.2, 0.1); // diminui o tamanho do fonte
	glLineWidth(1); // define a espessura da linha
	DesenhaTextoStroke(GLUT_STROKE_ROMAN, "#");
	glPopMatrix();
}

void PassaporteFechado(){

 glPushMatrix();
 glColor3ub(4, 29, 59);
 glBegin(GL_QUADS);
   glVertex2i(0, 0);
   glVertex2i(0, 17);
   glVertex2i(12, 17);
   glVertex2i(12, 0);
 glEnd();
 glPopMatrix();

 glPushMatrix();
        glColor3ub(240, 240, 240);
        glBegin(GL_TRIANGLES);
        glVertex2f(0, 17);
        glVertex2f(11, 17.5);
        glVertex2f(12, 17);
 glEnd();
 glPopMatrix();

 glPushMatrix();
 glLineWidth(4);
 glColor3ub(4, 29, 59);
 glBegin(GL_LINES);
        glVertex2f(0, 17);
        glVertex2f(11, 17.5);
 glEnd();
 glPopMatrix();

 glPushMatrix();
  glColor3ub(255,255,255);
  glTranslatef(2,2,0);
  glScalef(0.012, 0.012, 0.1); // diminui o tamanho do fonte
  glLineWidth(2.5); // define a espessura da linha
  DesenhaTextoStroke(GLUT_STROKE_ROMAN, "Passaporte");
 glPopMatrix();

}

void PassaporteAberto(){

 glPushMatrix();
 glColor3ub(4, 29, 59);
 glBegin(GL_POLYGON);

   glVertex2f(0, 0);
   glVertex2f(0, 17);
   glVertex2f(24, 17);
   glVertex2f(24, 0);


 glEnd();
 glPopMatrix();

    //area 1
    glPushMatrix();
 glColor3ub(245, 245, 245);
 glBegin(GL_QUADS);
   glVertex2f(0.5, 0.5);
   glVertex2f(0.5, 16.5);
   glVertex2f(11, 16.5);
   glVertex2f(11, 0.5);
 glEnd();
 glPopMatrix();

    //area 2
 glPushMatrix();
 glColor3ub(245, 245, 245);
 glBegin(GL_QUADS);
   glVertex2f(12, 0.5);
   glVertex2f(12, 16.5);
   glVertex2f(23.5, 16.5);
   glVertex2f(23.5, 0.5);
 glEnd();
 glPopMatrix();

}

// Função callback de redesenho da janela de visualização
void Desenha(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	//Fundo Tela
	glPushMatrix();
	glScalef(5.88f,6.7f,1.0f);
		Backgound();
	glPopMatrix();

	//Carimbo e base
	glPushMatrix();
		glTranslatef(296,40,0);
		glScalef(0.9f,0.9f,1.0f);
		BaseCarimbo();
	glPopMatrix();

    // Passaporte Aberto
	glPushMatrix();
        glTranslatef(180,40,0);
        glScalef(3.5f,3.5f,3.0f);
        PassaporteAberto();
    glPopMatrix();

    //Tinta Carimbo
	switch(tintaVisivel){
    case 1:
        tintaAceita();
        break;

    case 2:
        tintaRejeita();
        break;
	}

	//Carimbo Aceita
	glPushMatrix();
		glTranslatef(xAprova,42,0);
		glScalef(1.0f,1.0f,1.0f);
		CarimboAceita();
	glPopMatrix();

	//Carimbo nega
	glPushMatrix();
		glScalef(1.0f,1.0f,1.0f);
		glTranslatef(xRejeita,yRejeita,0);
		CarimboNega();
	glPopMatrix();


	//Luminária
	glPushMatrix();
		glScalef(4.4f,4.4f,1.0f);
		glTranslatef(60,23,0);
		Luminaria();
	glPopMatrix();

	//Telefone
	glPushMatrix();
		glTranslatef(130,130,0);
		glScalef(0.5f,0.5f,1.0f);
		desenhaTelefone();
	glPopMatrix();

	// Executa os comandos OpenGL
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

// Função callback chamada quando o tamanho da janela é alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	GLsizei largura, altura;

	// Evita a divisao por zero
	if(h == 0) h = 1;

	// Atualiza as variáveis
	largura = w;
	altura = h;

	// Especifica as dimensões da Viewport
	glViewport(0, 0, largura, altura);

	// Inicializa o sistema de coordenadas
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// Estabelece a janela de seleção (esquerda, direita, inferior,
	// superior) mantendo a proporção com a janela de visualização
	if (largura <= altura){
		gluOrtho2D (0.0f, 200.0f, 0.0f*altura/largura, 200.0f*altura/largura);
	} else {
		gluOrtho2D (0.0f*largura/altura, 200.0f*largura/altura, 0.0f, 200.0f);
	}
}

// Função responsável por inicializar parâmetros e variáveis
void Inicializa (void)
{
	// Define a cor de fundo da janela de visualização como braca
	glClearColor(255.0f, 255.0f, 255.0f, 255.0f);
}


void Teclado (unsigned char key, int x, int y) {
	if (key == 'a' || key == 'A'){

        for(int i=302;i>=220;i--){
            xAprova = i;
        }
        xRejeita=302;
        yRejeita=70;
        tintaVisivel=1;

	} else if(key == 'r' || key == 'R'){

		for(int i=302;i>=220;i--){
            xRejeita = i;
        }
        for(int i=70; i>=42;i--){
            yRejeita = i;
        }
        xAprova=302;
        tintaVisivel=2;

    } else if (key == 27) {

        for(int i=220;i<=302;i++){
            xAprova = i;
        }

        for(int i=220;i<=302;i++){
            xRejeita = i;
        }

        for(int i=42; i<=70;i++){
            yRejeita = i;
        }

    }
}

// Programa Principal
int main(int argc, char** argv)
{
	glutInit(&argc, argv);          // Initialize GLUT

	// Define do modo de operação da GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// Especifica a posição inicial da janela GLUT
	glutInitWindowPosition(100, 10);

	// Especifica o tamanho inicial em pixels da janela GLUT
	glutInitWindowSize(1200,680);

	// Cria a janela passando como argumento o título da mesma
	glutCreateWindow("Papers Please");

	// Registra a função callback de redesenho da janela de visualização
	glutDisplayFunc(Desenha);

	// Registra a função callback de redimensionamento da janela de visualização
	glutReshapeFunc(AlteraTamanhoJanela);

		// Registra a função callback para tratamento das teclas ASCII
	glutKeyboardFunc(Teclado);

	// Chama a função responsável por fazer as inicializações
	Inicializa();

	// Inicia o processamento e aguarda interações do usuário
	glutMainLoop();

	return 0;
}
