// Programm zur Steuerung einer LED auf pin 9
const int ledPin = 9;     // pin fuer die LED
const int buttonPin = 12; // pin fuer den Taster

int ledLevel = 0;         // Helligkeit der LED
bool ledInc = true;       // Richtung, true = heller
bool buttonPushed = false;// Merker ob Taster gedrueckt worden ist

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == HIGH) // Taster gedrueckt
  {
    buttonPushed = true;
    // Je nach Richtung heller oder dunkler gehen
    if(ledInc && ledLevel < 255)
    {
      ledLevel++;
    }
    if(!ledInc && ledLevel > 0)
    {
      ledLevel--;
    }
  }
  if(digitalRead(buttonPin) == LOW && buttonPushed)
  {
    // wenn Taster losgelassen, Richtung aendern
    ledInc = !ledInc;
    buttonPushed = false;
  }
  analogWrite(ledPin, ledLevel);
  delay(10);
}
