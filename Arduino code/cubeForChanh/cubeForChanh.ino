
int layer[4] = {A3, A2, A1, A0}; //initializing and declaring led layers
int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4}; //initializing and declaring led rows
int scrollCol[4] = {10, 6, 2, A5};
int col[12] = {A5, 2, 6, 10, 11, 12, 13, 9, 5, 1, 0, A4};
int time = 150;
int flashChar = 100;
int heartNum = 10;
int letterTime = 1; // thời gian nháy hiện liên tục 1 kí tự
int timeEachWord = 500; // thời gian delay kí tự 'space'
int timeEndMessage = 500; // thời gian delay kết thúc đoạn message
unsigned long timeDisplayCharacter = 500; // thời gian hiện 1 word
unsigned long timeScroll = 200;
unsigned long aTime, bTime, cTime, dTime, eTime, fTime, gTime, hTime, iTime, jTime, kTime, lTime, mTime;
unsigned long nTime, oTime, pTime, qTime, rTime, sTime, tTime, uTime, vTime, xTime, yTime, zTime;

//+++++++++++++++++++++++++++++++++++++++
String str = "happy birthday be chanh";

//+++++++++++++++++++++++++++++++++++++++


void setup()
{

  for (int i = 0; i < 16; i++)
  {
    pinMode(column[i], OUTPUT);  //setting rows to ouput
  }

  for (int i = 0; i < 4; i++)
  {
    pinMode(layer[i], OUTPUT);  //setting layers to output
  }

  randomSeed(analogRead(10));  //seeding random for random pattern
}


void a(void);
void b(void);
void c(void);
void d(void);
void e(void);
void f(void);
void g(void);
void h(void);
void I(void);
void J(void);
void k(void);
void l(void);
void m(void);
void n(void);
void o(void);
void p(void);
void q(void);
void r(void);
void s(void);
void t(void);
void u(void);
void v(void);
void x(void);
void y(void);
void z(void);
void space(void);
void message(void);
//scroll text
void text_CoLenEmYeu(void);

void turnEverythingOff(void);
void flickerOn(void);
void turnEverythingOn(void);
void squareZoomAround(void);
void turnOnAndOffAllByLayerUpAndDownNotTimed(void);
void layerstompUpAndDown(void);
void spiralInAndOut(void);
void turnOnAndOffAllByColumnSideways(void);
void aroundEdgeDown(void);
void turnEverythingOff(void);
void randomflicker(void);
void randomRain(void);
void diagonalRectangle(void);
void goThroughAllLedsOneAtATime(void);
void propeller(void);
void spiralInAndOut(void);
void flickerOff(void);
void turnEverythingOff(void);



void loop()
{
  turnEverythingOff();
  for (int i = 0; i < 2; i++) {
    message();
  }
  for (int i = 0; i < 2; i++) {
    text_CoLenEmYeu();
  }
  flickerOn();
  turnEverythingOn();
  delay(time);
  squareZoomAround();
  turnOnAndOffAllByLayerUpAndDownNotTimed();
  layerstompUpAndDown();
  spiralInAndOut();
  turnOnAndOffAllByColumnSideways();
  delay(time);
  aroundEdgeDown();
  turnEverythingOff();
  randomflicker();
  randomRain();
  diagonalRectangle();
  goThroughAllLedsOneAtATime();
  propeller();
  spiralInAndOut();
  flickerOff();
  turnEverythingOff();
  delay(100);
}


//turn all off
void turnEverythingOff()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 1);
  }
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 0);
  }
}

