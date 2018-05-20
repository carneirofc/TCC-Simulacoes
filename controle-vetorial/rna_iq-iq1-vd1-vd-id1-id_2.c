/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 20:11:08 BRT 2018

	Topologia: [6,7,7,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x); 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.015
	Eta Attual: 0.013473072492224389
	Momentum:0.7
	Epoca maxima de treinamento: 1000000
	Epoca atual: 2349
	Erro alvo durante treinamento: 1.0E-4


	O nome das variaveis possui informacoes a respeito de sua localizacao na ANN. ex:
	w010 -> o primeiro 0 indica a camada que o neuronio possuidor desse peso esta,
	o segundo numero,'1', indica o número do neurônio da camada (o ultimo neuronio e sempre um bias)
	o ultimo numero ,'0', indica qual a posicao do neuronio alvo localizado na camada seguinte. 
	As variáveis de entrada estão na mesma ordem em que são encontradas no arquivo de treinamento.

       Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
   
       1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
       2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer
           in the documentation and/or other materials provided with the distribution.
       3. Neither the name of the Institute nor the names of its contributors may be used to endorse or promote products derived from
           this software without specific prior written permission.
 

 THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, 
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 
 OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
 STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
   Colunas de ENTRADA referente aos dados de treino :
   8   9   10   12   13   14
   Colunas de SAIDA referente aos dados de treino :
   16
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[7][7]={{0.017866389361649603,-1.2711198645545498,1.1581304127438532,-0.4464958449870219,1.467828575779726,0.8684087734041577,1.5433065553469147},// Neuronio 0
{0.8832921505492323,1.878601816435701,-0.1259835052200153,0.2663239144483673,1.1373807784721461,1.2959467039845598,0.39137275681681466},// Neuronio 1
{-0.10125155417020792,-1.1603367156196422,0.44463706718578694,0.4875498232771898,0.15650974298627437,1.143880323048702,-0.9892250509354802},// Neuronio 2
{-0.7132359381094729,-0.6657411236507697,1.4982847288046757,0.3468429189449945,0.3698563238687071,-0.9159955278416267,-1.1335716691033293},// Neuronio 3
{-0.0803171046002494,2.0592482594660355,0.5485903605362611,1.032671029098291,0.46894614699288856,0.15392187231718682,1.0782394405297193},// Neuronio 4
{-1.2150781500867036,0.14463491713544854,-0.37598215108346694,-0.7782779516881824,1.4523163981697869,0.03536225767123067,-1.0744210838354862},// Neuronio 5
{-0.07727703885220362,0.7604720596922883,-1.3036529766149938,-1.1558713774165423,-0.01689775179571508,-0.8789531693472248,-0.12733156117455455}// Bias
};
// -------- Layer 1 --------
double w1[8][7]={{1.0655993100205539,0.41222987644296405,1.0568531076114434,0.3120079782691371,-0.8923259995310424,0.3421832552218216,1.1999472300174194},// Neuronio 0
{-0.10477729968319915,-1.562698597081843,-0.2596089900736246,-1.0123487718734403,0.7209729449531519,-0.4967263505527138,0.29988337167630263},// Neuronio 1
{1.6880055075573561,0.46472220719774926,-0.7597650671231705,0.4135073084970308,-0.38441147713786983,0.43726397742340256,1.466807042709372},// Neuronio 2
{0.872043813105281,-0.7478623013460567,-1.1164629819433067,-0.23684166615574984,1.716473136953811,-0.4154802811169515,-2.0066883372126627},// Neuronio 3
{-0.977758435752955,-0.2684173651989963,0.6529439356371707,0.2526859672891133,1.4662298514903833,-0.9266001802577108,-0.7993804493869884},// Neuronio 4
{-1.4103208130430995,-1.4365880973532337,-0.42209761081788366,-0.8456610248807043,0.5649774487391375,0.6695997699649499,0.7257459327465609},// Neuronio 5
{-0.24610581772008192,0.6349577516322251,-1.5281796788305906,-1.28536850931722,-1.589658378856782,0.8505447722394617,-1.205288271455932},// Neuronio 6
{-0.041423613246229854,-2.283758078280975,1.6020512522795822,-0.1316420545047522,0.705782966773723,-1.4039084885325972,-1.325190516183477}// Bias
};
// -------- Layer 2 --------
double w2[8][1]={{-0.43006050062026513},// Neuronio 0
{0.41814249101943607},// Neuronio 1
{1.6010356433046493},// Neuronio 2
{-0.5652750421198457},// Neuronio 3
{-0.019530753696496112},// Neuronio 4
{-0.18712707256395023},// Neuronio 5
{0.7351601868572769},// Neuronio 6
{-0.8976062119422336}// Bias
};double inMax[] = { 7.4651061670507, 7.6055579941048, 0.0, 0.0, 0.0, 0.0};
double inMin[] = { -7.7645915022835, -7.7324917228236, -387.3646892555, -388.43871669605, -9.4748957190674, -9.4712738253491};
double outMaxD[] = { 181.98945215128};
double outMinD[] = { -39.871830118983};
// --------------------------------------------------------------------------------------
void normaliza(double *in, int i, double *outN){
	double a = (NORM_MAX - NORM_MIN) / (inMax[i] - inMin[i]);
	double b = ((-(NORM_MAX)) * inMin[i] + (NORM_MIN) * inMax[i]) / (inMax[i] - inMin[i]);
	*outN = (a * *in + b);
}
void desnormaliza(double x, int i, double *resNorm){
	double a = (NORM_MAX - (NORM_MIN)) / (outMaxD[i] - outMinD[i]);
	double b = (-(NORM_MAX) * outMinD[i] + (NORM_MIN) * outMaxD[i]) / (outMaxD[i] - outMinD[i]);
	*resNorm = (x - b) / a;
}
void actvFunc(double x, double *outVal){*outVal = tanh(x);}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *inExt4,double *inExt5,double *out0){
      double   in1[]={0,0,0,0,0,0,0};
      double   in2[]={0,0,0,0,0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0, in3N = 0, in4N = 0, in5N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
normaliza(inExt3,3,&in3N);
normaliza(inExt4,4,&in4N);
normaliza(inExt5,5,&in5N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] +  in3N * w0[3][0] +  in4N * w0[4][0] +  in5N * w0[5][0] + -1.0*w0[6][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] +  in3N * w0[3][1] +  in4N * w0[4][1] +  in5N * w0[5][1] + -1.0*w0[6][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] +  in3N * w0[3][2] +  in4N * w0[4][2] +  in5N * w0[5][2] + -1.0*w0[6][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] +  in3N * w0[3][3] +  in4N * w0[4][3] +  in5N * w0[5][3] + -1.0*w0[6][3]), &in1[3]);
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] +  in3N * w0[3][4] +  in4N * w0[4][4] +  in5N * w0[5][4] + -1.0*w0[6][4]), &in1[4]);
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] +  in3N * w0[3][5] +  in4N * w0[4][5] +  in5N * w0[5][5] + -1.0*w0[6][5]), &in1[5]);
actvFunc(( in0N * w0[0][6] +  in1N * w0[1][6] +  in2N * w0[2][6] +  in3N * w0[3][6] +  in4N * w0[4][6] +  in5N * w0[5][6] + -1.0*w0[6][6]), &in1[6]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] +  in1[6] *w1[6][0] + -1.0*w1[7][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] +  in1[5] *w1[5][1] +  in1[6] *w1[6][1] + -1.0*w1[7][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] +  in1[5] *w1[5][2] +  in1[6] *w1[6][2] + -1.0*w1[7][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] +  in1[4] *w1[4][3] +  in1[5] *w1[5][3] +  in1[6] *w1[6][3] + -1.0*w1[7][3]), &in2[3]);
actvFunc(( in1[0] *w1[0][4] +  in1[1] *w1[1][4] +  in1[2] *w1[2][4] +  in1[3] *w1[3][4] +  in1[4] *w1[4][4] +  in1[5] *w1[5][4] +  in1[6] *w1[6][4] + -1.0*w1[7][4]), &in2[4]);
actvFunc(( in1[0] *w1[0][5] +  in1[1] *w1[1][5] +  in1[2] *w1[2][5] +  in1[3] *w1[3][5] +  in1[4] *w1[4][5] +  in1[5] *w1[5][5] +  in1[6] *w1[6][5] + -1.0*w1[7][5]), &in2[5]);
actvFunc(( in1[0] *w1[0][6] +  in1[1] *w1[1][6] +  in1[2] *w1[2][6] +  in1[3] *w1[3][6] +  in1[4] *w1[4][6] +  in1[5] *w1[5][6] +  in1[6] *w1[6][6] + -1.0*w1[7][6]), &in2[6]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] +  in2[4] *w2[4][0] +  in2[5] *w2[5][0] +  in2[6] *w2[6][0] + -1.0*w2[7][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}