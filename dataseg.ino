/*
//for dataseg
//arthor by lyf
//c[0],c[1],c[2],c[3] are match to A0,A1,A2,A3
//EN is for enable
*/
int c[4] = {5,6,7,8};

int EN = 9;
char number;

void setup() {
  pinMode(c[0], OUTPUT);
  pinMode(c[1], OUTPUT);
  pinMode(c[2], OUTPUT);
  pinMode(c[3], OUTPUT);
  pinMode(EN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
      if(Serial.available())
    {
      number = Serial.read();
      write_number(number);
    }
}

/*use shift to control*/
void write_number(char num)
{
  int i;
  char k;
  digitalWrite(EN,HIGH);
  for(i=0;i<4;i++){
      k = num>>1;
      if(k == 1){
           digitalWrite(c[i],HIGH);
      }
      else{
           digitalWrite(c[i],LOW);
      }
      num = num>>1;
  }
   digitalWrite(EN,LOW);
   digitalWrite(EN,HIGH);
  
}
