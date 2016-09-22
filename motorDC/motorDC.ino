const int pinMotorIn1 = 9;
const int pinMotorIn2 = 10;
const int pinMotorEn = 11;

const int pinButOn = 2;
const int pinButStop = 3;
const int pinButUp = 4;
const int pinButDown = 5;

bool mPwr = false;
bool mStop = false;
bool mUp = false;
bool mDown = false;

/===============================================
void setup() {
  // put your setup code here, to run once:
  pinMode(pinMotorIn1, OUTPUT);
  pinMode(pinMotorIn2, OUTPUT);
  pinMode(pinMotorEn, OUTPUT);

  pinMode(pinButOn, INPUT);
  pinMode(pinButStop, INPUT);
  pinMode(pinButUp, INPUT);
  pinMode(pinButDown, INPUT);
}

/===============================================
void loop() {
  // put your main code here, to run repeatedly:

  // check button changes
}

/===============================================
bool checkChange(int &but, int &butLast)
{
  bool ret = (but != butLast);
  butLast = but;
}

