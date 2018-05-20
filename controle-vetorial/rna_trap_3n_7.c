/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Wed Mar 07 00:15:01 BRT 2018

	Topologia: [12,6,3,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.001072785015009282
	Momentum:0.7
	Epoca maxima de treinamento: 50000
	Epoca atual: 39841
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
   1   2   3   4   5   6   7   8   9   10   12   13
   Colunas de SAIDA referente aos dados de treino :
   15
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[13][6]={{-2.1381415124225653,1.1275863814386637,0.43558196589051834,-0.9360113165905862,0.7300695681573878,0.8762560842084068},// Neuronio 0
{-0.7886537646517452,0.7791898532508436,1.6294828562448578,0.18150144643653632,0.23250864172816368,-0.49749162955168924},// Neuronio 1
{-1.0917779395381475,-0.2214005582722512,0.06766800719451509,-0.026456184716805765,-0.020675460127024172,0.02420981968838937},// Neuronio 2
{-0.5242660893017201,0.7714926717732841,-0.5090220945676557,-0.3005610276907826,-0.8095276083359759,1.5968599318544279},// Neuronio 3
{1.8871106290154924,-0.02672538498280904,1.5555500985060802,-0.6062515619272109,0.7587602106049087,-0.41891101548493903},// Neuronio 4
{0.74191602150143,0.27121956388729773,-0.8940644332091043,0.5410193199168896,0.9401292927825825,-0.6616090591803119},// Neuronio 5
{0.49279617033102796,-1.1687608840025903,1.1202092761576126,-0.187921797413342,-0.6519292270445325,-0.45951221204825404},// Neuronio 6
{1.1399053877217895,-0.08825403384024806,1.05187345190032,-0.7375764321743129,1.3734581914906672,-0.361352329693748},// Neuronio 7
{-0.688046425765175,0.8664814095759494,0.2119041592254726,0.09089282595743596,-0.30078897037102514,0.6149110885400653},// Neuronio 8
{0.999492042876638,-0.8759152729755902,0.16732567235737378,0.11872345541140046,-0.8182804166065804,-0.21656820743260774},// Neuronio 9
{-0.6801691686649177,-0.06631983211712014,1.5424630934926509,-0.14024173805726567,0.7558282846569436,-0.10402473097736324},// Neuronio 10
{-0.11185790368836523,-1.1236281081828714,-0.7814256458260548,-0.2230298130932547,1.3374041756601778,-1.0091485208139523},// Neuronio 11
{-2.363591762553623,1.8009768149306713,-0.9940474636794129,-0.75495631984934,-0.06454479698253852,-0.42091646791825965}// Bias
};
// -------- Layer 1 --------
double w1[7][3]={{-0.9414865113425319,-0.7325526272648079,0.18124456370378716},// Neuronio 0
{-0.9313342274529374,-0.32309663778165254,-0.6910205798157008},// Neuronio 1
{-1.2865396958857005,0.12057490688830931,-0.822520805336395},// Neuronio 2
{1.0819621128833783,-0.6521993403741,1.6890690964311366},// Neuronio 3
{2.535930008604301,-0.9451007202292875,1.992356428102898},// Neuronio 4
{1.221837708350455,0.32248956753860025,1.0676805239032923},// Neuronio 5
{0.4556021739821509,-0.8683480536535758,0.17321585886007387}// Bias
};
// -------- Layer 2 --------
double w2[4][1]={{0.7300691409609323},// Neuronio 0
{-1.0783683317654427},// Neuronio 1
{-0.9799314524489189},// Neuronio 2
{-0.814862750537268}// Bias
};double inMax[] = { 0.0, 0.0, 0.0, 0.0, 7.5644210572576, 7.5609666194594, 7.6055579941048, 7.4651061670507, 2.0485284775072, 2.0437794361847, 2.2511683335754, 2.3010513520191};
double inMin[] = { -386.77993060303, -386.89241570732, -384.45776119858, -386.41493727282, -7.7741631249896, -7.7402292234361, -7.7529798064517, -7.7645915022835, -9.4823735173254, -9.4699863871408, -9.4748957190674, -9.4712738253491};
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

void reden_(double *inExt0,double *inExt1,double *inExt2,double *inExt3,double *inExt4,double *inExt5,double *inExt6,double *inExt7,double *inExt8,double *inExt9,double *inExt10,double *inExt11,double *out0){
      double   in1[]={0,0,0,0,0,0};
      double   in2[]={0,0,0};
double  out0D = 0;
double  in0N = 0, in1N = 0, in2N = 0, in3N = 0, in4N = 0, in5N = 0, in6N = 0, in7N = 0, in8N = 0, in9N = 0, in10N = 0, in11N = 0;
normaliza(inExt0,0,&in0N);
normaliza(inExt1,1,&in1N);
normaliza(inExt2,2,&in2N);
normaliza(inExt3,3,&in3N);
normaliza(inExt4,4,&in4N);
normaliza(inExt5,5,&in5N);
normaliza(inExt6,6,&in6N);
normaliza(inExt7,7,&in7N);
normaliza(inExt8,8,&in8N);
normaliza(inExt9,9,&in9N);
normaliza(inExt10,10,&in10N);
normaliza(inExt11,11,&in11N);
actvFunc(( in0N * w0[0][0] +  in1N * w0[1][0] +  in2N * w0[2][0] +  in3N * w0[3][0] +  in4N * w0[4][0] +  in5N * w0[5][0] +  in6N * w0[6][0] +  in7N * w0[7][0] +  in8N * w0[8][0] +  in9N * w0[9][0] +  in10N * w0[10][0] +  in11N * w0[11][0] + -1.0*w0[12][0]), &in1[0]);
actvFunc(( in0N * w0[0][1] +  in1N * w0[1][1] +  in2N * w0[2][1] +  in3N * w0[3][1] +  in4N * w0[4][1] +  in5N * w0[5][1] +  in6N * w0[6][1] +  in7N * w0[7][1] +  in8N * w0[8][1] +  in9N * w0[9][1] +  in10N * w0[10][1] +  in11N * w0[11][1] + -1.0*w0[12][1]), &in1[1]);
actvFunc(( in0N * w0[0][2] +  in1N * w0[1][2] +  in2N * w0[2][2] +  in3N * w0[3][2] +  in4N * w0[4][2] +  in5N * w0[5][2] +  in6N * w0[6][2] +  in7N * w0[7][2] +  in8N * w0[8][2] +  in9N * w0[9][2] +  in10N * w0[10][2] +  in11N * w0[11][2] + -1.0*w0[12][2]), &in1[2]);
actvFunc(( in0N * w0[0][3] +  in1N * w0[1][3] +  in2N * w0[2][3] +  in3N * w0[3][3] +  in4N * w0[4][3] +  in5N * w0[5][3] +  in6N * w0[6][3] +  in7N * w0[7][3] +  in8N * w0[8][3] +  in9N * w0[9][3] +  in10N * w0[10][3] +  in11N * w0[11][3] + -1.0*w0[12][3]), &in1[3]);
actvFunc(( in0N * w0[0][4] +  in1N * w0[1][4] +  in2N * w0[2][4] +  in3N * w0[3][4] +  in4N * w0[4][4] +  in5N * w0[5][4] +  in6N * w0[6][4] +  in7N * w0[7][4] +  in8N * w0[8][4] +  in9N * w0[9][4] +  in10N * w0[10][4] +  in11N * w0[11][4] + -1.0*w0[12][4]), &in1[4]);
actvFunc(( in0N * w0[0][5] +  in1N * w0[1][5] +  in2N * w0[2][5] +  in3N * w0[3][5] +  in4N * w0[4][5] +  in5N * w0[5][5] +  in6N * w0[6][5] +  in7N * w0[7][5] +  in8N * w0[8][5] +  in9N * w0[9][5] +  in10N * w0[10][5] +  in11N * w0[11][5] + -1.0*w0[12][5]), &in1[5]);
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] + -1.0*w1[6][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] +  in1[5] *w1[5][1] + -1.0*w1[6][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] +  in1[5] *w1[5][2] + -1.0*w1[6][2]), &in2[2]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] + -1.0*w2[3][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}