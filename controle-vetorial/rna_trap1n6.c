/**
	Arquivo gerado automaticamente pelo software de treinamento. Por Cl�udio Carneiro
	Info : claud
	Data: Thu Mar 08 11:15:28 BRT 2018

	Topologia: [6,7,7,1]
	Funcao de ativacao nas camadas escondidas:*outVal = tanh(x)+1.0E-5 * x; 
	Funcao de ativacao nas saidas: 
*outVal =  x;	Eta Inicial: 0.05
	Eta Attual: 0.008
	Momentum:0.5
	Epoca maxima de treinamento: 1000000
	Epoca atual: 55524
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
double w0[7][7]={{0.2989132325078291,0.6175555283856441,-0.8353333806054623,-1.1054940330648357,-0.3934040718606633,-0.039108404392641884,0.43367111631438604},// Neuronio 0
{0.4391549577171506,-2.010947915852854,-2.2664496391406397,-1.8836177467084898,0.12792263980754606,-0.4450624344489707,1.8747301666801668},// Neuronio 1
{-0.5971061041923038,-2.560663900201154,0.25088095405875305,0.8296330918033864,-0.8814152071949763,-1.5090517732109432,-0.3538942765463595},// Neuronio 2
{0.16839872977558032,0.4280080829953492,0.43511474823291657,0.12583291717922368,-1.248903501970906,0.21154744211606363,0.014913044972115671},// Neuronio 3
{-0.44343652880895007,-1.167353474977663,1.3573374701001688,2.551891143770758,0.008222720497451505,-1.1350732009532603,0.26426855549152933},// Neuronio 4
{0.3853643198970547,-0.5052934738484104,3.422506446442185,3.050050305637802,-0.8743967212415799,1.00514391949702,-1.7854998173693797},// Neuronio 5
{0.8511618899111933,0.23190825810082294,-0.04583869633425472,0.49562298038363883,0.9580466351822602,-0.670089373156798,-1.8233432918444454}// Bias
};
// -------- Layer 1 --------
double w1[8][7]={{0.6859208373543377,-0.7420693513685563,0.6961192936136974,0.6028236577267153,-1.4924389143605847,-0.5842004058395287,-0.4278410557758653},// Neuronio 0
{0.00799521957850052,0.8239445218028092,-0.03723451372631588,0.6829453427318969,0.23924056756635348,-1.7478082367109231,0.7661363899416274},// Neuronio 1
{1.59295450901837,-0.35014154198853137,-0.8430849937540088,0.30081055277728147,0.46182931602533894,0.5287536106926417,-0.22318083028501354},// Neuronio 2
{-0.7228084895860883,-0.6868891765361703,0.9709835134054813,-0.7299545653151505,-0.5023607544697002,-0.03918164094808783,-0.9439167471969983},// Neuronio 3
{-0.47945503729802347,-2.672022822755132,0.9662794731575214,-1.9091420451561927,-1.796436333081023,2.5211672056027714,-0.7044792781171816},// Neuronio 4
{-0.9813891483257446,-0.43895996004301685,-0.24799358498544746,-1.2927284176305067,0.3744184421900242,-0.20203071980872142,0.373755555315495},// Neuronio 5
{-0.7638301788147025,-1.8826170740046144,1.1773244601501371,0.14901190513178572,-2.2082797707319104,-1.4272225476955687,-0.8501672786986364},// Neuronio 6
{-1.6080377626690174,-1.9373503967125694,-1.4965050951495924,-0.8921204701574899,0.21117242387703145,1.5149783660109655,0.2244823088744783}// Bias
};
// -------- Layer 2 --------
double w2[8][1]={{-0.36607238946275855},// Neuronio 0
{-0.5593506109593416},// Neuronio 1
{-0.49886318499023014},// Neuronio 2
{0.8237510395432704},// Neuronio 3
{0.3968616230425322},// Neuronio 4
{-0.5095430852431957},// Neuronio 5
{-0.17548721093407377},// Neuronio 6
{-0.08348527711086486}// Bias
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