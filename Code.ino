
char t;
 
void setup() {
pinMode(13,OUTPUT);   //Controls the movement of left side motor
pinMode(12,OUTPUT);   //Controls the reverse movement of left side motor
pinMode(11,OUTPUT);   //Controls the movement of right side motor
pinMode(10,OUTPUT);   //Controls the reverse movement of right side motor
pinMode(9,OUTPUT);    //Led Pin
pinMode(8,OUTPUT);    //For BUZZER 
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available())
{
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //Enables all motors to rotate in forward direction
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //Enables all motors to rotate in backward direction
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      //Enables to take a right turn whereas left side motors rotate in forward direction
  digitalWrite(13,HIGH);
}
 
else if(t == 'R'){      //Enables to take a left turn whereas right side motors rotate in forward direction
  digitalWrite(11,HIGH);
}
else if(t == 'S'){      //To stop movement of all motors
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}
