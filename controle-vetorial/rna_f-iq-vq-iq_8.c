/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 10:55:26 BRT 2018

	Topologia: [4,7,7,1]
	Funcao de ativacao nas camadas escondidas:*outVal =  1.7159 * (tanh(3 / 2 * x))+1.0E-8 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.0025
	Eta Attual: 0.002461553535339949
	Momentum:0.2
	Epoca maxima de treinamento: 10000
	Epoca atual: 3131
	Erro alvo durante treinamento: 1.0E-5


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
   5   8   12   14
   Colunas de SAIDA referente aos dados de treino :
   16
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[5][7]={{0.7388914399777939,1.0869790141787274,0.11847611664017434,-0.5826946246273795,-0.028405353791994013,-0.12542650531688326,-0.9985409796947797},// Neuronio 0
{-0.913124988855386,-0.10308397688152388,1.1713741442108123,0.1644254834769324,0.4484946337786121,2.0819391745603584,0.7229762553867116},// Neuronio 1
{-1.2498251567992984,0.5456433504270977,-0.2920919098159762,-1.2609267026943103,-0.9361140850331404,-0.8026352212979567,-0.588899477653112},// Neuronio 2
{0.394774490134975,1.504725277495747,-0.3438777165791735,0.48859986866073607,-0.544919351712561,-1.4208530058598905,0.24343603686336115},// Neuronio 3
{-0.9893440674485018,-0.5956016721282493,-0.33604058203842924,0.01952138938075628,-2.1476819539123646,-1.7095632930937228,1.5177635206695959}// Bias
};
// -------- Layer 1 --------
double w1[8][7]={{0.9676414710017742,0.21854828100434837,1.0387811011664387,1.7895818440351428,-1.12433439108291,1.1546770397657187,-1.865219405728253},// Neuronio 0
{-0.6888816030706296,-0.5953319215311743,-1.254490019836841,-2.27562476051134,0.5245930406527339,-1.0111256814223348,0.8126018499528253},// Neuronio 1
{-0.08165473554261322,-1.5567193004897801,-0.9310364636819017,-1.862134659973609,-0.8146883239877395,-0.5595692559630175,-1.871802266372995},// Neuronio 2
{0.5077886786686765,-0.8034598839184773,-0.06222248575279482,0.256087335329455,0.5236788661536617,0.2792166056089397,-0.35846454680966244},// Neuronio 3
{2.8799853737849963,-0.9176004088963166,0.25160212761286693,-2.419006086744992,0.7733109735292989,0.16192273111057987,1.0209329849039055},// Neuronio 4
{-0.920764475713096,0.8200310022905459,0.459061345736073,1.4073444818100231,-0.06913510774186371,-0.8596415566493689,-0.012289107074229949},// Neuronio 5
{-0.6985903828483739,0.030159685704394392,0.8421569185442193,-1.0037955352286523,-0.04918200970618443,1.0603223028313538,-0.46636639168071653},// Neuronio 6
{0.14541627581510924,-3.093232561399021,-0.0082226661823925,-0.5450423292513822,-1.0739540845799125,0.48924509137837074,-0.9409868711487047}// Bias
};
// -------- Layer 2 --------
double w2[8][1]={{0.2664891295737381},// Neuronio 0
{-0.32549439591758},// Neuronio 1
{-0.27418101204734224},// Neuronio 2
{0.15341177180699414},// Neuronio 3
{-0.40959801243694344},// Neuronio 4
{-0.1501224967053164},// Neuronio 5
{0.11789437690683745},// Neuronio 6
{-0.17339125163309377}// Bias
};double inMax[] = { 61.933447678339, 7.5743337405181, 0.0, 2.5994482054513};
double inMin[] = { -61.860674837565, -6.0960684555755, -387.38426141663, -9.5289178286569};
double outMaxD[] = { 182.97818383663};
double outMinD[] = { -183.09006994726};
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
void actvFunc(double x, double *outVal){*outVal =  1.7159 * (tanh(3 / 2 * x))+1.0E-8 * x;}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *out0){
      double   in1[]={0,0,0,0,0,0,0};
      double   in2[]={0,0,0,0,0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0, in3N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
normaliza(inExt3,3,&in3N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] +  in3N * w0[3][0] + -1.0*w0[4][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] +  in3N * w0[3][1] + -1.0*w0[4][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] +  in3N * w0[3][2] + -1.0*w0[4][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] +  in3N * w0[3][3] + -1.0*w0[4][3]), &in1[3]);
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] +  in3N * w0[3][4] + -1.0*w0[4][4]), &in1[4]);
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] +  in3N * w0[3][5] + -1.0*w0[4][5]), &in1[5]);
actvFunc(( in0N * w0[0][6] +  in1N * w0[1][6] +  in2N * w0[2][6] +  in3N * w0[3][6] + -1.0*w0[4][6]), &in1[6]);
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