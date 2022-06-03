#define led 2

void setup() 
{
  Serial.begin(9600);
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char val = Serial.read();
    if(val == 'A')
    {
      digitalWrite(led, HIGH);
      Serial.println("led on");
    }
    else if(val == 'a')
    {
      digitalWrite(led, LOW);
    }
  }
}