//turn all on
void turnEverythingOn()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 0);
  }
  //turning on layers
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 1);
  }
}
//turn columns off
void turnColumnsOff()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 1);
  }
}
//flicker on
void flickerOn()
{
  int i = 150;
  while (i != 0)
  {
    turnEverythingOn();
    delay(i);
    turnEverythingOff();
    delay(i);
    i -= 5;
  }
}
//turn everything on and off by layer up and down NOT TIMED
void turnOnAndOffAllByLayerUpAndDownNotTimed()
{
  int x = 75;
  for (int i = 5; i != 0; i--)
  {
    turnEverythingOn();
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 0);
      delay(x);
    }
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(layer[i], 1);
      delay(x);
    }
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(layer[i], 0);
      delay(x);
    }
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 1);
      delay(x);
    }
  }
}
//turn everything on and off by column sideways
void turnOnAndOffAllByColumnSideways()
{
  int x = 75;
  turnEverythingOff();
  //turn on layers
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 1);
  }
  for (int y = 0; y < 3; y++)
  {
    //turn on 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn off 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn on 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn off 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
  }
}
//up and down single layer stomp
void layerstompUpAndDown()
{
  int x = 75;
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 0);
  }
  for (int y = 0; y < 5; y++)
  {
    for (int count = 0; count < 1; count++)
    {
      for (int i = 0; i < 4; i++)
      {
        digitalWrite(layer[i], 1);
        delay(x);
        digitalWrite(layer[i], 0);
      }
      for (int i = 4; i != 0; i--)
      {
        digitalWrite(layer[i - 1], 1);
        delay(x);
        digitalWrite(layer[i - 1], 0);
      }
    }
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(layer[i], 1);
      delay(x);
    }
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 0);
      delay(x);
    }
  }
}
//flicker off
void flickerOff()
{
  turnEverythingOn();
  for (int i = 0; i != 150; i += 5)
  {
    turnEverythingOff();
    delay(i + 50);
    turnEverythingOn();
    delay(i);
  }
}
//around edge of the cube down
void aroundEdgeDown()
{
  for (int x = 200; x != 0; x -= 50)
  {
    turnEverythingOff();
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 1);
      digitalWrite(column[5], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[10], 0);

      digitalWrite(column[0], 0);
      delay(x);
      digitalWrite(column[0], 1);
      digitalWrite(column[4], 0);
      delay(x);
      digitalWrite(column[4], 1);
      digitalWrite(column[8], 0);
      delay(x);
      digitalWrite(column[8], 1);
      digitalWrite(column[12], 0);
      delay(x);
      digitalWrite(column[12], 1);
      digitalWrite(column[13], 0);
      delay(x);
      digitalWrite(column[13], 1);
      digitalWrite(column[15], 0);
      delay(x);
      digitalWrite(column[15], 1);
      digitalWrite(column[14], 0);
      delay(x);
      digitalWrite(column[14], 1);
      digitalWrite(column[11], 0);
      delay(x);
      digitalWrite(column[11], 1);
      digitalWrite(column[7], 0);
      delay(x);
      digitalWrite(column[7], 1);
      digitalWrite(column[3], 0);
      delay(x);
      digitalWrite(column[3], 1);
      digitalWrite(column[2], 0);
      delay(x);
      digitalWrite(column[2], 1);
      digitalWrite(column[1], 0);
      delay(x);
      digitalWrite(column[1], 1);
    }
  }
}
//random flicker
void randomflicker()
{
  turnEverythingOff();
  int x = 10;
  for (int i = 0; i != 750; i += 2)
  {
    int randomLayer = random(0, 4);
    int randomColumn = random(0, 16);

    digitalWrite(layer[randomLayer], 1);
    digitalWrite(column[randomColumn], 0);
    delay(x);
    digitalWrite(layer[randomLayer], 0);
    digitalWrite(column[randomColumn], 1);
    delay(x);
  }
}
//random rain
void randomRain()
{
  turnEverythingOff();
  int x = 100;
  for (int i = 0; i != 60; i += 2)
  {
    int randomColumn = random(0, 16);
    digitalWrite(column[randomColumn], 0);
    digitalWrite(layer[0], 1);
    delay(x + 50);
    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 1);
    delay(x);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 1);
    delay(x);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 1);
    delay(x + 50);
    digitalWrite(layer[3], 0);
    digitalWrite(column[randomColumn], 1);
  }
}
//diagonal rectangle
void diagonalRectangle()
{
  int x = 350;
  turnEverythingOff();
  for (int count = 0; count < 5; count++)
  {
    //top left
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //middle middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //bottom right
    for (int i = 8; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //bottom middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //bottom left
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //middle middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //top right
    for (int i = 8; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x);
    turnEverythingOff();
    //top middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x);
    turnEverythingOff();
  }
  //top left
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(column[i], 0);
  }
  digitalWrite(layer[3], 1);
  digitalWrite(layer[2], 1);
  delay(x);
  turnEverythingOff();
}
//propeller
void propeller()
{
  turnEverythingOff();
  int x = 90;
  for (int y = 4; y > 0; y--)
  {
    for (int i = 0; i < 6; i++)
    {
      //turn on layer
      digitalWrite(layer[y - 1], 1);
      //a1
      turnColumnsOff();
      digitalWrite(column[0], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[15], 0);
      delay(x);
      //b1
      turnColumnsOff();
      digitalWrite(column[4], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      delay(x);
      //c1
      turnColumnsOff();
      digitalWrite(column[6], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      delay(x);
      //d1
      turnColumnsOff();
      digitalWrite(column[3], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[12], 0);
      delay(x);
      //d2
      turnColumnsOff();
      digitalWrite(column[2], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[13], 0);
      delay(x);
      //d3
      turnColumnsOff();
      digitalWrite(column[1], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[14], 0);
      delay(x);
    }
  }
  //d4
  turnColumnsOff();
  digitalWrite(column[0], 0);
  digitalWrite(column[5], 0);
  digitalWrite(column[10], 0);
  digitalWrite(column[15], 0);
  delay(x);
}
//spiral in and out
void spiralInAndOut()
{
  turnEverythingOn();
  int x = 60;
  for (int i = 0; i < 6; i++)
  {
    //spiral in clockwise
    digitalWrite(column[0], 1);
    delay(x);
    digitalWrite(column[1], 1);
    delay(x);
    digitalWrite(column[2], 1);
    delay(x);
    digitalWrite(column[3], 1);
    delay(x);
    digitalWrite(column[7], 1);
    delay(x);
    digitalWrite(column[11], 1);
    delay(x);
    digitalWrite(column[15], 1);
    delay(x);
    digitalWrite(column[14], 1);
    delay(x);
    digitalWrite(column[13], 1);
    delay(x);
    digitalWrite(column[12], 1);
    delay(x);
    digitalWrite(column[8], 1);
    delay(x);
    digitalWrite(column[4], 1);
    delay(x);
    digitalWrite(column[5], 1);
    delay(x);
    digitalWrite(column[6], 1);
    delay(x);
    digitalWrite(column[10], 1);
    delay(x);
    digitalWrite(column[9], 1);
    delay(x);
    //spiral out counter clockwise
    digitalWrite(column[9], 0);
    delay(x);
    digitalWrite(column[10], 0);
    delay(x);
    digitalWrite(column[6], 0);
    delay(x);
    digitalWrite(column[5], 0);
    delay(x);
    digitalWrite(column[4], 0);
    delay(x);
    digitalWrite(column[8], 0);
    delay(x);
    digitalWrite(column[12], 0);
    delay(x);
    digitalWrite(column[13], 0);
    delay(x);
    digitalWrite(column[14], 0);
    delay(x);
    digitalWrite(column[15], 0);
    delay(x);
    digitalWrite(column[11], 0);
    delay(x);
    digitalWrite(column[7], 0);
    delay(x);
    digitalWrite(column[3], 0);
    delay(x);
    digitalWrite(column[2], 0);
    delay(x);
    digitalWrite(column[1], 0);
    delay(x);
    digitalWrite(column[0], 0);
    delay(x);
    //spiral in counter clock wise
    digitalWrite(column[0], 1);
    delay(x);
    digitalWrite(column[4], 1);
    delay(x);
    digitalWrite(column[8], 1);
    delay(x);
    digitalWrite(column[12], 1);
    delay(x);
    digitalWrite(column[13], 1);
    delay(x);
    digitalWrite(column[14], 1);
    delay(x);
    digitalWrite(column[15], 1);
    delay(x);
    digitalWrite(column[11], 1);
    delay(x);
    digitalWrite(column[7], 1);
    delay(x);
    digitalWrite(column[3], 1);
    delay(x);
    digitalWrite(column[2], 1);
    delay(x);
    digitalWrite(column[1], 1);
    delay(x);
    digitalWrite(column[5], 1);
    delay(x);
    digitalWrite(column[9], 1);
    delay(x);
    digitalWrite(column[10], 1);
    delay(x);
    digitalWrite(column[6], 1);
    delay(x);
    //spiral out clock wise
    digitalWrite(column[6], 0);
    delay(x);
    digitalWrite(column[10], 0);
    delay(x);
    digitalWrite(column[9], 0);
    delay(x);
    digitalWrite(column[5], 0);
    delay(x);
    digitalWrite(column[1], 0);
    delay(x);
    digitalWrite(column[2], 0);
    delay(x);
    digitalWrite(column[3], 0);
    delay(x);
    digitalWrite(column[7], 0);
    delay(x);
    digitalWrite(column[11], 0);
    delay(x);
    digitalWrite(column[15], 0);
    delay(x);
    digitalWrite(column[14], 0);
    delay(x);
    digitalWrite(column[13], 0);
    delay(x);
    digitalWrite(column[12], 0);
    delay(x);
    digitalWrite(column[8], 0);
    delay(x);
    digitalWrite(column[4], 0);
    delay(x);
    digitalWrite(column[0], 0);
    delay(x);
  }
}
//go through all leds one at a time
void goThroughAllLedsOneAtATime()
{
  int x = 15;
  turnEverythingOff();
  for (int y = 0; y < 5; y++)
  {
    //0-3
    for (int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count - 1], 1);
      for (int i = 0; i < 4; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count - 1], 0);
    }
    //4-7
    for (int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for (int i = 4; i < 8; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count], 0);
    }
    //8-11
    for (int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count - 1], 1);
      for (int i = 8; i < 12; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count - 1], 0);
    }
    //12-15
    for (int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for (int i = 12; i < 16; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count], 0);
    }
  }
}

