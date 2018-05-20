/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Tue Mar 06 23:46:53 BRT 2018

	Topologia: [12,6,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.025
	Momentum:0.7
	Epoca maxima de treinamento: 50000
	Epoca atual: 3839
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
double w0[13][6]={{0.7217341794017086,-0.9945815122123272,0.4005766027896898,2.0702337082096536,-0.14974315961930185,0.8953574440694331},// Neuronio 0
{0.21529409715968398,1.3944145548740914,-0.8795035786288056,-0.4208409852763111,-0.42716150097933925,2.9521324384900978},// Neuronio 1
{-0.45350298132833083,-0.22717598356413954,1.5604542027320802,0.6134797395327128,1.2040464122644228,1.568391458014831},// Neuronio 2
{1.143799525456142,-1.4298405630920081,-0.055814948021701484,0.07147884909937283,-0.8601812330469447,2.5002947459826763},// Neuronio 3
{0.24193692712060735,-0.07127388795368166,-0.7497621846029426,-1.2813728033165441,-1.018871462291562,-2.2333936451452594},// Neuronio 4
{1.6570067500949248,0.12881170717890175,-0.9037453254018355,0.9588903871840818,-0.5558897021963666,0.5173300233081396},// Neuronio 5
{1.25141522488469,-0.42161058628612114,-1.0109475687854483,1.5699153015512324,-1.0197758200614653,-1.2598335314709892},// Neuronio 6
{-1.1833367211980064,0.7790238845811238,-0.3782009117854626,-0.35672430443581643,-0.20471674412192328,-0.7588654350893027},// Neuronio 7
{0.555438911193137,-0.06849563216182543,-0.5389842249585984,1.079587872935273,-0.5792178032857542,-3.658477828049066},// Neuronio 8
{-0.3233374916030631,0.3154945599954544,0.9493432810647584,-0.028890923984670507,1.0787788438051995,-2.2560408320240253},// Neuronio 9
{0.6226407408746009,-0.48094024221900183,-0.8855494774174212,-0.8470399702046132,-1.036195087784105,-3.054397925460755},// Neuronio 10
{-0.8717218891552448,0.2550986442072688,-0.2659686535960112,-0.30231471595690335,-0.10248932333910155,-3.4448738179970366},// Neuronio 11
{-2.10351619961487,0.18350664492037785,1.784639073526364,-1.6854417721344281,0.5553276942337809,-0.6258323343154416}// Bias
};
// -------- Layer 1 --------
double w1[7][1]={{0.7769824855814749},// Neuronio 0
{0.38475938055011577},// Neuronio 1
{0.6020690256581822},// Neuronio 2
{-0.2940759393275622},// Neuronio 3
{-0.6240988243066948},// Neuronio 4
{-0.05764280416496105},// Neuronio 5
{0.10196020756556938}// Bias
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