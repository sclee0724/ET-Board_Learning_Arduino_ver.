/******************************************************************************************
* FileName: 04._Bluetooth_photoresistor_sensoer
* Description : 가변저항값을 블루투스로 넘겨주기
* Author : 이인정
* Created Date : 2021.06.02
* Reference : 
* modified : 2021.06.02 : LIJ : 헤더 수정
******************************************************************************************/
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

char names[] = "your_name";          // 자신의 이름을 적어주세요
int sensor = A0;                     // 가변저항센서

void setup() {
  Serial.begin(115200);              // 통신속도 설정
  SerialBT.begin(names);             // 자신의 이름으로 된 블루투스 생성
}

void loop() {
  int sensor_result = analogRead(sensor); // 센서가 측정한 값 저장
  
  //if (Serial.available()) {
    SerialBT.write(65);
    SerialBT.write('\n');
    //SerialBT.write(Serial.read());
  //}
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }
  delay(20);
  
}
//┌────────────────────────────────┐
//│                                                    │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr       │
//│                                                    │
//└────────────────────────────────┘
