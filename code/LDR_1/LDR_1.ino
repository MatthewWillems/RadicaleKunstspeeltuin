const int ledPin = 13;

const int ldrPin = A0;
int dark = 80;  // omschakel punt 
int light =120;  // omschakel punt
void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {
      int ldrStatus = analogRead(ldrPin);   
      if (ldrStatus <= dark) {    // versie 2
          digitalWrite(ledPin, HIGH);        
          Serial.print("Its DARK, Turn on the LED : ");
          Serial.println(ldrStatus);
      } 
      
      if (ldrStatus > light){
              digitalWrite(ledPin, LOW);
              Serial.print("Its BRIGHT, Turn off the LED : ");
              Serial.println(ldrStatus);
    } 
}
