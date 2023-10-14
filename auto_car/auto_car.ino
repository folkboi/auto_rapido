//download and use it on Arduino nano*

/*
const int PWMA = 4;
const int AIN1 = 5;
const int AIN2 = 6;

const int PWMB = 3;
const int BIN1 = 11;
const int BIN2 = 10;
*/

const int PWMA = 6;
const int AIN1 = 4;
const int AIN2 = 7;

const int PWMB = 5;
const int BIN1 = 2;
const int BIN2 = 3;

char data; 

void setup()
{
  
  //set all pins as output
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  
  Serial.begin(9600);
  //19200
  

  
}

void loop()
{
if (Serial.available())
    {
    char data=Serial.read();
     Serial.print("Data received");
     Serial.println(data);
     
      if(data=='1')
      { back();
 
      }
      
      if(data=='2')
      { go();
      
      }
                  
      if(data=='3')
      { right();
        
      }
      
      if(data=='4')
      { left();
     
      }
      
      if(data=='a')
      { stop();
      
      }

 }

}

 void back(){
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
   
  
  }
  
 void go(){
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,HIGH);
  Serial.println("GO");
  Serial.println(digitalRead(PWMB));
  }
  
 void right(){
   digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
  
  }
  
 void left(){
   digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,HIGH);
  
  }
  
 void stop(){
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,LOW);
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  Serial.println("STOP");
  Serial.println(digitalRead(PWMB));
  }