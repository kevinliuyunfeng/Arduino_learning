void setup()
{
  //motors
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //led  work on high level
  pinMode(7, OUTPUT);  //forward_left
  pinMode(8, OUTPUT);  //forword_right
  pinMode(11, OUTPUT); //back_left
  pinMode(12, OUTPUT); //back_right
  
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
          case 'f':
              forward();
              break;
            case 'b':
              backward();
              break;
            case 'l':
              left();
              break;
            case 'r':
              right();
              break;
            case 's':
              stop();
              break;
            default:
              break;
        }
    }
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}

void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}

void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}
