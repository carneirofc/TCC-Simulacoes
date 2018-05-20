/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cl�udio Carneiro
	Info : claud
	Data: Thu Mar 08 10:07:06 BRT 2018

	Topologia: [6,5,5,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.05
	Eta Attual: 0.001
	Momentum:0.5
	Epoca maxima de treinamento: 50000
	Epoca atual: 50002
	Erro alvo durante treinamento: 1.0E-4


	O nome das variaveis possui informacoes a respeito de sua localizacao na ANN. ex:
	w010 -> o primeiro 0 indica a camada que o neuronio possuidor desse peso esta,
	o segundo numero,'1', indica o n�mero do neur�nio da camada (o ultimo neuronio e sempre um bias)
	o ultimo numero ,'0', indica qual a posicao do neuronio alvo localizado na camada seguinte. 
	As vari�veis de entrada est�o na mesma ordem em que s�o encontradas no arquivo de treinamento.

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
   3   4   7   8   12   13
   Colunas de SAIDA referente aos dados de treino :
   15
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[7][5]={{-0.05962088949847919,0.2350943496366478,-1.373891300342752,0.782587687176653,-0.2271847974831279},// Neuronio 0
{-0.04786101864495785,1.120378776427988,-0.011684553225925246,1.4798985845613595,-0.4782947712558228},// Neuronio 1
{-3.552046180826174,0.7737375988992631,2.111928102066559,-0.6684283545257979,-0.042011012303578774},// Neuronio 2
{-0.8576684805450246,-0.8207915326085288,1.6333109795175649,-0.5397365196001839,-0.03574357521730047},// Neuronio 3
{-0.8327349167535862,0.4163899830294843,2.465441951800562,-2.1711548413328665,0.16103477689532106},// Neuronio 4
{-1.9582645427773233,-1.160522279271683,1.1394278103868043,-2.0551447107332677,-0.1812774966417497},// Neuronio 5
{-0.4204385867229471,-0.9255564158411386,-1.1415484604714137,-0.136688192736013,-1.5065466750003085}// Bias
};
// -------- Layer 1 --------
double w1[6][5]={{1.132797394411339,-0.054198606076911175,0.6154763745569782,0.5350018434678333,1.4434531064954355},// Neuronio 0
{2.564623965408542,1.1231510069452293,1.11788870927844,-0.5345359683526562,-1.8386776703835528},// Neuronio 1
{0.2291128684757236,0.18356688219591694,-0.6984228488734597,-1.5066195634965878,-0.5791688855788035},// Neuronio 2
{-0.21054958759736328,0.21101813202480288,-0.7893233634492313,-1.629087171608476,-0.33825625288564565},// Neuronio 3
{-1.8855285776411397,-0.573640375089713,-1.6693819335063667,-0.004388943819062484,-0.45686650208559954},// Neuronio 4
{0.23861238318902936,-0.5138658433188594,0.15989023275918812,-0.49350895365938297,0.6271500315019326}// Bias
};
// -------- Layer 2 --------
double w2[6][1]={{-0.5919558268381443},// Neuronio 0
{-0.762733904618881},// Neuronio 1
{1.0421694412739173},// Neuronio 2
{-0.45627993594058747},// Neuronio 3
{-1.0399780261061389},// Neuronio 4
{-0.21361273455562482}// Bias
};double inMax[] = { 0.0, 0.0, 7.6055579941048, 7.4651061670507, 2.2511683335754, 2.3010513520191};
double inMin[] = { -384.45776119858, -386.41493727282, -7.7529798064517, -7.7645915022835, -9.4748957190674, -9.4712738253491};
double outMaxD[] = { 182.98500867239};
double outMinD[] = { -183.15255090008};
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
void actvFunc(double x, double *outVal){*outVal = tanh(x)+1.0E-5 * x;}

void actvFuncSaida(double x, double *outVal){*outVal =  x;}

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *inExt4,double *inExt5,double *out0){
      double   in1[]={0,0,0,0,0};
      double   in2[]={0,0,0,0,0};
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
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] + -1.0*w1[5][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] + -1.0*w1[5][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] + -1.0*w1[5][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] +  in1[4] *w1[4][3] + -1.0*w1[5][3]), &in2[3]);
actvFunc(( in1[0] *w1[0][4] +  in1[1] *w1[1][4] +  in1[2] *w1[2][4] +  in1[3] *w1[3][4] +  in1[4] *w1[4][4] + -1.0*w1[5][4]), &in2[4]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] +  in2[4] *w2[4][0] + -1.0*w2[5][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}