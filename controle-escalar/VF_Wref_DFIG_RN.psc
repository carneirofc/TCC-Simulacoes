PSCAD 4.2.0

Settings
 {
 Id = "1334175951.1520016331"
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
  Fin = 5
  Step = 1e-006
  Plot = 0.00025
  Chat = 0.001
  Brch = 0.0005
  Lat = 100
  Options = 0
  Advanced = 5631
  Debug = 0
  StartFile = ""
  OFile = "15.out"
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
  FileDate = 1519145640
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
   -Wire-([1008,288],0,0,-1)
    {
    Vertex="0,0;18,0;18,-72"
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
   -Wire-([828,144],0,0,-1)
    {
    Vertex="0,0;0,72;-36,72"
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
   -Wire-([324,108],0,0,-1)
    {
    Vertex="0,0;0,18"
    }
   }
  }
 Module("Correntes")
  {
  Desc = ""
  FileDate = 1519145640
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
  FileDate = 1519145640
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
  FileDate = 1519145640
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
   0.src_ccin_1([144,72],2,0,340)
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
   0.src_ccin_1([144,144],2,0,320)
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
   0.src_ccin_1([144,216],2,0,310)
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
   0.datamerge([450,108],0,0,330)
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
   1.ABCtoDQ([306,90],0,0,160)
    {
    inv = "0"
    }
   1.DQtoABC([306,468],0,0,250)
    {
    inv = "0"
    }
   1.DQtoABC([540,468],0,0,230)
    {
    inv = "0"
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
    Value = "0.0385"
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
   0.datatap([378,288],0,0,300)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([414,288],0,0,290)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   }
  }
 Module("Main")
  {
  Desc = ""
  FileDate = 0
  Nodes = 
   {
   }

  Graphics = 
   {
   Rectangle(-18,-18,18,18)
   }


  Page(A/A4,Landscape,16,[683,342],5)
   {
   .CDFIGmodel([558,126],0,0,140)
    {
    }
   0.datatap([576,216],0,0,150)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.var([648,306],0,138326928,20)
    {
    Name = "Wref"
    Group = ""
    Display = "0"
    Max = "200"
    Min = "0"
    Value = "171.428571429"
    Units = ""
    Collect = "1"
    }
   -Sticky-([0,0],0)
    {
    Name = ""
    Font = 1
    Bounds = 0,0,234,216
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
   -Sticky-([0,216],0)
    {
    Name = ""
    Font = 1
    Bounds = 0,216,234,252
    Alignment = 0
    Style = 1
    Arrow = 0
    Color = 255,16777215
    Text = "\
Torque nominal: 20.35 (Valor Calculado)

"
    }
   0.time-sig([612,378],0,0,40)
    {
    }
   0.compar([648,378],0,0,110)
    {
    Pulse = "0"
    INTR = "0"
    OPos = "1"
    ONone = "0"
    ONeg = "1"
    OHi = "1"
    OLo = "0"
    }
   0.select([720,342],0,0,120)
    {
    A = "1"
    DPath = "1"
    COM = "Selector"
    }
   0.const([648,342],0,0,30)
    {
    Name = ""
    Value = "100"
    }
   0.const([612,414],0,0,50)
    {
    Name = ""
    Value = ".5"
    }
   0.datalabel([756,342],0,0,-1)
    {
    Name = "Wref"
    }
   -SrcFile-([666,54],0)
    {
   Name = "controlador-vf.c"
    }
   0.peswitch([468,360],6,0,400)
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
   0.peswitch([432,396],4,0,-1)
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
   -Wire-([468,360],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([468,396],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([324,360],6,0,410)
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
   0.peswitch([288,396],4,0,-1)
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
   -Wire-([324,360],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([324,396],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([180,360],6,0,420)
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
   0.peswitch([144,396],4,0,-1)
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
   -Wire-([180,360],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([180,396],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([468,504],6,0,370)
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
   0.peswitch([432,540],4,0,-1)
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
   -Wire-([468,504],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([468,540],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([324,504],6,0,380)
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
   0.peswitch([288,540],4,0,-1)
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
   -Wire-([324,504],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([324,540],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.peswitch([180,504],6,0,390)
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
   0.peswitch([144,540],4,0,-1)
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
   -Wire-([180,504],0,0,-1)
    {
    Vertex="0,0;0,-18;-36,-18;-36,0"
    }
   -Wire-([180,540],0,0,-1)
    {
    Vertex="0,0;0,18;-36,18;-36,0"
    }
   0.datalabel([504,396],4,0,-1)
    {
    Name = "G1m"
    }
   0.datalabel([216,396],4,0,-1)
    {
    Name = "G3m"
    }
   0.datalabel([360,540],4,0,-1)
    {
    Name = "G5m"
    }
   0.datalabel([504,540],4,0,-1)
    {
    Name = "G4m"
    }
   0.datalabel([216,540],4,0,-1)
    {
    Name = "G6m"
    }
   0.datalabel([360,396],4,0,-1)
    {
    Name = "G2m"
    }
   -Wire-([450,414],0,0,-1)
    {
    Vertex="0,0;0,72"
    }
   -Wire-([306,414],0,0,-1)
    {
    Vertex="0,0;0,72"
    }
   -Wire-([162,414],0,0,-1)
    {
    Vertex="0,0;0,72"
    }
   -Wire-([450,342],0,0,-1)
    {
    Vertex="0,0;0,-18;-288,-18;-288,0"
    }
   -Wire-([306,324],0,0,-1)
    {
    Vertex="0,0;0,18"
    }
   -Wire-([450,558],0,0,-1)
    {
    Vertex="0,0;0,18;-288,18;-288,0"
    }
   -Wire-([306,558],0,0,-1)
    {
    Vertex="0,0;0,18"
    }
   0.nodelabel([468,450],4,0,-1)
    {
    Name = "Am"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([468,450],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.nodelabel([324,450],4,0,-1)
    {
    Name = "Bm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([324,450],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.nodelabel([180,450],4,0,-1)
    {
    Name = "Cm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([180,450],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   0.source_1([54,486],1,0,-1)
    {
    Name = "Source1"
    Type = "6"
    Grnd = "0"
    Spec = "0"
    Cntrl = "0"
    AC = "0"
    Vm = "400 [kV]"
    Tc = "0.0001[s]"
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
   0.source_1([54,396],1,0,-1)
    {
    Name = "Source1"
    Type = "6"
    Grnd = "0"
    Spec = "0"
    Cntrl = "0"
    AC = "0"
    Vm = "400 [kV]"
    Tc = "0.0001[s]"
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
   -Wire-([54,450],0,0,-1)
    {
    Vertex="0,0;0,-18"
    }
   0.ground([54,450],4,0,-1)
    {
    }
   1.svpwm([936,108],0,0,230)
    {
    }
   -SrcFile-([666,126],0)
    {
   Name = "svpwm.C"
    }
   -Wire-([54,648],0,0,-1)
    {
    Vertex="0,0;54,0"
    }
   -Wire-([144,648],0,0,-1)
    {
    Vertex="0,0;108,0"
    }
   0.inv([180,684],0,0,350)
    {
    INTR = "0"
    }
   -Wire-([180,684],0,0,-1)
    {
    Vertex="0,0;-18,0;-18,-36"
    }
   -Wire-([216,684],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   -Wire-([54,738],0,0,-1)
    {
    Vertex="0,0;54,0"
    }
   -Wire-([144,738],0,0,-1)
    {
    Vertex="0,0;108,0"
    }
   0.inv([180,774],0,0,330)
    {
    INTR = "0"
    }
   -Wire-([180,774],0,0,-1)
    {
    Vertex="0,0;-18,0;-18,-36"
    }
   -Wire-([216,774],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   -Wire-([54,828],0,0,-1)
    {
    Vertex="0,0;54,0"
    }
   -Wire-([144,828],0,0,-1)
    {
    Vertex="0,0;108,0"
    }
   0.inv([180,864],0,0,320)
    {
    INTR = "0"
    }
   -Wire-([180,864],0,0,-1)
    {
    Vertex="0,0;-18,0;-18,-36"
    }
   -Wire-([216,864],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   0.datalabel([252,648],0,0,-1)
    {
    Name = "G1m"
    }
   0.datalabel([252,684],0,0,-1)
    {
    Name = "G4m"
    }
   0.datalabel([252,828],0,0,-1)
    {
    Name = "G3m"
    }
   0.datalabel([252,864],0,0,-1)
    {
    Name = "G6m"
    }
   0.datalabel([252,774],0,0,-1)
    {
    Name = "G5m"
    }
   0.datalabel([252,738],0,0,-1)
    {
    Name = "G2m"
    }
   0.datalabel([54,648],0,0,-1)
    {
    Name = "Arm1"
    }
   0.datalabel([54,738],0,0,-1)
    {
    Name = "Arm2"
    }
   0.datalabel([54,828],0,0,-1)
    {
    Name = "Arm3"
    }
   0.datalabel([990,144],0,0,-1)
    {
    Name = "Arm3"
    }
   0.datalabel([990,108],0,0,-1)
    {
    Name = "Arm2"
    }
   0.datalabel([990,72],0,0,-1)
    {
    Name = "Arm1"
    }
   0.datalabel([774,90],0,0,-1)
    {
    Name = "Wref"
    }
   0.breakout([468,126],0,0,-1)
    {
    Dis = "0"
    }
   0.multimeter([450,126],0,0,10)
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
    Pd = "3647"
    Qd = "2663"
    Vd = ""
    }
   0.breakout([432,126],4,0,-1)
    {
    Dis = "0"
    }
   0.nodelabel([324,90],4,0,-1)
    {
    Name = "Am"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   0.nodelabel([324,126],4,0,-1)
    {
    Name = "Bm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   0.nodelabel([324,162],4,0,-1)
    {
    Name = "Cm"
    MeasV = "0"
    PU = "0"
    VName = "VNode"
    VBase = "1 [kV]"
    }
   -Wire-([396,90],0,0,-1)
    {
    Vertex="0,0;-72,0"
    }
   -Wire-([396,126],0,0,-1)
    {
    Vertex="0,0;-72,0"
    }
   -Wire-([396,162],0,0,-1)
    {
    Vertex="0,0;-72,0"
    }
   1.ControleVFwref([828,108],0,0,160)
    {
    }
   0.datalabel([774,126],1,0,-1)
    {
    Name = "Wm"
    }
   0.datalabel([576,216],0,0,-1)
    {
    Name = "Wm"
    }
   0.buffer([108,828],0,0,260)
    {
    HI = "1"
    LO = "0"
    Inv = "0"
    INTR = "0"
    }
   0.buffer([108,738],0,0,270)
    {
    HI = "1"
    LO = "0"
    Inv = "0"
    INTR = "0"
    }
   0.buffer([108,648],0,0,290)
    {
    HI = "1"
    LO = "0"
    Inv = "0"
    INTR = "0"
    }
   0.datalabel([612,18],0,0,-1)
    {
    Name = "Wm"
    }
   0.datalabel([72,972],0,0,-1)
    {
    Name = "Va"
    }
   0.datalabel([72,1008],0,0,-1)
    {
    Name = "Vb"
    }
   0.datalabel([72,1044],0,0,-1)
    {
    Name = "Vc"
    }
   0.polar_rec([216,1008],0,0,180)
    {
    Dir = "1"
    AngUnit = "0"
    }
   0.sumjct([288,1026],0,0,190)
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
   0.emtconst([252,1062],0,0,90)
    {
    Name = ""
    Value = "4"
    }
   1.ABCtoAlfBet([126,1008],0,0,170)
    {
    inv = "0"
    }
   -SrcFile-([576,792],0)
    {
   Name = "fafa.c"
    }
   0.datalabel([630,738],0,0,-1)
    {
    Name = "ExIq"
    }
   0.datalabel([594,738],0,0,-1)
    {
    Name = "ExId"
    }
   0.datalabel([558,666],0,0,-1)
    {
    Name = "ExVd"
    }
   0.datalabel([612,630],2,0,-1)
    {
    Name = "Exf"
    }
   1.REDEneural([612,684],0,0,280)
    {
    }
   0.datalabel([324,1026],0,0,-1)
    {
    Name = "Theta"
    }
   0.emtconst([468,1062],0,0,100)
    {
    Name = ""
    Value = "1"
    }
   0.div([504,1026],0,0,240)
    {
    }
   0.datalabel([540,1026],0,0,-1)
    {
    Name = "Exf"
    }
   0.ratelimit([432,1026],0,0,210)
    {
    IR = "100000 [1/s]"
    DR = "100000 [1/s]"
    COM = "Rate_Limiter"
    }
   0.derivative([360,1026],0,0,200)
    {
    T = "1 [s]"
    COM = "Derivative"
    }
   0.datalabel([882,72],0,0,-1)
    {
    Name = "Va"
    }
   0.datalabel([882,108],0,0,-1)
    {
    Name = "Vb"
    }
   0.datalabel([882,144],0,0,-1)
    {
    Name = "Vc"
    }
   0.pgb([576,216],0,138664344,430)
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
   0.pgb([666,684],0,138665568,340)
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
   0.datalabel([666,684],0,0,-1)
    {
    Name = "West"
    }
   0.pgb([792,180],1,138666792,440)
    {
    Name = "Wref"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   0.datalabel([666,540],0,0,-1)
    {
    Name = "West"
    }
   0.datalabel([630,504],6,0,-1)
    {
    Name = "Wm"
    }
   0.sumjct([666,504],0,0,300)
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
   0.pgb([702,504],0,138667608,360)
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
   0.datalabel([756,198],2,0,-1)
    {
    Name = "West"
    }
   0.datalabel([324,936],0,0,-1)
    {
    Name = "Is"
    }
   0.datatap([342,828],0,0,60)
    {
    Index = "1"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([342,864],0,0,70)
    {
    Index = "2"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   0.datatap([342,900],0,0,80)
    {
    Index = "3"
    Dim = "1"
    Type = "2"
    Style = "0"
    Disp = "1"
    }
   -Wire-([324,810],0,0,-1)
    {
    Vertex="0,0;0,126"
    }
   0.datalabel([324,648],0,0,-1)
    {
    Name = "Va"
    }
   0.datalabel([324,684],0,0,-1)
    {
    Name = "Vb"
    }
   0.datalabel([324,720],0,0,-1)
    {
    Name = "Vc"
    }
   1.ABCtoDQ([396,684],0,0,220)
    {
    inv = "0"
    }
   0.datalabel([396,756],0,0,-1)
    {
    Name = "Theta"
    }
   0.datalabel([396,936],0,0,-1)
    {
    Name = "Theta"
    }
   1.ABCtoDQ([396,864],0,0,250)
    {
    inv = "0"
    }
   0.datalabel([468,666],0,0,-1)
    {
    Name = "ExVd"
    }
   0.datalabel([468,846],0,0,-1)
    {
    Name = "ExId"
    }
   0.datalabel([468,882],0,0,-1)
    {
    Name = "ExIq"
    }
   0.datalabel([468,702],0,0,-1)
    {
    Name = "ExVq"
    }
   1.CargaLinear([558,18],0,0,130)
    {
    k = "2"
    A = ".1"
    }
   0.pgb([540,1026],0,138681072,310)
    {
    Name = "<Untitled>"
    Group = ""
    Display = "0"
    Scale = "1.0"
    Units = ""
    mrun = "0"
    Pol = "0"
    Min = "-2.0"
    Max = "2.0"
    }
   -Wire-([162,324],0,0,-1)
    {
    Vertex="0,0;-108,0;-108,36"
    }
   -Wire-([54,522],0,0,-1)
    {
    Vertex="0,0;0,54;108,54"
    }
   -Wire-([342,720],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   -Wire-([324,684],0,0,-1)
    {
    Vertex="0,0;36,0"
    }
   -Wire-([342,648],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   -Wire-([468,882],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   -Wire-([450,846],0,0,-1)
    {
    Vertex="0,0;18,0"
    }
   -Wire-([468,702],0,0,-1)
    {
    Vertex="0,0;-18,0"
    }
   -Wire-([450,666],0,0,-1)
    {
    Vertex="0,0;18,0"
    }
   -Plot-([846,450],0)
    {
    Title = "Erro do estimador neral"
    Draw = 1
    Area = [0,0,702,216]
    Posn = [846,450]
    Icon = [990,450]
    Extents = 0,0,702,216
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,702,153],"y")
     {
     Options = 69
     Units = ""
     Curve(138667608,"Erro (rad/s)",0,,,)
     }
    }
   0.datalabel([558,702],0,0,-1)
    {
    Name = "ExVq"
    }
   -Plot-([846,198],0)
    {
    Title = "Velocidade Mecânica"
    Draw = 1
    Area = [0,0,702,252]
    Posn = [846,198]
    Icon = [1026,18]
    Extents = 0,0,702,252
    XLabel = " "
    AutoPan = "false,75"
    Graph([0,0],[0,0,702,189],"y")
     {
     Options = 69
     Units = ""
     Curve(138666792,"Wref",0,,,)
     Curve(138664344,"Wm",0,,,)
     Curve(138665568,"W_est",0,,,)
     }
    }
   -ControlPanel-([756,234],0)
    {
    Name = "Wref"
    Flags = 0
    State = 1
    Icon = -1,-1
    Posn = 756,234
    Extents = 0,0,0,0
    Slider(138326928)
    }
   }
  }
 }

