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
i(0);
T(0);
e(0);
r(0);
a(0);
T(0);
i(0);
o(0);
n(0);
x(0);
delay(2000);
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
//alphabets
void i(int k){
while(k<100)
{ a11();
  a14();
  a21();
  a22();
  a23();
  a24();
  a31();
  a32();
  a33();
  a34();
  a41();
  a44();
  k=k+1;
}}

void T(int k){
while(k<100)
{ a11();
  a21();
  a22();
  a23();
  a24();
  a31();
  a32();
  a33();
  a34();
  a41();
  k=k+1;
}}

void a(int k){
while(k<100)
{ a12();
  a13();
  a14();
  a21();
  a22();
  a31();
  a32();
  a42();
  a43();
  a44();
  k=k+1;
}}

void r(int k){
while(k<100)
{ a11();
  a12();
  a14();
  a21();
  a22();
  a23();
  a31();
  a32();
  a41();
  a42();
  a43();
  a44();
  k=k+1;
}}

void n(int k){
while(k <100){
  a11();
  a12();
  a13();
  a14();
  a23();
  a32();
  a41();
  a42();
  a43();
  a44();
  k=k+1;
}}

void e(int k){
while(k<100)
{ a11();
  a12();
  a14();
  a21();
  a22();
  a24();
  a31();
  a32();
  a34();
  a41();
  a42();
  a43();
  a44();
  k=k+1;
}}

void x(int k){
while(k<100)
{ a11();
  a14();
  a22();
  a23();
  a32();
  a33();
  a41();
  a44();
  k=k+1;
}}


void o(int k){
while(k<100)
{ 
  a12();
  a13();
  a21();
  a24();
  a31();
  a34();
  a42();
  a43();
  k=k+1;
}}
