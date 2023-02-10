int row1=D1;
int row2=D2;
int row3=D3;
int row4=D4;

int col1=D5;
int col2=D6;
int col3=D7;
int col4=D8;

int t=1;

void setup(){
  pinMode(row1,OUTPUT);
  pinMode(row2,OUTPUT);
  pinMode(row3,OUTPUT);
  pinMode(row4,OUTPUT);
  pinMode(col1,OUTPUT);
  pinMode(col2,OUTPUT);
  pinMode(col3,OUTPUT);
  pinMode(col4,OUTPUT);
}

void loop(){
  r1(0);
  r2(0);
  r3(0);
  r4(0);
}

void a11(){
  digitalWrite(row1,LOW);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,HIGH);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a12(){
  digitalWrite(row1,LOW);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,HIGH);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a13(){
  digitalWrite(row1,LOW);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,HIGH);
  digitalWrite(col4,LOW);
  delay(t);
}

void a14(){
  digitalWrite(row1,LOW);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,HIGH);
  delay(t);
}

void a21(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,LOW);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,HIGH);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);  
}

void a22(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,LOW);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,HIGH);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a23(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,LOW);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,HIGH);
  digitalWrite(col4,LOW);
  delay(t);
}

void a24(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,LOW);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,HIGH);
  delay(t);
}

void a31(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,LOW);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,HIGH);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a32(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,LOW);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,HIGH);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a33(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,LOW);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,HIGH);
  digitalWrite(col4,LOW);
  delay(t);
}

void a34(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,LOW);
  digitalWrite(row4,HIGH);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,HIGH);
  delay(t);
}

void a41(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,LOW);

  digitalWrite(col1,HIGH);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a42(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,LOW);

  digitalWrite(col1,LOW);
  digitalWrite(col2,HIGH);
  digitalWrite(col3,LOW);
  digitalWrite(col4,LOW);
  delay(t);
}

void a43(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,LOW);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,HIGH);
  digitalWrite(col4,LOW);
  delay(t);
}

void a44(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);
  digitalWrite(row4,LOW);

  digitalWrite(col1,LOW);
  digitalWrite(col2,LOW);
  digitalWrite(col3,LOW);
  digitalWrite(col4,HIGH);
  delay(t);
}

void r1(int k){
  while(k<100)
{
  a11();a12();a13();a14();k=k+1;
}  
}

void r2(int k){
  while(k<100)
{
  a21();a22();a23();a24();k=k+1;

}
}

void r3(int k){
  while(k<100)
{
  a31();a32();a33();a34();k=k+1;
}
}

void r4(int k){
  while(k<100)
{
  a41();a42();a43();a44();k=k+1;
}
}