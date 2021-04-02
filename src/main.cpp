#include <Arduino.h>
#include <iostream>

using namespace std;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
}

void loop() {
  int x = analogRead(A0);
  cout << x << endl;
}