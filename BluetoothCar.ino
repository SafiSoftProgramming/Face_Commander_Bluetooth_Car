#include<SoftwareSerial.h>


int motor1_look_up_and_down_pin1 = 8;
int motor1_look_up_and_down_pin2 = 9;

int motor2_look_up_and_down_pin1 = 10;
int motor2_look_up_and_down_pin2 = 11;

//Bluetooth serial 
const int txpin = 13;       
const int rxpin = 12;
SoftwareSerial blue(txpin, rxpin);

char Command = 'o'  ;

void setup() {
 blue.begin(9600);

  pinMode(motor1_look_up_and_down_pin1, OUTPUT);
  pinMode(motor1_look_up_and_down_pin2, OUTPUT);
  pinMode(motor2_look_up_and_down_pin1, OUTPUT);
  pinMode(motor2_look_up_and_down_pin2, OUTPUT);

}

void loop() {
   Serial.println(blue.read());

 
   if (blue.available()) {
       Command = blue.read();



       if (Command == 'F' ){
     digitalWrite(motor2_look_up_and_down_pin1, LOW);
     digitalWrite(motor2_look_up_and_down_pin2, HIGH);
     
       digitalWrite(motor1_look_up_and_down_pin1, HIGH);
     digitalWrite(motor1_look_up_and_down_pin2, LOW);
     
     delay(100);
     
     digitalWrite(motor2_look_up_and_down_pin1, LOW);
     digitalWrite(motor2_look_up_and_down_pin2, LOW);

      digitalWrite(motor1_look_up_and_down_pin1, LOW);
     digitalWrite(motor1_look_up_and_down_pin2, LOW);
       
     }           
      
      if (Command == 'B'){
     digitalWrite(motor2_look_up_and_down_pin1, HIGH);
     digitalWrite(motor2_look_up_and_down_pin2, LOW);

          digitalWrite(motor1_look_up_and_down_pin1, LOW);
     digitalWrite(motor1_look_up_and_down_pin2, HIGH);
     
     delay(100);
     digitalWrite(motor2_look_up_and_down_pin1, LOW);
     digitalWrite(motor2_look_up_and_down_pin2, LOW);

     digitalWrite(motor1_look_up_and_down_pin1, LOW);
     digitalWrite(motor1_look_up_and_down_pin2, LOW);
     
     }  










   }

}
