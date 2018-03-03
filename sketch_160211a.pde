import ddf.minim.*;
import processing.serial.*; 

Minim minim;
AudioPlayer 
AudioPlayer[];
 
Serial port;                             // Create object from Serial class 
int a;                                  // Data received from the serial port 
int b;
int c;
 
void setup() { 
  frameRate(10); 
  // Open the port that the board is connected to and use the same speed (9600 bps) 
  port = new Serial(this,"COM3", 9600); 
   c=1; 
  minim = new Minim(this); 
player = new AudioPlayer[9];

  player[0] = minim.loadFile("01.mp3"); 
  player[1] = minim.loadFile("02.mp3"); 
  player[2] = minim.loadFile("03.mp3"); 
  player[3] = minim.loadFile("04.mp3");
  player[4] = minim.loadFile("04.mp3"); 
  player[5] = minim.loadFile("04.mp3"); 
  player[6] = minim.loadFile("04.mp3"); 
  player[7] = minim.loadFile("04.mp3"); 
  player[8] = minim.loadFile("04.mp3"); 
}




void draw() { 
  if (0 < port.available()) {         // If data is available,
    a = port.read();                  // read it and store it in val
  } 
 
  minim = new Minim(this);
 
if ((a==1) && (b==0))  {
    
  if ((c % 2) != 0)  {   
   // minim = new Minim(this);
    player = minim.loadFile("01.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
   
if ((a==2) && (b==0))  {
    
  if ((c % 2) != 0)  {   
   // minim = new Minim(this);
    player = minim.loadFile("02.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  } 
  
  if ((a==3) && (b==0))  {
    
  if ((c % 2) != 0)  {   
  //  minim = new Minim(this);
    player = minim.loadFile("03.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
  
 if ((a==4) && (b==0))  {
    
  if ((c % 2) != 0)  {   
 //   minim = new Minim(this);
    player = minim.loadFile("04.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
  
 if ((a==5) && (b==0))  {
    
  if ((c % 2) != 0)  {   
  //  minim = new Minim(this);
    player = minim.loadFile("05.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
  
 if ((a==6) && (b==0))  {
    
  if ((c % 2) != 0)  {   
 //   minim = new Minim(this);
    player = minim.loadFile("06.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
  
 if ((a==7) && (b==0))  {
    
  if ((c % 2) != 0)  {   
 //   minim = new Minim(this);
    player = minim.loadFile("07.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
  
 if ((a==8) && (b==0))  {
    
  if ((c % 2) != 0)  {   
  //  minim = new Minim(this);
    player = minim.loadFile("08.mp3", 2048);
    player.play();
    }
    
    if ((c % 2) == 0) {   
       player.pause(); 
       
     }
     
 c=c+1;

  }
       
b=a;

  }