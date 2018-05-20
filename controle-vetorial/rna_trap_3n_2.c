/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 23:52:33 BRT 2018

	Topologia: [12,6,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.025
	Momentum:0.7
	Epoca maxima de treinamento: 50000
	Epoca atual: 13129
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
double w0[13][6]={{0.9094303120611418,-1.2715699867463974,0.09124093712148074,1.749121237048183,-0.7504223459429722,1.4913830335635059},// Neuronio 0
{0.3635285515159141,1.0270963721260544,-0.7461998701471003,-0.3961836466757819,-0.5781220006804583,3.4999453314081594},// Neuronio 1
{-0.6761534735756872,0.030369963585367612,1.405278099954093,0.6789567575596409,1.4805789256090365,2.1643027704850644},// Neuronio 2
{1.0487430487760938,-1.0317530011638616,0.26752940663155256,0.3047674307254017,-0.3939619564830847,3.123025881016174},// Neuronio 3
{0.2953305598374238,-0.5277664036171003,-0.7454570465883986,-1.7804377037719277,-1.008359021993915,-2.4032387222741565},// Neuronio 4
{1.3468257748178372,0.07299375264251375,-0.6714875314002899,0.8239856154477151,-0.4323451574331465,0.3323908538045427},// Neuronio 5
{1.2815262796695996,-0.12915710710945594,-1.1103410160858782,1.819563875590978,-1.0381700866371326,-1.53992459891077},// Neuronio 6
{-0.9641546122024163,0.99526449070161,-0.5502600635246797,0.08044944411138015,-0.36710197253842425,-1.134967911773136},// Neuronio 7
{0.41474627544073517,0.3166449772862131,-0.1950927625823108,2.037792486966801,-0.16174860406066457,-4.6289233798202964},// Neuronio 8
{-0.038329828899703905,0.054461584470441894,0.6351030039051067,0.2366888675241572,0.6890798962809721,-3.135539916880342},// Neuronio 9
{0.4799306484472925,-0.29903277421047386,-0.9264188840935257,-1.0501608800192241,-1.0090796010905976,-4.006113961469224},// Neuronio 10
{-0.8837713460299057,-0.031037698578757728,-0.25407984764245783,-1.337308946866206,-0.1617006461862415,-4.562192430441863},// Neuronio 11
{-2.088480861977429,0.19987663567921524,1.8143325780397956,-1.6654402665018817,0.5872605847549255,-0.795154590954741}// Bias
};
// -------- Layer 1 --------
double w1[7][1]={{0.788921986851363},// Neuronio 0
{0.39617214157058467},// Neuronio 1
{0.5939782155486936},// Neuronio 2
{-0.29868064235182457},// Neuronio 3
{-0.6154352739118311},// Neuronio 4
{-0.053421558012940865},// Neuronio 5
{0.10370697193796415}// Bias
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
actvFuncSaida( ( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] + -1.0*w1[6][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}