//数码管为共阴极，译码器为共阴极
//b0,b1,b2,b3分别为数码管译码器中的A0,A1,A2,A3
//ENx为使能端
//测试端和消隐端都被直接接到了高电平上，即无效
int b0 = 2;
int b1 = 6;
int b2 = 5;
int b3 = 3;
int EN1 = 4;
int EN2 = 7;
int EN3 = 8;
int EN4 = 9;

void setup() {
  pinMode(b0, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(EN3, OUTPUT);
  pinMode(EN4, OUTPUT);
  digitalWrite(EN1,HIGH);
  digitalWrite(EN2,HIGH);
  digitalWrite(EN3,HIGH);
  digitalWrite(EN4,HIGH);
}

void loop() {
  Write('1',1);
  Write('2',2);
  Write('3',3);
  Write('4',4);
}
//num 为要显示的数字
//wei 数字显示的位 从右到左分别为1，2，3，4
void Write(int num,int wei)
{
  digitalWrite(EN1,HIGH);
  digitalWrite(EN2,HIGH);
  digitalWrite(EN3,HIGH);
  digitalWrite(EN4,HIGH);
  switch(num){
    case 0:
      digitalWrite(b0,LOW);
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
      digitalWrite(b3,LOW);
      break;
    case 1:
      digitalWrite(b0,HIGH);
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
      digitalWrite(b3,LOW);
      break;
    case 2:
      digitalWrite(b0,LOW);
      digitalWrite(b1,HIGH);
      digitalWrite(b2,LOW);
      digitalWrite(b3,LOW);
      break;
    case 3:
      digitalWrite(b0,HIGH);
      digitalWrite(b1,HIGH);
      digitalWrite(b2,LOW);
      digitalWrite(b3,LOW);
      break;
    case 4:
      digitalWrite(b0,LOW);
      digitalWrite(b1,LOW);
      digitalWrite(b2,HIGH);
      digitalWrite(b3,LOW);
      break;
    case 5:
      digitalWrite(b0,HIGH);
      digitalWrite(b1,LOW);
      digitalWrite(b2,HIGH);
      digitalWrite(b3,LOW);
      break;
    case 6:
      digitalWrite(b0,LOW);
      digitalWrite(b1,HIGH);
      digitalWrite(b2,HIGH);
      digitalWrite(b3,LOW);
      break;
    case 7:
      digitalWrite(b0,HIGH);
      digitalWrite(b1,HIGH);
      digitalWrite(b2,HIGH);
      digitalWrite(b3,LOW);
      break;
    case 8:
      digitalWrite(b0,LOW);
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
      digitalWrite(b3,HIGH);
      break;
    case 9:
      digitalWrite(b0,HIGH);
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);
      digitalWrite(b3,HIGH);;
      break;
  };
  switch(wei){
    case 1:
      digitalWrite(EN1,LOW);
      digitalWrite(EN1,HIGH);
      break;
    case 2:
      digitalWrite(EN2,LOW);
      digitalWrite(EN2,HIGH);
      break;
    case 3:
      digitalWrite(EN3,LOW);
      digitalWrite(EN3,HIGH);
      break;
    case 4:
      digitalWrite(EN4,LOW);
      digitalWrite(EN4,HIGH);
      break;
  }
}
