/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cláudio Carneiro
	Info : claud
	Data: Thu Mar 08 09:21:54 BRT 2018

	Topologia: [6,6,6,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.025
	Eta Attual: 0.02010657597733223
	Momentum:0.7
	Epoca maxima de treinamento: 50000
	Epoca atual: 2867
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
   3   4   7   8   12   13
   Colunas de SAIDA referente aos dados de treino :
   15
*/
#include <math.h>
#define NORM_MIN -1.0
#define NORM_MAX 1.0

// -------- Layer 0 --------
double w0[7][6]={{1.3364889692170072,-1.14024635728626,0.6017116831245073,0.6550613321970166,0.2720594362888385,-0.5337091568854871},// Neuronio 0
{0.19033379020583943,-0.22166488205451249,0.969834843798132,0.09481134199279982,1.225284500724139,-1.5351233746337027},// Neuronio 1
{-0.028629844836960423,0.4477321195203855,-0.2705269050624359,-0.03049548726929309,-0.6347821325512251,-1.9188308927953943},// Neuronio 2
{-0.7851158600445051,-0.6534479061650972,-0.04787662455313198,-0.23943125887025504,-0.4699365910393191,-0.6053335912613168},// Neuronio 3
{-1.6821436835865777,1.2755215741504307,0.6762115910658305,0.05963219425167228,-1.7546376244478843,-0.2759531635484775},// Neuronio 4
{-1.2370807149021426,1.8908387528063473,-0.40013841472148304,0.1368065366218906,-1.579231798158772,1.705772308096069},// Neuronio 5
{-0.389432669395265,1.0112814972510196,-1.5586829915250526,0.4228388195073164,1.125208792439526,1.1711734129901956}// Bias
};
// -------- Layer 1 --------
double w1[7][6]={{1.7606714417155709,-0.6873872877109035,-0.6591403618446615,0.1164823351390758,-1.4700430318301545,-0.8359003599403539},// Neuronio 0
{0.449164217658393,-0.36708873966901134,-1.4129973351326506,0.532895847613466,-1.5956545400490647,-1.34572965079182},// Neuronio 1
{0.6085816097786042,0.8499985825272862,1.11170750909784,-1.2549408794567505,-0.1783075514421702,-0.3482805043204549},// Neuronio 2
{-0.10099438316836173,1.0008594300414546,0.08319896171748381,-0.33947507678977185,-1.2234962797238462,-0.43219364769560314},// Neuronio 3
{0.437485391764983,0.669979070760454,0.4091941845880737,-0.3053154290100814,-1.1796627171677467,0.3502899830661568},// Neuronio 4
{-0.11804862086150032,1.4226235402223948,-0.6331795147101839,-0.33061801761212634,-0.47366064883891096,0.7810213622423449},// Neuronio 5
{0.36306377700657716,-1.0697529687995067,-0.6619233175809687,1.5483612087244278,0.41653620462891733,1.0962385926931597}// Bias
};
// -------- Layer 2 --------
double w2[7][1]={{-0.23695383508958662},// Neuronio 0
{-0.677046328896248},// Neuronio 1
{0.5146377745993828},// Neuronio 2
{0.6766923721260153},// Neuronio 3
{-0.31835057244866066},// Neuronio 4
{-0.32186054176787904},// Neuronio 5
{-0.316417051256843}// Bias
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
      double   in1[]={0,0,0,0,0,0};
      double   in2[]={0,0,0,0,0,0};
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
actvFunc(( in1[0] *w1[0][0] +  in1[1] *w1[1][0] +  in1[2] *w1[2][0] +  in1[3] *w1[3][0] +  in1[4] *w1[4][0] +  in1[5] *w1[5][0] + -1.0*w1[6][0]), &in2[0]);
actvFunc(( in1[0] *w1[0][1] +  in1[1] *w1[1][1] +  in1[2] *w1[2][1] +  in1[3] *w1[3][1] +  in1[4] *w1[4][1] +  in1[5] *w1[5][1] + -1.0*w1[6][1]), &in2[1]);
actvFunc(( in1[0] *w1[0][2] +  in1[1] *w1[1][2] +  in1[2] *w1[2][2] +  in1[3] *w1[3][2] +  in1[4] *w1[4][2] +  in1[5] *w1[5][2] + -1.0*w1[6][2]), &in2[2]);
actvFunc(( in1[0] *w1[0][3] +  in1[1] *w1[1][3] +  in1[2] *w1[2][3] +  in1[3] *w1[3][3] +  in1[4] *w1[4][3] +  in1[5] *w1[5][3] + -1.0*w1[6][3]), &in2[3]);
actvFunc(( in1[0] *w1[0][4] +  in1[1] *w1[1][4] +  in1[2] *w1[2][4] +  in1[3] *w1[3][4] +  in1[4] *w1[4][4] +  in1[5] *w1[5][4] + -1.0*w1[6][4]), &in2[4]);
actvFunc(( in1[0] *w1[0][5] +  in1[1] *w1[1][5] +  in1[2] *w1[2][5] +  in1[3] *w1[3][5] +  in1[4] *w1[4][5] +  in1[5] *w1[5][5] + -1.0*w1[6][5]), &in2[5]);
actvFuncSaida( ( in2[0] *w2[0][0] +  in2[1] *w2[1][0] +  in2[2] *w2[2][0] +  in2[3] *w2[3][0] +  in2[4] *w2[4][0] +  in2[5] *w2[5][0] + -1.0*w2[6][0]),  &out0D);
desnormaliza(  out0D , 0, &out0D);
 *out0 =  out0D;
}