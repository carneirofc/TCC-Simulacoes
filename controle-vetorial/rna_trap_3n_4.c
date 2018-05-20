/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Wed Mar 07 00:01:43 BRT 2018

	Topologia: [12,6,3,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.013265832587944816
	Momentum:0.7
	Epoca maxima de treinamento: 50000
	Epoca atual: 8004
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
double w0[13][6]={{-2.0257377581952136,1.172460134461162,0.20466858742723218,-1.2345528508416757,0.5101569633799979,1.0341661945136016},// Neuronio 0
{-0.8441444257791312,0.7603614577528224,1.5522191838883104,0.38901232420655507,0.28240265780818585,-0.18622579832508646},// Neuronio 1
{-1.1165686185016153,-0.22165081431523564,0.2745452930495835,0.06134313780918543,0.03240118657341242,0.24111382141171522},// Neuronio 2
{-0.4784857237567039,0.7417844404805878,-0.23260271683148076,-0.44574739196017293,-0.774097602260106,1.502661065120627},// Neuronio 3
{1.5625790821860108,0.12596136432060762,1.933327804502189,-0.793980562592019,0.2665832053710577,-0.3425944597302551},// Neuronio 4
{0.4980465281268038,0.2787578039934891,-0.8022672521654792,1.0258746234219147,1.039208557468756,-0.8717313193030065},// Neuronio 5
{0.5749214475793755,-1.2506960780761134,1.0605073474514077,0.04172160888983897,-0.41529878136728676,-0.556087560494362},// Neuronio 6
{1.2904635225568122,-0.12977084562801422,0.7164296858716787,-1.4114737106398925,1.6643288297069962,-0.5842526691326355},// Neuronio 7
{-0.6435334645612508,0.9817208801606869,0.692759700925473,0.21245912840460424,-0.3921538035744393,0.4819150376431301},// Neuronio 8
{0.9326128650743712,-1.144415842174569,0.17258282012837334,0.14442244569862994,-0.7491451150998547,0.025905884000598473},// Neuronio 9
{-0.6011053283234483,-0.26258523872521483,1.1659038486552293,-0.26978448040202374,1.117450580894845,-0.11636427542939952},// Neuronio 10
{-0.08422172382016754,-0.9251134369560082,-0.703618207970586,-0.2897164515614658,1.274240659028171,-1.2168349611416167},// Neuronio 11
{-2.3206204130795642,1.8246731001326109,-1.0306578431275022,-0.7199526445801295,0.002126091912106397,-0.42943024073229896}// Bias
};
// -------- Layer 1 --------
double w1[7][3]={{-1.0489443572353865,-0.5986599766286018,0.36180579422760045},// Neuronio 0
{-0.934448599408238,-0.3824606584331619,-0.6557223610737943},// Neuronio 1
{-1.3403715185121765,0.03791328084756882,-0.7472411972328956},// Neuronio 2
{1.0223790299534188,-0.5581666606295389,1.461765519578347},// Neuronio 3
{2.4379182072989236,-1.1854714694438453,1.717725111595896},// Neuronio 4
{1.149957850838805,0.47368410898834334,0.6407945161027147},// Neuronio 5
{0.3355953802496912,-0.7552181688239114,-0.45019081157501345}// Bias
};
// -------- Layer 2 --------
double w2[4][1]={{0.4576073626369467},// Neuronio 0
{-0.9316955805468095},// Neuronio 1
{-0.6946968243027053},// Neuronio 2
{-0.6910141849159734}// Bias
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