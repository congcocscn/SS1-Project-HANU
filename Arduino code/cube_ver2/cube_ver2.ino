int layer[4] = {A3, A2, A1, A0}; //initializing and declaring led layers
int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4}; //initializing and declaring led rows
int scrollCol[4] = {10, 6, 2, A5};
int col[12] = {A5, 2, 6, 10, 11, 12, 13, 9, 5, 1, 0, A4};
int time = 150;
int letterTime = 1;
int heartNum = 10;
unsigned long timeScroll = 400;
//--------------------------------------------------------------------------------------------------
void setup() {
  for (int i = 0; i < 16; i++)
  {
    pinMode(column[i], OUTPUT);  //setting rows to ouput
  }

  for (int i = 0; i < 4; i++)
  {
    pinMode(layer[i], OUTPUT);  //setting layers to output
  }
}


//-------------------------------------------------------------------------------------------------------
void anhYeuEm(void);
void text_CoLenEmYeu(void);



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void loop() {
  anhYeuEm();
  for (int i = 0; i < 2; i++) {
    text_CoLenEmYeu();
  }
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[6], 0);
    digitalWrite(layer[1], 1);
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
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
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

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
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

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
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

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
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
    digitalWrite(layer[1], 1);
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
    digitalWrite(col[5], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[4], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
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
    digitalWrite(col[4], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[3], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
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
    digitalWrite(col[3], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
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
    digitalWrite(col[1], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  time1 = millis();
  while ((unsigned long)(millis() - time1) < timeScroll) {
    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
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
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[2], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[1], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    delay(letterTime);

    turnEverythingOff();
    digitalWrite(col[0], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[0], 1);
    delay(letterTime);
  }

  for (int i = 0; i < heartNum; i++) {
    time1 = millis();
    while ((unsigned long)(millis() - time1) < timeScroll) {
      turnEverythingOff();
      digitalWrite(col[4], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[3], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[2], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[1], 0);
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
      digitalWrite(col[5], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[4], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[3], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[2], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
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
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[4], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[3], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
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
      digitalWrite(col[7], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[6], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[5], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[4], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
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
      digitalWrite(col[8], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[7], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[6], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[5], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
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
      digitalWrite(col[9], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[8], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[7], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[6], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
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
      digitalWrite(col[10], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[9], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[8], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[7], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[6], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);
    }

    time1 = millis();
    while ((unsigned long)(millis() - time1) < timeScroll) {
      turnEverythingOff();
      digitalWrite(col[11], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[10], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[9], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[8], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[7], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);
    }

    time1 = millis();
    while ((unsigned long)(millis() - time1) < timeScroll) {
      turnEverythingOff();
      digitalWrite(col[0], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[11], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[10], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[9], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[8], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);
    }

    time1 = millis();
    while ((unsigned long)(millis() - time1) < timeScroll) {
      turnEverythingOff();
      digitalWrite(col[1], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[0], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[11], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[10], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[9], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);
    }

    time1 = millis();
    while ((unsigned long)(millis() - time1) < timeScroll) {
      turnEverythingOff();
      digitalWrite(col[2], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[1], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[0], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[11], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[10], 0);
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
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[1], 0);
      digitalWrite(layer[3], 1);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[0], 0);
      digitalWrite(layer[2], 1);
      digitalWrite(layer[1], 1);
      digitalWrite(layer[0], 1);
      delay(letterTime);

      turnEverythingOff();
      digitalWrite(col[11], 0);
      digitalWrite(layer[1], 1);
      delay(letterTime);
    }
  }
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
