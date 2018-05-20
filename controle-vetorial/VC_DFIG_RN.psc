PSCAD 4.2.0

Settings
 {
 Id = "1334175951.1526840561"
 Author = "rico.laisf"
 Desc = ""
 Arch = "windows"
 Options = 32
 Build = 18
 Warn = 1
 Check = 15
 Libs = ""
 Source = ""
 RunInfo = 
  {
  Fin = 22
  Step = 2.5e-006
  Plot = 0.001
  Chat = 0.001
  Brch = 0.0005
  Lat = 100
  Options = 0
  Advanced = 4607
  Debug = 0
  StartFile = ""
  OFile = "noname.out"
  SFile = "noname.snp"
  SnapTime = 0.3
  Mruns = 10
  Mrunfile = 0
  StartType = 0
  PlotType = 0
  SnapType = 0
  MrunType = "mrun"
  }

 }

Definitions
 {
 Module("Torque")
  {
  Desc = ""
  FileDate = 1526840533
  Nodes = 
   {
   Input("Corrente",-54,-18)
    {
    Type = Real
    Dim  = [4]
    }
   Input("TL",-54,18)
    {
    Type = Real
    }
   Output("Wm",54,18)
    {
    Type = Real
    }
   Output("Tr",54,-18)
    {
    Type = Real
    }
   Input("Const",0,-54)
    {
    Type = Real
    Dim  = [8]
    }
   Output("Te",0,54)
    {
    Type = Real
    }
   }

  Graphics = 
   {
   Rectangle(-39,-39,39,39)
   Line(-53,-18,-39,-18)
   Line(-53,18,-39,18)
   Line(39,18,53,18)
   Line(39,-18,53,-18)
   Line(0,-39,0,-54)
   Line(0,39,0,53)
   Text(0,0,"Torque")
   Text(-29,21,"TL")
   Text(-29,-14,"Idq")
   Text(30,22,"Wm")
   Text(30,-14,"Tr")
   Text(0,-30,"Const")
   Text(-1,34,"Te")
   }


  Page(A/A4,Landscape,16,[683,342],5)
   {
   0.import([36,18],0,0,10)
    {
    Name = "Corrente"
    }
   -Wire-([72,18],0,0,-1)
    {
    Vertex="0,0;126,0"
    }
   0.datatap([108,36],0,0,20)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([144,36],0,0,30)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([216,36],0,0,50)
    {
    Index = "4"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([108,36],0,0,-1)
    {
    Name = "Ispd"
    }
   0.datalabel([144,36],0,0,-1)
    {
    Name = "Ispq"
    }
   0.datalabel([216,36],0,0,-1)
    {
    Name = "Irq"
    }
   0.datalabel([180,36],0,0,-1)
    {
    Name = "Ird"
    }
   0.sumjct([396,252],5,0,200)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "0"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.mult([144,126],0,0,120)
    {
    }
   0.mult([216,126],0,0,130)
    {
    }
   0.datalabel([216,162],0,0,-1)
    {
    Name = "Lm"
    }
   0.div([288,126],0,0,190)
    {
    }
   0.mult([468,252],2,0,170)
    {
    }
   0.mult([324,252],6,0,160)
    {
    }
   0.mult([756,216],4,0,250)
    {
    }
   0.datalabel([468,216],2,0,-1)
    {
    Name = "Ird"
    }
   0.datalabel([504,252],0,0,-1)
    {
    Name = "Ispq"
    }
   0.datalabel([324,216],2,0,-1)
    {
    Name = "Irq"
    }
   0.datalabel([756,252],4,0,-1)
    {
    Name = "Atr"
    }
   0.datalabel([432,126],0,0,-1)
    {
    Name = "Te"
    }
   0.import([558,144],0,0,140)
    {
    Name = "TL"
    }
   0.integral([864,216],0,0,260)
    {
    Extrn = "0"
    Reset = "1"
    Mthd = "0"
    noname5 = ""
    INTR = "0"
    INTCLR = "0"
    T = "1"
    Yo = "0.0"
    YRst = "0.0"
    YHi = "100"
    YLo = "-100"
    }
   0.export([1080,216],4,0,290)
    {
    Name = "Tr"
    }
   0.import([396,18],0,0,60)
    {
    Name = "Const"
    }
   -Wire-([432,18],0,0,-1)
    {
    Vertex="0,0;126,0"
    }
   0.datatap([468,36],0,0,70)
    {
    Index = "5"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([504,36],0,0,80)
    {
    Index = "6"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([504,36],0,0,-1)
    {
    Name = "Pp"
    }
   0.datalabel([468,36],0,0,-1)
    {
    Name = "Lm"
    }
   0.const([72,126],0,0,110)
    {
    Name = ""
    Value = "3"
    }
   0.const([288,198],3,0,150)
    {
    Name = ""
    Value = "2"
    }
   -Wire-([810,144],0,0,-1)
    {
    Vertex="0,0;144,0"
    }
   0.compar([936,252],4,0,280)
    {
    Pulse = "1"
    INTR = "0"
    OPos = "1"
    ONone = "0"
    ONeg = "1"
    OHi = "1"
    OLo = "0"
    }
   0.emtconst([972,252],4,0,180)
    {
    Name = ""
    Value = "1"
    }
   0.abs([972,288],4,0,270)
    {
    Dim = "1"
    }
   0.datatap([180,36],0,0,40)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([144,162],0,0,-1)
    {
    Name = "Pp"
    }
   0.datalabel([288,252],0,0,-1)
    {
    Name = "Ispd"
    }
   0.mult([396,126],0,0,210)
    {
    }
   -Wire-([360,126],0,0,-1)
    {
    Vertex="0,0;-36,0"
    }
   -Wire-([396,162],0,0,-1)
    {
    Vertex="0,0;0,54"
    }
   0.sumjct([630,144],0,0,220)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "-1"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.datalabel([630,108],6,0,-1)
    {
    Name = "Te"
    }
   -Wire-([720,216],0,0,-1)
    {
    Vertex="0,0;-90,0;-90,-36"
    }
   0.div([702,144],0,0,230)
    {
    }
   0.datalabel([702,180],4,0,-1)
    {
    Name = "J"
    }
   0.export([990,144],4,0,300)
    {
    Name = "Wm"
    }
   0.integral([774,144],0,0,240)
    {
    Extrn = "0"
    Reset = "0"
    Mthd = "0"
    noname5 = ""
    INTR = "0"
    INTCLR = "0"
    T = "1"
    Yo = "0.0"
    YRst = "0.0"
    YHi = "10000"
    YLo = "-10000"
    }
   -Wire-([900,216],0,0,-1)
    {
    Vertex="0,0;144,0"
    }
   0.datatap([540,36],0,0,90)
    {
    Index = "7"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([576,36],0,0,100)
    {
    Index = "8"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([576,36],0,0,-1)
    {
    Name = "Atr"
    }
   0.datalabel([540,36],0,0,-1)
    {
    Name = "J"
    }
   0.export([468,126],4,0,310)
    {
    Name = "Te"
    }
   -Wire-([792,216],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   -Wire-([1008,288],0,0,-1)
    {
    Vertex="0,0;0,-72"
    }
   -Wire-([810,216],0,0,-1)
    {
    Vertex="0,0;0,-72"
    }
   }
  }
 Module("Correntes")
  {
  Desc = ""
  FileDate = 1526840533
  Nodes = 
   {
   Output("Corrente",54,0)
    {
    Type = Real
    Dim  = [4]
    }
   Input("Fluxo",-54,-18)
    {
    Type = Real
    Dim  = [4]
    }
   Input("Const",0,-54)
    {
    Type = Real
    Dim  = [8]
    }
   }

  Graphics = 
   {
   Rectangle(-39,-39,39,39)
   Line(-54,-18,-39,-18)
   Line(0,-54,0,-39)
   Line(39,0,53,0)
   Text(0,0,"Corrente")
   Text(-26,-15,"Flux")
   Text(1,-28,"Const")
   Text(26,11,"Idq")
   }


  Page(A/A4,Landscape,16,[683,342],5)
   {
   0.datalabel([252,144],0,0,-1)
    {
    Name = "Ispd"
    }
   0.sumjct([216,144],6,0,230)
    {
    DPath = "1"
    A = "0"
    B = "-1"
    C = "0"
    D = "1"
    E = "0"
    F = "0"
    G = "0"
    }
   0.mult([144,144],6,0,200)
    {
    }
   0.datalabel([144,108],6,0,-1)
    {
    Name = "A"
    }
   0.datalabel([486,144],0,0,-1)
    {
    Name = "Ird"
    }
   0.datalabel([486,324],0,0,-1)
    {
    Name = "Irq"
    }
   0.datalabel([576,162],3,0,-1)
    {
    Name = "Ispd"
    }
   0.datalabel([594,162],3,0,-1)
    {
    Name = "Ispq"
    }
   0.datalabel([630,162],3,0,-1)
    {
    Name = "Irq"
    }
   0.datalabel([612,162],3,0,-1)
    {
    Name = "Ird"
    }
   0.datamerge([648,180],3,0,280)
    {
    N = "4"
    Type = "2"
    Disp = "0"
    }
   0.export([702,180],4,0,290)
    {
    Name = "Corrente"
    }
   0.import([54,18],0,0,10)
    {
    Name = "Fluxo"
    }
   -Wire-([90,18],0,0,-1)
    {
    Vertex="0,0;126,0"
    }
   0.datatap([126,36],0,0,20)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([162,36],0,0,30)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([198,36],0,0,40)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([234,36],0,0,50)
    {
    Index = "4"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([126,36],0,0,-1)
    {
    Name = "Fspd"
    }
   0.datalabel([162,36],0,0,-1)
    {
    Name = "Fspq"
    }
   0.datalabel([234,36],0,0,-1)
    {
    Name = "Frq"
    }
   0.datalabel([198,36],0,0,-1)
    {
    Name = "Frd"
    }
   0.import([414,18],0,0,60)
    {
    Name = "Const"
    }
   -Wire-([450,18],0,0,-1)
    {
    Vertex="0,0;90,0"
    }
   0.datatap([486,36],0,0,70)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([522,36],0,0,80)
    {
    Index = "4"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([558,36],0,0,90)
    {
    Index = "5"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([522,36],0,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([486,36],0,0,-1)
    {
    Name = "Lsp"
    }
   0.datalabel([558,36],0,0,-1)
    {
    Name = "Lm"
    }
   0.datalabel([144,594],0,0,-1)
    {
    Name = "Lsp"
    }
   0.div([180,594],0,0,130)
    {
    }
   0.datalabel([216,594],6,0,-1)
    {
    Name = "B"
    }
   0.datalabel([216,540],6,0,-1)
    {
    Name = "A"
    }
   0.sumjct([72,576],0,0,120)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "0"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.mult([72,504],1,0,100)
    {
    }
   0.mult([72,648],5,0,110)
    {
    }
   0.datalabel([144,540],4,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([72,684],4,0,-1)
    {
    Name = "Lm"
    }
   0.datalabel([36,504],5,0,-1)
    {
    Name = "Lsp"
    }
   0.datalabel([72,468],2,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([36,648],5,0,-1)
    {
    Name = "Lm"
    }
   0.div([180,666],0,0,140)
    {
    }
   0.datalabel([216,666],6,0,-1)
    {
    Name = "C"
    }
   0.datalabel([144,666],4,0,-1)
    {
    Name = "Lm"
    }
   0.div([180,540],0,0,190)
    {
    }
   -Wire-([108,576],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   -Wire-([108,576],0,0,-1)
    {
    Vertex="0,0;0,54;72,54"
    }
   -Wire-([108,630],0,0,-1)
    {
    Vertex="0,0;0,72;72,72"
    }
   0.datalabel([108,144],0,0,-1)
    {
    Name = "Fspd"
    }
   0.mult([144,198],0,0,160)
    {
    }
   -Wire-([180,198],0,0,-1)
    {
    Vertex="0,0;36,0;36,-18"
    }
   0.datalabel([144,234],0,0,-1)
    {
    Name = "C"
    }
   0.datalabel([108,198],0,0,-1)
    {
    Name = "Frd"
    }
   0.datalabel([252,324],0,0,-1)
    {
    Name = "Ispq"
    }
   0.sumjct([216,324],6,0,270)
    {
    DPath = "1"
    A = "0"
    B = "-1"
    C = "0"
    D = "1"
    E = "0"
    F = "0"
    G = "0"
    }
   0.mult([144,324],6,0,210)
    {
    }
   0.datalabel([144,288],6,0,-1)
    {
    Name = "A"
    }
   0.datalabel([108,324],0,0,-1)
    {
    Name = "Fspq"
    }
   0.mult([144,378],0,0,250)
    {
    }
   -Wire-([180,378],0,0,-1)
    {
    Vertex="0,0;36,0;36,-18"
    }
   0.datalabel([144,414],0,0,-1)
    {
    Name = "C"
    }
   0.datalabel([108,378],0,0,-1)
    {
    Name = "Frq"
    }
   0.sumjct([450,144],6,0,220)
    {
    DPath = "1"
    A = "0"
    B = "-1"
    C = "0"
    D = "1"
    E = "0"
    F = "0"
    G = "0"
    }
   0.mult([378,144],6,0,150)
    {
    }
   0.datalabel([378,108],6,0,-1)
    {
    Name = "B"
    }
   0.datalabel([342,198],0,0,-1)
    {
    Name = "Fspd"
    }
   0.mult([378,198],0,0,170)
    {
    }
   -Wire-([414,198],0,0,-1)
    {
    Vertex="0,0;36,0;36,-18"
    }
   0.datalabel([378,234],0,0,-1)
    {
    Name = "C"
    }
   0.datalabel([342,144],0,0,-1)
    {
    Name = "Frd"
    }
   0.mult([378,324],6,0,180)
    {
    }
   0.datalabel([378,288],6,0,-1)
    {
    Name = "B"
    }
   0.datalabel([342,378],0,0,-1)
    {
    Name = "Fspq"
    }
   0.mult([378,378],0,0,240)
    {
    }
   -Wire-([414,378],0,0,-1)
    {
    Vertex="0,0;36,0;36,-18"
    }
   0.datalabel([378,414],0,0,-1)
    {
    Name = "C"
    }
   0.datalabel([342,324],0,0,-1)
    {
    Name = "Frq"
    }
   0.sumjct([450,324],6,0,260)
    {
    DPath = "1"
    A = "0"
    B = "-1"
    C = "0"
    D = "1"
    E = "0"
    F = "0"
    G = "0"
    }
   }
  }
 Module("Fluxos")
  {
  Desc = ""
  FileDate = 1526840533
  Nodes = 
   {
   Input("Vspdq",-54,-18)
    {
    Type = Real
    Dim  = [2]
    }
   Input("Wg",-54,36)
    {
    Type = Real
    }
   Input("Wm",-54,54)
    {
    Type = Real
    }
   Output("Fluxo",54,0)
    {
    Type = Real
    Dim  = [4]
    }
   Input("Const",0,-54)
    {
    Type = Real
    Dim  = [8]
    }
   }

  Graphics = 
   {
   Rectangle(-39,-39,39,76)
   Line(-53,-18,-40,-18)
   Line(-53,36,-40,36)
   Line(-53,54,-40,54)
   Line(39,0,54,0)
   Line(0,-54,0,-39)
   Text(4,23,"Fluxo")
   Text(-28,-14,"Vsp")
   Text(-29,40,"Wg")
   Text(-27,58,"Wm")
   Text(26,4,"Flux")
   Text(1,-27,"Const")
   }


  Page(A/A4,Landscape,16,[683,342],5)
   {
   0.datalabel([180,666],0,0,-1)
    {
    Name = "Lsp"
    }
   0.div([216,666],0,0,190)
    {
    }
   0.datalabel([252,666],6,0,-1)
    {
    Name = "B"
    }
   0.datalabel([252,612],6,0,-1)
    {
    Name = "A"
    }
   0.sumjct([108,648],0,0,180)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "0"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.mult([108,576],1,0,140)
    {
    }
   0.import([36,360],0,0,20)
    {
    Name = "Vspdq"
    }
   0.datatap([108,378],0,0,30)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([72,360],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datatap([126,342],6,0,120)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([108,378],0,0,-1)
    {
    Name = "Vspd"
    }
   0.datalabel([126,342],6,0,-1)
    {
    Name = "Vspq"
    }
   0.datalabel([378,72],2,0,-1)
    {
    Name = "Fspd"
    }
   0.datalabel([306,72],6,0,-1)
    {
    Name = "A"
    }
   0.mult([306,108],6,0,280)
    {
    }
   0.datalabel([450,72],6,0,-1)
    {
    Name = "Vspd"
    }
   0.sumjct([450,108],0,0,480)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "-1"
    E = "1"
    F = "1"
    G = "0"
    }
   0.integral([522,108],0,0,490)
    {
    Extrn = "0"
    Reset = "0"
    Mthd = "0"
    noname5 = ""
    INTR = "0"
    INTCLR = "0"
    T = "1"
    Yo = "0.0"
    YRst = "0.0"
    YHi = "1000.0"
    YLo = "-1000.0"
    }
   -Wire-([558,108],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([594,108],0,0,-1)
    {
    Name = "Fspd"
    }
   0.import([36,414],0,0,40)
    {
    Name = "Wg"
    }
   -Wire-([72,414],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([108,414],3,0,-1)
    {
    Name = "Wg"
    }
   0.datalabel([378,180],4,0,-1)
    {
    Name = "Frd"
    }
   0.mult([450,180],5,0,470)
    {
    }
   0.import([36,450],0,0,50)
    {
    Name = "Wm"
    }
   -Wire-([72,450],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([180,450],3,0,-1)
    {
    Name = "Wr"
    }
   0.datalabel([666,450],0,0,-1)
    {
    Name = "Fspd"
    }
   0.datalabel([666,468],0,0,-1)
    {
    Name = "Fspq"
    }
   0.datalabel([666,504],0,0,-1)
    {
    Name = "Frq"
    }
   0.datalabel([666,486],0,0,-1)
    {
    Name = "Frd"
    }
   0.datamerge([648,522],0,0,500)
    {
    N = "4"
    Type = "2"
    Disp = "1"
    }
   0.export([648,576],5,0,510)
    {
    Name = "Fluxo"
    }
   -Wire-([72,36],0,0,-1)
    {
    Vertex="0,0;0,216"
    }
   0.datatap([90,54],0,0,60)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([90,90],0,0,70)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([90,126],0,0,80)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([90,162],0,0,90)
    {
    Index = "4"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([90,198],0,0,100)
    {
    Index = "5"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([90,234],0,0,110)
    {
    Index = "6"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.import([72,288],3,0,10)
    {
    Name = "Const"
    }
   0.datalabel([90,54],4,0,-1)
    {
    Name = "Rsp"
    }
   0.datalabel([90,90],4,0,-1)
    {
    Name = "Lsp"
    }
   0.datalabel([90,126],4,0,-1)
    {
    Name = "Rr"
    }
   0.datalabel([90,162],4,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([90,198],4,0,-1)
    {
    Name = "Lm"
    }
   0.datalabel([90,234],4,0,-1)
    {
    Name = "Pp"
    }
   0.mult([108,720],5,0,150)
    {
    }
   0.datalabel([180,612],4,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([108,756],4,0,-1)
    {
    Name = "Lm"
    }
   0.datalabel([72,576],5,0,-1)
    {
    Name = "Lsp"
    }
   0.datalabel([108,540],2,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([72,720],5,0,-1)
    {
    Name = "Lm"
    }
   0.div([216,738],0,0,200)
    {
    }
   0.datalabel([252,738],6,0,-1)
    {
    Name = "C"
    }
   0.datalabel([180,738],4,0,-1)
    {
    Name = "Lm"
    }
   0.div([216,612],0,0,270)
    {
    }
   -Wire-([144,648],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   -Wire-([144,648],0,0,-1)
    {
    Vertex="0,0;0,54;72,54"
    }
   -Wire-([144,702],0,0,-1)
    {
    Vertex="0,0;0,72;72,72"
    }
   0.datalabel([270,108],2,0,-1)
    {
    Name = "Rsp"
    }
   0.mult([378,108],6,0,300)
    {
    }
   0.datalabel([306,180],0,0,-1)
    {
    Name = "C"
    }
   0.mult([306,144],0,0,210)
    {
    }
   0.datalabel([270,144],4,0,-1)
    {
    Name = "Rsp"
    }
   0.mult([378,144],0,0,320)
    {
    }
   0.datalabel([378,270],2,0,-1)
    {
    Name = "Fspq"
    }
   0.datalabel([306,270],6,0,-1)
    {
    Name = "A"
    }
   0.mult([306,306],6,0,290)
    {
    }
   0.datalabel([450,270],6,0,-1)
    {
    Name = "Vspq"
    }
   0.sumjct([450,306],0,0,420)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "-1"
    E = "1"
    F = "-1"
    G = "0"
    }
   0.integral([522,306],0,0,430)
    {
    Extrn = "0"
    Reset = "0"
    Mthd = "0"
    noname5 = ""
    INTR = "0"
    INTCLR = "0"
    T = "1"
    Yo = "0.0"
    YRst = "0.0"
    YHi = "1000.0"
    YLo = "-1000.0"
    }
   -Wire-([558,306],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([594,306],0,0,-1)
    {
    Name = "Fspq"
    }
   0.datalabel([378,378],4,0,-1)
    {
    Name = "Frq"
    }
   0.datalabel([414,378],0,0,-1)
    {
    Name = "Wg"
    }
   0.mult([450,378],5,0,310)
    {
    }
   0.datalabel([270,306],2,0,-1)
    {
    Name = "Rsp"
    }
   0.mult([378,306],6,0,400)
    {
    }
   0.datalabel([306,378],0,0,-1)
    {
    Name = "C"
    }
   0.mult([306,342],0,0,240)
    {
    }
   0.datalabel([270,342],4,0,-1)
    {
    Name = "Rsp"
    }
   0.datalabel([450,414],0,0,-1)
    {
    Name = "Fspd"
    }
   0.datalabel([900,180],4,0,-1)
    {
    Name = "Fspd"
    }
   0.mult([936,72],6,0,340)
    {
    }
   0.sumjct([972,144],0,0,370)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "1"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.integral([1044,144],0,0,380)
    {
    Extrn = "0"
    Reset = "0"
    Mthd = "0"
    noname5 = ""
    INTR = "0"
    INTCLR = "0"
    T = "1"
    Yo = "0.0"
    YRst = "0.0"
    YHi = "1000.0"
    YLo = "-1000.0"
    }
   -Wire-([1080,144],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([1116,144],0,0,-1)
    {
    Name = "Frd"
    }
   0.datalabel([864,36],6,0,-1)
    {
    Name = "Wg"
    }
   0.datalabel([828,180],0,0,-1)
    {
    Name = "C"
    }
   0.mult([828,144],0,0,220)
    {
    }
   0.datalabel([792,144],4,0,-1)
    {
    Name = "Rr"
    }
   0.mult([900,144],0,0,360)
    {
    }
   0.datalabel([828,72],1,0,-1)
    {
    Name = "Wr"
    }
   0.sumjct([864,72],0,0,160)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "-1"
    E = "0"
    F = "0"
    G = "0"
    }
   0.datalabel([936,36],6,0,-1)
    {
    Name = "Frq"
    }
   -Wire-([972,108],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.datalabel([864,252],0,0,-1)
    {
    Name = "B"
    }
   0.mult([864,216],0,0,230)
    {
    }
   0.datalabel([828,216],4,0,-1)
    {
    Name = "Rr"
    }
   0.mult([936,216],0,0,330)
    {
    }
   0.datalabel([936,252],0,0,-1)
    {
    Name = "Frd"
    }
   -Wire-([972,216],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.datalabel([900,450],4,0,-1)
    {
    Name = "Fspq"
    }
   0.mult([936,342],6,0,390)
    {
    }
   0.sumjct([972,414],0,0,450)
    {
    DPath = "1"
    A = "0"
    B = "-1"
    C = "0"
    D = "1"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.integral([1044,414],0,0,460)
    {
    Extrn = "0"
    Reset = "0"
    Mthd = "0"
    noname5 = ""
    INTR = "0"
    INTCLR = "0"
    T = "1"
    Yo = "0.0"
    YRst = "0.0"
    YHi = "1000.0"
    YLo = "-1000.0"
    }
   -Wire-([1080,414],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([1116,414],0,0,-1)
    {
    Name = "Frq"
    }
   0.datalabel([864,306],6,0,-1)
    {
    Name = "Wg"
    }
   0.datalabel([828,450],0,0,-1)
    {
    Name = "C"
    }
   0.mult([828,414],0,0,250)
    {
    }
   0.datalabel([792,414],4,0,-1)
    {
    Name = "Rr"
    }
   0.mult([900,414],0,0,440)
    {
    }
   0.datalabel([828,342],1,0,-1)
    {
    Name = "Wr"
    }
   0.sumjct([864,342],0,0,170)
    {
    DPath = "1"
    A = "0"
    B = "1"
    C = "0"
    D = "-1"
    E = "0"
    F = "0"
    G = "0"
    }
   0.datalabel([936,306],6,0,-1)
    {
    Name = "Frd"
    }
   -Wire-([972,378],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.datalabel([864,522],0,0,-1)
    {
    Name = "B"
    }
   0.mult([864,486],0,0,260)
    {
    }
   0.datalabel([828,486],4,0,-1)
    {
    Name = "Rr"
    }
   0.mult([936,486],0,0,350)
    {
    }
   0.datalabel([936,522],0,0,-1)
    {
    Name = "Frq"
    }
   -Wire-([972,486],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.mult([378,342],0,0,410)
    {
    }
   0.mult([144,450],0,0,130)
    {
    }
   0.datalabel([144,486],4,0,-1)
    {
    Name = "Pp"
    }
   0.datalabel([450,216],0,0,-1)
    {
    Name = "Wg"
    }
   0.datalabel([414,180],0,0,-1)
    {
    Name = "Fspq"
    }
   }
  }
 Module("CDFIGmodel")
  {
  Desc = ""
  FileDate = 1526840533
  Nodes = 
   {
   Input("TL",0,-72)
    {
    Type = Real
    }
   Electrical("VspA",-54,-36)
    {
    }
   Electrical("VspB",-54,0)
    {
    }
   Electrical("VspC",-54,36)
    {
    }
   Output("M",0,72)
    {
    Type = Real
    Dim  = [3]
    }
   }

  Graphics = 
   {
   Rectangle(-39,-57,39,57)
   Pen(ByNode,ByNode,ByNode)
   Line(0,-72,0,-57)
   Pen(,Solid)
   Line(0,-57,-5,-62)
   Line(0,-57,5,-62)
   Pen(,ByNode,,VspA)
   Line(-54,-36,-39,-36)
   Pen(,,,VspB)
   Line(-54,0,-39,0)
   Pen(,,,VspC)
   Line(-54,36,-39,36)
   Pen(,,,M)
   Line(0,72,0,57)
   Text(-1,-22,"DFIG")
   Text(0,-46,"TL")
   Text(-24,-40,"VspA")
   Text(-24,-5,"VspB")
   Text(-23,32,"VspC")
   Text(-1,52,"M")
   Text(-3,15,"Gaiola")
   }


  Page(A/A4,Landscape,16,[683,342],5)
   {
   0.import([576,360],5,0,80)
    {
    Name = "TL"
    }
   0.xnode([36,72],0,0,-1)
    {
    Name = "Vspa"
    }
   0.xnode([36,144],0,0,-1)
    {
    Name = "VspB"
    }
   0.xnode([36,216],0,0,-1)
    {
    Name = "VspC"
    }
   .Fluxos([306,270],0,0,180)
    {
    }
   .Correntes([468,288],0,0,140)
    {
    }
   .Torque([630,306],0,0,150)
    {
    }
   -Wire-([360,270],0,0,-1)
    {
    Vertex="0,0;54,0"
    }
   -Wire-([522,288],0,0,-1)
    {
    Vertex="0,0;54,0"
    }
   0.datalabel([252,252],6,0,-1)
    {
    Name = "Vsp"
    }
   0.datalabel([684,288],3,0,-1)
    {
    Name = "Teta_R"
    }
   0.datalabel([684,324],0,0,-1)
    {
    Name = "Wm"
    }
   0.datalabel([216,342],0,0,-1)
    {
    Name = "Wm"
    }
   -Wire-([216,342],0,0,-1)
    {
    Vertex="0,0;0,-36;36,-36"
    }
   -Wire-([252,324],0,0,-1)
    {
    Vertex="0,0;-36,0"
    }
   0.datamerge([396,144],4,0,170)
    {
    N = "2"
    Type = "2"
    Disp = "0"
    }
   0.datalabel([396,126],0,0,-1)
    {
    Name = "Vsp"
    }
   0.datalabel([306,162],0,0,-1)
    {
    Name = "Teta_R"
    }
   0.src_ccin_1([144,72],2,0,320)
    {
    Name = "Source 1"
    Cntrl = "1"
    Vm = "132.79 [kA]"
    f = "60.0 [Hz]"
    Ph = "0.0 [deg]"
    Tc = "1.0 [s]"
    }
   0.voltmetergnd([90,72],0,0,10)
    {
    Name = "VspAm"
    }
   0.datalabel([144,36],2,0,-1)
    {
    Name = "IspA"
    }
   0.ground([144,72],0,0,-1)
    {
    }
   -Wire-([36,72],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   0.src_ccin_1([144,144],2,0,300)
    {
    Name = "Source 1"
    Cntrl = "1"
    Vm = "132.79 [kA]"
    f = "60.0 [Hz]"
    Ph = "0.0 [deg]"
    Tc = "1.0 [s]"
    }
   0.voltmetergnd([90,144],0,0,20)
    {
    Name = "VspBm"
    }
   0.datalabel([144,108],2,0,-1)
    {
    Name = "IspB"
    }
   0.ground([144,144],0,0,-1)
    {
    }
   -Wire-([36,144],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   0.src_ccin_1([144,216],2,0,290)
    {
    Name = "Source 1"
    Cntrl = "1"
    Vm = "132.79 [kA]"
    f = "60.0 [Hz]"
    Ph = "0.0 [deg]"
    Tc = "1.0 [s]"
    }
   0.voltmetergnd([90,216],0,0,30)
    {
    Name = "VspCm"
    }
   0.datalabel([144,180],2,0,-1)
    {
    Name = "IspC"
    }
   0.ground([144,216],0,0,-1)
    {
    }
   -Wire-([36,216],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   0.datalabel([252,54],0,0,-1)
    {
    Name = "VspAm"
    }
   0.datalabel([252,90],0,0,-1)
    {
    Name = "VspBm"
    }
   0.datalabel([252,126],0,0,-1)
    {
    Name = "VspCm"
    }
   0.datalabel([144,288],4,0,-1)
    {
    Name = "Rsp"
    }
   0.datalabel([144,306],4,0,-1)
    {
    Name = "Lsp"
    }
   0.datalabel([144,324],4,0,-1)
    {
    Name = "Rr"
    }
   0.datalabel([144,342],4,0,-1)
    {
    Name = "Lr"
    }
   0.datalabel([144,360],4,0,-1)
    {
    Name = "Lm"
    }
   0.datalabel([144,378],4,0,-1)
    {
    Name = "Pp"
    }
   0.datalabel([126,450],0,0,-1)
    {
    Name = "Const"
    }
   0.datalabel([306,216],6,0,-1)
    {
    Name = "Const"
    }
   0.datalabel([468,234],6,0,-1)
    {
    Name = "Const"
    }
   -Wire-([558,288],0,0,-1)
    {
    Vertex="0,0;0,-54"
    }
   0.datalabel([558,234],6,0,-1)
    {
    Name = "I_DQ"
    }
   0.datatap([252,450],0,0,200)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([252,486],0,0,240)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([234,468],0,0,-1)
    {
    Vertex="0,0;0,-54"
    }
   0.datalabel([306,540],0,0,-1)
    {
    Name = "Teta_R"
    }
   0.datalabel([360,432],3,0,-1)
    {
    Name = "IspA"
    }
   0.datalabel([360,468],3,0,-1)
    {
    Name = "IspB"
    }
   0.datalabel([360,504],3,0,-1)
    {
    Name = "IspC"
    }
   0.datatap([486,450],0,0,190)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([486,486],0,0,220)
    {
    Index = "4"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([468,468],0,0,-1)
    {
    Vertex="0,0;0,-54"
    }
   0.datalabel([594,432],3,0,-1)
    {
    Name = "IrA"
    }
   0.datalabel([594,468],3,0,-1)
    {
    Name = "IrB"
    }
   0.datalabel([594,504],3,0,-1)
    {
    Name = "IrC"
    }
   0.datalabel([666,432],0,0,-1)
    {
    Name = "Wm"
    }
   0.datalabel([450,108],0,0,-1)
    {
    Name = "Vsp3"
    }
   0.datalabel([468,36],6,0,-1)
    {
    Name = "VspAm"
    }
   0.datalabel([234,414],6,0,-1)
    {
    Name = "I_DQ"
    }
   0.datalabel([468,414],6,0,-1)
    {
    Name = "I_DQ"
    }
   0.datamerge([450,108],0,0,310)
    {
    N = "3"
    Type = "2"
    Disp = "0"
    }
   0.datalabel([468,54],6,0,-1)
    {
    Name = "VspBm"
    }
   0.datalabel([468,72],6,0,-1)
    {
    Name = "VspCm"
    }
   0.datalabel([288,594],6,0,-1)
    {
    Name = "IspA"
    }
   0.datamerge([270,666],0,0,270)
    {
    N = "3"
    Type = "2"
    Disp = "0"
    }
   0.datalabel([288,612],6,0,-1)
    {
    Name = "IspB"
    }
   0.datalabel([288,630],6,0,-1)
    {
    Name = "IspC"
    }
   0.datalabel([270,666],0,0,-1)
    {
    Name = "Isp"
    }
   0.datalabel([522,594],6,0,-1)
    {
    Name = "IrA"
    }
   0.datamerge([504,666],0,0,260)
    {
    N = "3"
    Type = "2"
    Disp = "0"
    }
   0.datalabel([522,612],6,0,-1)
    {
    Name = "IrB"
    }
   0.datalabel([522,630],6,0,-1)
    {
    Name = "IrC"
    }
   0.datalabel([504,666],0,0,-1)
    {
    Name = "Ir"
    }
   0.datalabel([630,252],6,0,-1)
    {
    Name = "Const"
    }
   0.datamerge([648,504],0,0,210)
    {
    N = "3"
    Type = "2"
    Disp = "0"
    }
   0.datamerge([126,360],0,0,130)
    {
    N = "8"
    Type = "2"
    Disp = "1"
    }
   0.export([648,540],3,0,280)
    {
    Name = "M"
    }
   0.datalabel([540,540],0,0,-1)
    {
    Name = "Teta_R"
    }
   -Wire-([360,72],0,0,-1)
    {
    Vertex="0,0;18,0"
    }
   -Wire-([360,108],0,0,-1)
    {
    Vertex="0,0;18,0;18,-18"
    }
   0.datalabel([144,414],3,0,-1)
    {
    Name = "Atr"
    }
   0.datalabel([144,396],3,0,-1)
    {
    Name = "J"
    }
   0.datalabel([666,450],4,0,-1)
    {
    Name = "Te"
    }
   0.datalabel([630,360],4,0,-1)
    {
    Name = "Te"
    }
   0.datalabel([666,468],0,0,-1)
    {
    Name = "Teta_R"
    }
   0.const([36,288],0,0,40)
    {
    Name = "Rsp"
    Value = "1.115"
    }
   0.datalabel([72,288],3,0,-1)
    {
    Name = "Rsp"
    }
   0.const([36,324],0,0,50)
    {
    Name = "Lsp"
    Value = "0.209674"
    }
   0.datalabel([72,324],3,0,-1)
    {
    Name = "Lsp"
    }
   0.const([36,360],0,0,60)
    {
    Name = "Rr"
    Value = "1.083"
    }
   0.datalabel([72,360],3,0,-1)
    {
    Name = "Rr"
    }
   0.const([36,396],0,0,70)
    {
    Name = "Lr"
    Value = "0.209674"
    }
   0.datalabel([72,396],3,0,-1)
    {
    Name = "Lr"
    }
   0.const([36,432],0,0,90)
    {
    Name = "Lm"
    Value = ".2037"
    }
   0.datalabel([72,432],3,0,-1)
    {
    Name = "Lm"
    }
   0.const([36,468],0,0,100)
    {
    Name = "Pp"
    Value = "2"
    }
   0.datalabel([72,468],3,0,-1)
    {
    Name = "Pp"
    }
   0.const([36,504],0,0,110)
    {
    Name = "J"
    Value = "0.02"
    }
   0.datalabel([72,504],3,0,-1)
    {
    Name = "J"
    }
   0.const([36,540],0,0,120)
    {
    Name = "Atr"
    Value = "0.005752"
    }
   0.datalabel([72,540],3,0,-1)
    {
    Name = "Atr"
    }
   1.DQtoABC([540,468],0,0,230)
    {
    inv = "0"
    }
   1.DQtoABC([306,468],0,0,250)
    {
    inv = "0"
    }
   1.ABCtoDQ([306,90],0,0,160)
    {
    inv = "0"
    }
   }
  }
 Module("Main")
  {
  Desc = ""
  FileDate = 1526840533
  Nodes = 
   {
   }

  Graphics = 
   {
   Rectangle(-18,-18,18,18)
   }


  Page(B/A3,Landscape,16,[683,342],5)
   {
   .CDFIGmodel([432,144],0,0,420)
    {
    }
   0.datatap([450,234],0,0,430)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Sticky-([0,0],0)
    {
    Name = ""
    Font = 1
    Bounds = 0,0,198,234
    Alignment = 0
    Style = 1
    Arrow = 0
    Color = 0,15792890
    Text = "\
Motor Indução (dados Simulink/MatLab)

Potencia: 5HP (3730 W) 
Tensão (Vff rms): 460 V
Velocidade: 1750 Rpm (183.26 Rad/s)
Corrente nominal: 6.36 A rms (9 A Pico)
Polos: 4 (2 pares de polos)
 Rs: 1.115 Ohms
Rr: 1.083 Ohms
Lls e Llr: 0.005974 H
Lm: 0.2037 H
J: 0.02 Kg.m^2
Atr: 0.005752 N.m.s

Obs.: Ls(r) = Lls(r) + Lm"
    }
   -Sticky-([0,234],0)
    {
    Name = ""
    Font = 1
    Bounds = 0,234,198,270
    Alignment = 0
    Style = 1
    Arrow = 0
    Color = 255,16777215
    Text = "\
Torque nominal: 20.35 (Valor Calculado)

"
    }
   0.buffer([54,594],0,0,510)
    {
    HI = "1"
    LO = "0"
    Inv = "0"
    INTR = "0"
    }
   -Wire-([90,594],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   0.inv([126,630],0,0,560)
    {
    INTR = "0"
    }
   -Wire-([126,630],0,0,-1)
    {
    Vertex="0,0;-18,0;-18,-36"
    }
   -Wire-([90,684],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   0.inv([126,720],0,0,550)
    {
    INTR = "0"
    }
   -Wire-([126,720],0,0,-1)
    {
    Vertex="0,0;-18,0;-18,-36"
    }
   -Wire-([90,774],0,0,-1)
    {
    Vertex="0,0;72,0"
    }
   0.inv([126,810],0,0,540)
    {
    INTR = "0"
    }
   -Wire-([126,810],0,0,-1)
    {
    Vertex="0,0;-18,0;-18,-36"
    }
   0.buffer([54,684],0,0,500)
    {
    HI = "1"
    LO = "0"
    Inv = "0"
    INTR = "0"
    }
   0.buffer([54,774],0,0,490)
    {
    HI = "1"
    LO = "0"
    Inv = "0"
    INTR = "0"
    }
   0.datalabel([162,594],0,0,-1)
    {
    Name = "G1m"
    }
   0.datalabel([162,630],0,0,-1)
    {
    Name = "G4m"
    }
   0.datalabel([162,774],0,0,-1)
    {
    Name = "G3m"
    }
   0.datalabel([162,810],0,0,-1)
    {
    Name = "G6m"
    }
   0.datalabel([162,720],0,0,-1)
    {
    Name = "G5m"
    }
   0.datalabel([162,684],0,0,-1)
    {
    Name = "G2m"
    }
   0.datalabel([54,594],1,0,-1)
    {
    Name = "Arm1"
    }
   0.datalabel([54,684],1,0,-1)
    {
    Name = "Arm2"
    }
   0.datalabel([54,774],1,0,-1)
    {
    Name = "Arm3"
    }
   0.datalabel([450,504],0,0,-1)
    {
    Name = "Arm3"
    }
   0.datalabel([450,468],0,0,-1)
    {
    Name = "Arm2"
    }
   0.datalabel([450,432],0,0,-1)
    {
    Name = "Arm1"
    }
   0.breakout([342,144],0,0,-1)
    {
    Dis = "0"
    }
   0.multimeter([324,144],0,0,60)
    {
    MeasI = "1"
    MeasV = "1"
    MeasP = "1"
    MeasQ = "1"
    RMS = "0"
    MeasPh = "0"
    S = "1.0 [MVA]"
    BaseV = "1.0 [kV]"
    TS = "0.02 [s]"
    Freq = "60.0 [Hz]"
    Dis = "1"
    CurI = "Is"
    VolI = "Vs"
    P = "Ps"
    Q = "Qs"
    Vrms = ""
    Ph = ""
    hide1 = "1"
    hide2 = "1"
    Pd = "3813"
    Qd = "2830"
    Vd = ""
    }
   0.breakout([306,144],4,0,-1)
    {
    Dis = "0"
    }
   0.nodelabel([198,108],4,0,-1)
    {
    Name = "Am"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   0.nodelabel([198,144],4,0,-1)
    {
    Name = "Bm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   0.nodelabel([198,180],4,0,-1)
    {
    Name = "Cm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([270,108],0,0,-1)
    {
    Vertex="0,0;-72,0"
    }
   -Wire-([270,144],0,0,-1)
    {
    Vertex="0,0;-72,0"
    }
   -Wire-([270,180],0,0,-1)
    {
    Vertex="0,0;-72,0"
    }
   0.pgb([684,54],0,122308016,30)
    {
    Name = "Wref"
    Group = ""
    Display = "1"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([450,234],0,0,-1)
    {
    Name = "Wm"
    }
   -SrcFile-([612,360],0)
    {
   Name = "vectorcontrol.c"
    }
   0.datatap([198,432],0,0,80)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([198,468],0,0,90)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datalabel([180,396],6,0,-1)
    {
    Name = "Is"
    }
   -Wire-([180,396],0,0,-1)
    {
    Vertex="0,0;0,54"
    }
   0.datalabel([234,558],0,0,-1)
    {
    Name = "Wref"
    }
   0.pgb([252,378],4,122314136,740)
    {
    Name = "Id_ref"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([432,72],5,0,-1)
    {
    Name = "Tl"
    }
   0.datatap([252,378],4,0,730)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([288,378],0,0,710)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([270,396],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.pgb([288,378],0,122304752,720)
    {
    Name = "Iq_ref"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([486,36],0,0,-1)
    {
    Name = "Wm"
    }
   0.polar_rec([198,1062],0,0,240)
    {
    Dir = "1"
    AngUnit = "0"
    }
   0.sumjct([288,1080],0,0,270)
    {
    DPath = "1"
    A = "0"
    B = "0"
    C = "0"
    D = "1"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.emtconst([252,1116],0,0,250)
    {
    Name = ""
    Value = "4"
    }
   0.datalabel([126,378],0,0,-1)
    {
    Name = "ExIq"
    }
   0.datalabel([126,360],0,0,-1)
    {
    Name = "ExId"
    }
   0.datalabel([18,360],0,0,-1)
    {
    Name = "ExVd"
    }
   0.datalabel([54,324],2,0,-1)
    {
    Name = "Exf"
    }
   0.datalabel([324,1080],0,0,-1)
    {
    Name = "Theta"
    }
   0.emtconst([468,1116],0,0,260)
    {
    Name = ""
    Value = "1"
    }
   0.div([504,1080],0,0,300)
    {
    }
   0.datalabel([540,1080],0,0,-1)
    {
    Name = "Exf"
    }
   0.ratelimit([432,1080],0,0,290)
    {
    IR = "100000 [1/s]"
    DR = "100000 [1/s]"
    COM = "Rate_Limiter"
    }
   0.derivative([360,1080],0,0,280)
    {
    T = "1 [s]"
    COM = "Derivative"
    }
   0.pgb([72,450],1,122327600,700)
    {
    Name = "W_est"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([72,450],0,0,-1)
    {
    Name = "West"
    }
   0.datalabel([378,828],0,0,-1)
    {
    Name = "Theta"
    }
   0.datalabel([378,990],0,0,-1)
    {
    Name = "Theta"
    }
   0.datalabel([432,738],0,0,-1)
    {
    Name = "ExVd"
    }
   0.datalabel([432,900],0,0,-1)
    {
    Name = "ExId"
    }
   0.datalabel([432,936],0,0,-1)
    {
    Name = "ExIq"
    }
   0.datalabel([432,774],0,0,-1)
    {
    Name = "ExVq"
    }
   0.pgb([540,1080],3,122322296,630)
    {
    Name = "f"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   1.CargaLinear([432,36],0,0,410)
    {
    k = "1.47"
    A = "0.1"
    }
   1.REDEneural([72,396],0,0,380)
    {
    }
   1.controlcarlos([288,468],0,0,400)
    {
    }
   1.ABCtoDQ([378,918],0,0,330)
    {
    inv = "0"
    }
   1.ABCtoDQ([378,756],0,0,320)
    {
    inv = "0"
    }
   1.ABCtoAlfBet([108,1062],0,0,230)
    {
    inv = "1"
    }
   0.datalabel([54,1026],0,0,-1)
    {
    Name = "A"
    }
   0.datalabel([324,720],0,0,-1)
    {
    Name = "A"
    }
   0.datalabel([54,1062],0,0,-1)
    {
    Name = "B"
    }
   0.datalabel([324,756],0,0,-1)
    {
    Name = "B"
    }
   0.datalabel([324,792],0,0,-1)
    {
    Name = "C"
    }
   0.datalabel([54,1098],0,0,-1)
    {
    Name = "C"
    }
   0.datalabel([684,54],0,0,-1)
    {
    Name = "Wref"
    }
   0.time-sig([540,54],0,0,10)
    {
    }
   0.datalabel([612,198],0,0,-1)
    {
    Name = "West"
    }
   0.pgb([720,198],3,122342696,820)
    {
    Name = "W_est_Filtro"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([234,594],0,0,-1)
    {
    Name = "West"
    }
   0.datalabel([720,198],0,0,-1)
    {
    Name = "West_filtro"
    }
   0.datalabel([270,558],0,0,-1)
    {
    Name = "West_filtro"
    }
   0.datalabel([702,1044],0,0,-1)
    {
    Name = "West"
    }
   0.datalabel([666,1008],6,0,-1)
    {
    Name = "Wm"
    }
   0.sumjct([702,1008],0,0,450)
    {
    DPath = "1"
    A = "0"
    B = "0"
    C = "0"
    D = "1"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.pgb([738,1008],0,122339432,670)
    {
    Name = "Erro (rad/s)"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([792,1008],6,0,-1)
    {
    Name = "Wm"
    }
   0.sumjct([828,1008],0,0,440)
    {
    DPath = "1"
    A = "0"
    B = "0"
    C = "0"
    D = "1"
    E = "0"
    F = "-1"
    G = "0"
    }
   0.pgb([864,1008],0,122332088,660)
    {
    Name = "Erro Filtro (rad/s)"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([828,1044],0,0,-1)
    {
    Name = "West_filtro"
    }
   0.div([864,1044],7,0,470)
    {
    }
   0.datalabel([900,1044],2,0,-1)
    {
    Name = "Wm"
    }
   0.gain([864,1116],7,0,520)
    {
    G = "100"
    COM = "Gain"
    Dim = "1"
    }
   0.pgb([864,1152],0,122341064,600)
    {
    Name = "Erro Filtro %"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([774,1044],2,0,-1)
    {
    Name = "Wm"
    }
   0.gain([738,1116],7,0,530)
    {
    G = "100"
    COM = "Gain"
    Dim = "1"
    }
   0.pgb([738,1152],0,122332496,610)
    {
    Name = "Erro %"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.div([738,1044],7,0,480)
    {
    }
   0.datalabel([18,378],0,0,-1)
    {
    Name = "ExVq"
    }
   -Wire-([612,198],0,0,-1)
    {
    Vertex="0,0;18,0"
    }
   -Wire-([234,1080],0,0,-1)
    {
    Vertex="0,0;18,0"
    }
   0.datatap([252,342],4,0,770)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([288,342],0,0,750)
    {
    Index = "4"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([270,360],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.pgb([288,342],0,122331272,760)
    {
    Name = "Vq_ref"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.pgb([252,342],4,122339024,780)
    {
    Name = "Vd_ref"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.pgb([288,306],0,122332904,800)
    {
    Name = "Int_e_w"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datatap([288,306],6,0,790)
    {
    Index = "5"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.pgb([342,432],3,122531664,690)
    {
    Name = "Va"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([324,558],0,0,-1)
    {
    Name = "Wrampa"
    }
   0.pgb([360,558],0,122529216,680)
    {
    Name = "Wrampa"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([18,396],0,0,-1)
    {
    Name = "vd1"
    }
   0.datalabel([126,396],0,0,-1)
    {
    Name = "id1"
    }
   0.datalabel([126,414],0,0,-1)
    {
    Name = "iq1"
    }
   0.tdelay([990,1152],0,0,310)
    {
    T = "0.1 [ms]"
    N = "100"
    Intp = "0"
    COM = "Delay"
    }
   0.datalabel([1026,1152],0,0,-1)
    {
    Name = "f1"
    }
   0.datalabel([90,324],2,0,-1)
    {
    Name = "f1"
    }
   0.datalabel([18,414],0,0,-1)
    {
    Name = "vq1"
    }
   1.svpwm([396,468],0,0,460)
    {
    }
   -SrcFile-([612,468],0)
    {
   Name = "svpwm.C"
    }
   -Wire-([270,558],0,0,-1)
    {
    Vertex="0,0;0,-18"
    }
   -Wire-([360,558],0,0,-1)
    {
    Vertex="0,0;-54,0;-54,-18"
    }
   -SrcFile-([612,270],0)
    {
   Name = "rna_iq-iq1-vd1-vd-id1-id_6.c"
    }
   -Plot-([1584,216],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,414,198]
    Posn = [1584,216]
    Icon = [-1,-1]
    Extents = 0,0,414,198
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,414,135],"y")
     {
     Options = 129
     Units = ""
     Curve(122339024,"Vd_ref",0,,,)
     Curve(122331272,"Vq_ref",0,,,)
     }
    }
   1.Wref_teste([630,54],0,0,20)
    {
    }
   1.velocidade_ref([630,108],0,0,50)
    {
    }
   0.time-sig([540,108],0,0,40)
    {
    }
   0.datalabel([324,594],0,0,-1)
    {
    Name = "Wm"
    }
   0.pgb([450,234],0,122525136,810)
    {
    Name = "Wm"
    Group = ""
    Display = "1"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   -Wire-([576,144],0,0,-1)
    {
    Vertex="0,0;18,0"
    }
   0.datatap([198,504],0,0,100)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([180,486],0,0,-1)
    {
    Vertex="0,0;0,-36"
    }
   0.datalabel([954,1008],0,0,-1)
    {
    Name = "ExVd"
    }
   0.datalabel([954,1080],0,0,-1)
    {
    Name = "ExId"
    }
   0.datalabel([954,1116],0,0,-1)
    {
    Name = "ExIq"
    }
   0.datalabel([954,1044],0,0,-1)
    {
    Name = "ExVq"
    }
   0.tdelay([990,1008],0,0,340)
    {
    T = "0.1 [ms]"
    N = "100"
    Intp = "0"
    COM = "Delay"
    }
   0.tdelay([990,1116],0,0,370)
    {
    T = "0.1 [ms]"
    N = "100"
    Intp = "0"
    COM = "Delay"
    }
   0.tdelay([990,1080],0,0,360)
    {
    T = "0.1 [ms]"
    N = "100"
    Intp = "0"
    COM = "Delay"
    }
   0.datalabel([1026,1008],0,0,-1)
    {
    Name = "vd1"
    }
   0.datalabel([1026,1080],0,0,-1)
    {
    Name = "id1"
    }
   0.datalabel([1026,1116],0,0,-1)
    {
    Name = "iq1"
    }
   0.datalabel([1026,1044],0,0,-1)
    {
    Name = "vq1"
    }
   0.tdelay([990,1044],0,0,350)
    {
    T = "0.1 [ms]"
    N = "100"
    Intp = "0"
    COM = "Delay"
    }
   0.datalabel([954,1152],0,0,-1)
    {
    Name = "Exf"
    }
   -Wire-([720,198],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.datalabel([234,990],0,0,-1)
    {
    Name = "Is"
    }
   0.datatap([252,882],0,0,170)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([252,918],0,0,190)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([252,954],0,0,210)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([234,864],0,0,-1)
    {
    Vertex="0,0;0,126"
    }
   0.trans_filt([288,882],0,0,180)
    {
    Order = "2"
    Band = "1"
    Type = "1"
    Cnfg = "0"
    FBase = "600.0 [Hz]"
    Flow = "10.0 [Hz]"
    Fup = "100.0 [Hz]"
    Q = "5"
    PRip = "0.1 [dB]"
    }
   0.trans_filt([288,918],0,0,200)
    {
    Order = "2"
    Band = "1"
    Type = "1"
    Cnfg = "0"
    FBase = "600.0 [Hz]"
    Flow = "10.0 [Hz]"
    Fup = "100.0 [Hz]"
    Q = "5"
    PRip = "0.1 [dB]"
    }
   0.trans_filt([288,954],0,0,220)
    {
    Order = "2"
    Band = "1"
    Type = "1"
    Cnfg = "0"
    FBase = "600.0 [Hz]"
    Flow = "10.0 [Hz]"
    Fup = "100.0 [Hz]"
    Q = "5"
    PRip = "0.1 [dB]"
    }
   0.datalabel([234,828],0,0,-1)
    {
    Name = "Vs"
    }
   0.datatap([252,720],0,0,110)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([252,756],0,0,130)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([252,792],0,0,150)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([234,702],0,0,-1)
    {
    Vertex="0,0;0,126"
    }
   0.trans_filt([288,720],0,0,120)
    {
    Order = "2"
    Band = "1"
    Type = "1"
    Cnfg = "0"
    FBase = "600.0 [Hz]"
    Flow = "10.0 [Hz]"
    Fup = "100.0 [Hz]"
    Q = "5"
    PRip = "0.1 [dB]"
    }
   0.trans_filt([288,756],0,0,140)
    {
    Order = "2"
    Band = "1"
    Type = "1"
    Cnfg = "0"
    FBase = "600.0 [Hz]"
    Flow = "10.0 [Hz]"
    Fup = "100.0 [Hz]"
    Q = "5"
    PRip = "0.1 [dB]"
    }
   0.trans_filt([288,792],0,0,160)
    {
    Order = "2"
    Band = "1"
    Type = "1"
    Cnfg = "0"
    FBase = "600.0 [Hz]"
    Flow = "10.0 [Hz]"
    Fup = "100.0 [Hz]"
    Q = "5"
    PRip = "0.1 [dB]"
    }
   0.peswitch([1512,990],6,0,620)
    {
    L = "1"
    Type = "3"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   0.peswitch([1476,1026],4,0,-1)
    {
    L = "1"
    Type = "0"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   -Wire-([1512,990],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([1512,1026],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([1368,990],6,0,640)
    {
    L = "3"
    Type = "3"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   0.peswitch([1332,1026],4,0,-1)
    {
    L = "3"
    Type = "0"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   -Wire-([1368,990],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([1368,1026],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([1224,990],6,0,650)
    {
    L = "5"
    Type = "3"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   0.peswitch([1188,1026],4,0,-1)
    {
    L = "5"
    Type = "0"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   -Wire-([1224,990],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([1224,1026],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([1512,1134],6,0,570)
    {
    L = "4"
    Type = "3"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   0.peswitch([1476,1170],4,0,-1)
    {
    L = "4"
    Type = "0"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   -Wire-([1512,1134],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([1512,1170],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([1368,1134],6,0,580)
    {
    L = "6"
    Type = "3"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   0.peswitch([1332,1170],4,0,-1)
    {
    L = "6"
    Type = "0"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   -Wire-([1368,1134],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([1368,1170],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([1224,1134],6,0,590)
    {
    L = "2"
    Type = "3"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   0.peswitch([1188,1170],4,0,-1)
    {
    L = "2"
    Type = "0"
    SNUB = "0"
    INTR = "0"
    RON = "0.01 [ohm]"
    ROFF = "1.0E6 [ohm]"
    EFVD = "0.0 [kV]"
    EBO = "1.0E5 [kV]"
    Erw = "1.0E5 [kV]"
    TEXT = "0.0 [us]"
    RD = "5000.0 [ohm]"
    CD = "0.05 [uF]"
    PFB = "0"
    I = ""
    It = ""
    V = ""
    Ton = ""
    Toff = ""
    Alpha = ""
    Gamma = ""
    }
   -Wire-([1224,1134],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([1224,1170],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.datalabel([1548,1026],4,0,-1)
    {
    Name = "G1m"
    }
   0.datalabel([1260,1026],4,0,-1)
    {
    Name = "G3m"
    }
   0.datalabel([1404,1170],4,0,-1)
    {
    Name = "G5m"
    }
   0.datalabel([1548,1170],4,0,-1)
    {
    Name = "G4m"
    }
   0.datalabel([1260,1170],4,0,-1)
    {
    Name = "G6m"
    }
   0.datalabel([1404,1026],4,0,-1)
    {
    Name = "G2m"
    }
   -Wire-([1494,1044],0,0,-1)
    {
    Vertex="0,0;0,72"
    }
   -Wire-([1350,1044],0,0,-1)
    {
    Vertex="0,0;0,72"
    }
   -Wire-([1206,1044],0,0,-1)
    {
    Vertex="0,0;0,72"
    }
   -Wire-([1494,972],0,0,-1)
    {
    Vertex="0,0;0,-18;-288,-18;-288,0"
    }
   -Wire-([1350,954],0,0,-1)
    {
    Vertex="0,0;0,18"
    }
   -Wire-([1494,1188],0,0,-1)
    {
    Vertex="0,0;0,18;-288,18;-288,0"
    }
   -Wire-([1350,1188],0,0,-1)
    {
    Vertex="0,0;0,18"
    }
   0.nodelabel([1512,1080],4,0,-1)
    {
    Name = "Am"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([1512,1080],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.nodelabel([1368,1080],4,0,-1)
    {
    Name = "Bm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([1368,1080],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.nodelabel([1224,1080],4,0,-1)
    {
    Name = "Cm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([1224,1080],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.source_1([1098,1116],1,0,-1)
    {
    Name = "Source1"
    Type = "6"
    Grnd = "0"
    Spec = "0"
    Cntrl = "0"
    AC = "0"
    Vm = "400 [kV]"
    Tc = "0.001[s]"
    Ph = "0.0 [deg]"
    f = "60.0 [Hz]"
    P = "0.0 [MW]"
    Q = "0.0 [MVAR]"
    R = "1.0 [ohm]"
    Rs = "1.0 [ohm]"
    Rp = "1.0 [ohm]"
    Lp = "0.1 [H]"
    R' = "1.0 [ohm]"
    L = "0.1 [H]"
    C = "1.0 [uF]"
    L' = "0.1 [H]"
    C' = "1.0 [uF]"
    CUR = ""
    }
   0.source_1([1098,1026],1,0,-1)
    {
    Name = "Source1"
    Type = "6"
    Grnd = "0"
    Spec = "0"
    Cntrl = "0"
    AC = "0"
    Vm = "400 [kV]"
    Tc = "0.001[s]"
    Ph = "0.0 [deg]"
    f = "60.0 [Hz]"
    P = "0.0 [MW]"
    Q = "0.0 [MVAR]"
    R = "1.0 [ohm]"
    Rs = "1.0 [ohm]"
    Rp = "1.0 [ohm]"
    Lp = "0.1 [H]"
    R' = "1.0 [ohm]"
    L = "0.1 [H]"
    C = "1.0 [uF]"
    L' = "0.1 [H]"
    C' = "1.0 [uF]"
    CUR = ""
    }
   -Wire-([1098,1080],0,0,-1)
    {
    Vertex="0,0;0,-18"
    }
   0.ground([1098,1080],4,0,-1)
    {
    }
   -Wire-([1206,1206],0,0,-1)
    {
    Vertex="0,0;-108,0;-108,-54"
    }
   -Wire-([1098,990],0,0,-1)
    {
    Vertex="0,0;0,-36;108,-36"
    }
   -Sticky-([792,450],0)
    {
    Name = ""
    Font = 1
    Bounds = 792,450,1566,756
    Alignment = 0
    Style = 1
    Arrow = 0
    Color = 0,15792890
    Text = "\
Iq Id Vd
1 bom
7 melhor mas se perdeu em 4.5 s
8 bom, melhor que 1, mas oscila com uma amplitudo um pouco alta. Perdeu em baixas rotações ( < 20 rad/s)

rna_iq-vq-iq_partida_183_6 7 8 e 9.c funciona bem de 0 - 60 e acima de 170 rad/s

rna_iq-vq-iq_partida_183_11 BOA... algumas faixas de alta velocidade destão ruins ....
rna_iq-vq-iq_partida_183_15 boa ... tem bastante ruido

ambos 1 teve bons resultados tanto na estimação quanto em algumas partidas.... ( próximo a 180 e menor que ~70)

BONS resultados utilizando amostras passadas
1 e 2
5 ficou  muito bom !!!! Todos os com atraso que apresentaram resultados \"satisfatórios\" foram treinados utilizando apenas informações da partida.
6 se perdeu no caminho ...
"
    }
   0.const([540,144],0,0,70)
    {
    Name = ""
    Value = "120"
    }
   -Wire-([234,558],0,0,-1)
    {
    Vertex="0,0;0,-18"
    }
   0.realpole([666,198],0,0,390)
    {
    Limit = "0"
    COM = "Real_Pole"
    Reset = "0"
    YO = "0.0"
    G = "1."
    T = "0.005 [s]"
    Max = "10.0"
    Min = "-10.0"
    }
   -Plot-([2016,216],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,414,198]
    Posn = [2016,216]
    Icon = [-1,-1]
    Extents = 0,0,414,198
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,414,135],"y")
     {
     Options = 136
     Units = ""
     Curve(122531664,"Va",0,,,)
     }
    }
   -Plot-([2016,0],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,414,198]
    Posn = [2016,0]
    Icon = [-1,-1]
    Extents = 0,0,414,198
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,414,135],"y")
     {
     Options = 129
     Units = ""
     Curve(122332904,"Int_e_w",0,,,)
     }
    }
   -Plot-([1584,432],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,414,198]
    Posn = [1584,432]
    Icon = [-1,-1]
    Extents = 0,0,414,198
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,414,135],"y")
     {
     Options = 1
     Units = ""
     Curve(122304752,"Iq_ref",0,,,)
     Curve(122314136,"Id_ref",0,,,)
     }
    }
   -Plot-([792,0],0)
    {
    Title = "Velocidade Mecânica"
    Draw = 1
    Area = [0,0,774,252]
    Posn = [792,0]
    Icon = [1008,0]
    Extents = 0,0,774,252
    XLabel = "t [s]"
    AutoPan = "false,75"
    Graph([0,0],[0,0,774,189],"Wm [RAD/S]")
     {
     Options = 101
     Units = ""
     Curve(122529216,"Wrampa",0,,,)
     Curve(122525136,"Wm",0,,,)
     Curve(122342696,"W_est_Filtro",0,,,)
     Curve(122327600,"W_est",0,,-2,)
     }
    }
   -Plot-([792,252],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,396,180]
    Posn = [792,252]
    Icon = [-1,-1]
    Extents = 0,0,396,180
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,396,117],"y")
     {
     Options = 43
     Units = ""
     Curve(122332088,"Erro Filtro (rad/s)",0,,,)
     Curve(122339432,"Erro (rad/s)",0,,-2,1)
     }
    }
   -Plot-([1188,252],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,378,180]
    Posn = [1188,252]
    Icon = [-1,-1]
    Extents = 0,0,378,180
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,378,117],"y")
     {
     Options = 11
     Units = ""
     Curve(122332496,"Erro %",0,,-2,)
     Curve(122341064,"Erro Filtro %",0,,,)
     }
    }
   -Plot-([2016,432],0)
    {
    Title = "$(GROUP) : Graphs"
    Draw = 1
    Area = [0,0,414,198]
    Posn = [2016,432]
    Icon = [-1,-1]
    Extents = 0,0,414,198
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,414,135],"y")
     {
     Options = 129
     Units = ""
     Curve(122322296,"f",0,,,)
     }
    }
   }
  }
 }

