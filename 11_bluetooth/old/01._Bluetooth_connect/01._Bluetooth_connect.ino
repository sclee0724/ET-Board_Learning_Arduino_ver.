/******************************************************************************************
* FileName: 01._Bluetooth_connect
* Description : 블루투스로 연결하는 예제
* Author : 이인정
* Created Date : 2021.06.03
* Reference : 
* modified : 2021.06.03 : LIJ : 헤더 수정
******************************************************************************************/
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

char names[] = "your_name";          // 자신의 이름을 적어주세요

void setup() {
  Serial.begin(115200);              // 통신속도 설정
  SerialBT.begin(names);             // 자신의 이름으로 된 블루투스 생성
  int connected = SerialBT.connect(names);

  if(connected){
    Serial.println("블루투스가 연결되었습니다 !!!");
  }else{
    while(!SerialBT.connected(1000)) {
      Serial.println("대충 연결 안됐다는 메시지"); 
    }
  }
}

void loop() {
  
}
//┌────────────────────────────────┐
//│                                                    │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr       │
//│                                                    │
//└────────────────────────────────┘