void squareZoomAround() {
  for (int x = 0; x < 8; x++) {
    turnEverythingOff();
    for (int i = 1; i < 3; i++) {
      digitalWrite(layer[i], 1);
    }
    digitalWrite(column[5], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[9], 0);
    digitalWrite(column[10], 0);
    delay(time + 50);

    turnEverythingOff();
    for (int i = 0; i < 4; i += 3) {
      digitalWrite(layer[i], 1);
    }
    digitalWrite(column[0], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[12], 0);
    digitalWrite(column[14], 0);
    delay(time + 50);
  }
  for (int a = 0; a < 8; a++) {
    turnEverythingOff();
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
    digitalWrite(column[0], 0);
    digitalWrite(column[3], 0);
    digitalWrite(column[12], 0);
    digitalWrite(column[14], 0);
    delay(time);

    turnEverythingOff();
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
    digitalWrite(column[1], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[15], 0);
    delay(time);
    turnEverythingOff();
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
    digitalWrite(column[2], 0);
    digitalWrite(column[4], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[13], 0);
    delay(time);
  }
}

void z() {
  zTime = millis();
  while ((unsigned long) (millis() - zTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[14], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[14], 0);
    delay(letterTime);
  }
}
void y() {
  yTime = millis();
  while ((unsigned long) (millis() - yTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void x() {
  xTime = millis();
  while ((unsigned long) (millis() - xTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void v() {
  vTime = millis();
  while ((unsigned long) (millis() - vTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void t() {
  tTime = millis();
  while ((unsigned long) (millis() - tTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void s() {
  sTime = millis();
  while ((unsigned long) (millis() - sTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void r() {
  rTime = millis();
  while ((unsigned long) (millis() - rTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void q() {
  qTime = millis();
  while ((unsigned long) (millis() - qTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void p() {
  pTime = millis();
  while ((unsigned long) (millis() - pTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void o() {
  oTime = millis();
  while ((unsigned long) (millis() - oTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);
  }
}
void n() {
  nTime = millis();
  while ((unsigned long) (millis() - nTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[14], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[14], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[14], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[14], 0);
    delay(letterTime);
  }
}
void l() {
  lTime = millis();
  while ((unsigned long) (millis() - lTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);
  }
}
void k() {
  kTime = millis();
  while ((unsigned long) (millis() - kTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void I() {
  iTime = millis();
  while ((unsigned long) (millis() - iTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void h() {
  hTime = millis();
  while ((unsigned long) (millis() - hTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[7], 0);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);
  }
}
void m() {
  mTime = millis();
  while ((unsigned long) (millis() - mTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}
void g() {
  gTime = millis();
  while ((unsigned long) (millis() - gTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void f() {
  fTime = millis();
  while ((unsigned long) (millis() - fTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void a() {
  aTime = millis();
  while ((unsigned long) (millis() - aTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);
  }
}

void u() {
  uTime = millis();
  while ((unsigned long) (millis() - uTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void c() {
  cTime = millis();
  while ((unsigned long) (millis() - cTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void d() {
  dTime = millis();
  while ((unsigned long) (millis() - dTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    delay(letterTime);
  }
}

void b() {
  bTime = millis();
  while ((unsigned long) (millis() - bTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);
  }
}

void e() {
  eTime = millis();
  while ((unsigned long) (millis() - eTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void J() {
  jTime = millis();
  while ((unsigned long) (millis() - jTime) < timeDisplayCharacter) {
    turnEverythingOff();
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[2], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[1], 1);
    digitalWrite(column[7], 0);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(layer[0], 1);
    digitalWrite(column[3], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[11], 0);
    delay(letterTime);
  }
}

void space() {
  turnEverythingOff();
  delay(timeEachWord);
}

void message() {
  int len = str.length();
  char message[len];
  str.toCharArray(message, len + 1);
  for (int i = 0; i < len; i++) {
    switch (message[i]) {
      case 'a':
        a();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'b':
        b();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'c':
        c();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'd':
        d();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'e':
        e();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'f':
        f();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'g':
        g();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'h':
        h();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'i':
        I();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'j':
        J();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'k':
        k();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'l':
        l();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'm':
        m();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'n':
        n();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'o':
        o();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'p':
        p();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'q':
        q();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'r':
        r();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 's':
        s();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 't':
        t();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'u':
        u();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'v':
        v();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'x':
        x();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'y':
        y();
        turnEverythingOff();
        delay(flashChar);
        break;
      case 'z':
        z();
        turnEverythingOff();
        delay(flashChar);
        break;
      case ' ':
        space();
        break;
    }
  }
  turnEverythingOff();
  delay(timeEndMessage);
}

void text_CoLenEmYeu() {
  unsigned long time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    for (int i = 0; i < 4; i++) {
      digitalWrite(layer[i], 1);
    }
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[3], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[2], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(scrollCol[1], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(scrollCol[0], 0);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    delay(letterTime);
  }
}

void anhYeuEm() {
  unsigned long time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);
  }

  time1 = millis();
}
