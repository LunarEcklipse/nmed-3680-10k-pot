int aPinVal = 0;
int led1Val = 0;
int led2Val = 0;
int led3Val = 0;
int finalVal = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  aPinVal = analogRead(A0);
  led1Val = adjustWithinParameters(aPinVal);
  led2Val = adjustWithinParameters(aPinVal - 340);
  led3Val = adjustWithinParameters(aPinVal - 680);
  analogWrite(9, led1Val);
  analogWrite(10, led2Val);
  analogWrite(11, led3Val);
}

int adjustWithinParameters(int inNum)
{
  if (inNum < 0)
  {
    inNum = 0;
  }
  else if (inNum > 255)
  {
    inNum = 255;
  }
  return inNum;
}
