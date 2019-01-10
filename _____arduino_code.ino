#define RootPowerEnablePin A1



void setup() {
pinMode(RootPowerEnablePin, OUTPUT);
digitalWrite(RootPowerEnablePin, HIGH);
Serial.begin(115200);
Serial1.begin(115200);

while(!Serial){
  
}

Serial.print("device start\n");


}



void loop() {
  

        if (Serial.available() > 0) {
                
                //incomingByte = Serial.read();

              
                //Serial.write(incomingByte);
                String cmd;
                cmd = Serial.readString();
               
                //Serial1.print(Serial.readString());
                //Serial.print(cmd);
                //Serial.println(cmd.length());
                Serial1.print(cmd + '\r');

        //delay(1000);
        }


        if (Serial1.available() > 0) {
                char a=Serial1.read();                
                Serial.print(a);
        }
  
}
