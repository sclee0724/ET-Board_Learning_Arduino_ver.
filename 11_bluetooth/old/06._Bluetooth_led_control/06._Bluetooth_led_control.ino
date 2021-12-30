/******************************************************************************************
* FileName: 06._Bluetooth_led_control
* Description : 블루투스를 이용하여 LED 컨트롤하는 예제
* Author : 위대원
* Created Date : 2021.06.02
* Reference : 
* modified : 2021.06.02 : WDW : 헤더 수정
******************************************************************************************/
// 시리얼 통신으로 제어
#include "BluetoothSerial.h"

#define led_red D2                   // 빨강 LED
#define led_blue D3                  // 파랑 LED
#define led_green D4                 // 초록 LED
#define led_yellow D5                // 노랑 LED

BluetoothSerial SerialBT;


void setup() {
  Serial.begin(115200);              // 통신 속도
  
  pinMode(led_red, OUTPUT);          // 핀모드 설정
  pinMode(led_blue, OUTPUT);         // 핀모드 설정
  pinMode(led_green, OUTPUT);        // 핀모드 설정
  pinMode(led_yellow, OUTPUT);       // 핀모드 설정
  
  SerialBT.begin("your_name");       // 자신의 이름을 적어주세요 !
  Serial.println("The device started, now you can pair it with bluetooth!"); 
}


void loop() {
  char cmd;
  
  if(SerialBT.available()){          // 입력받은 값을 저장하고 입력 받은 값 출력 
    cmd =(char)SerialBT.read();
    Serial.print("입력값 = ");
    Serial.println(cmd);
  }
  
  if(cmd == '1'){                    // 1 입력되었을 때 빨강색 LED 켜기
    Serial.println("빨강 온 !!!!");
    digitalWrite(led_red, HIGH);
  }  
  if(cmd == '2'){                    // 2 입력되었을 때 빨강색 LED 끄기
    Serial.println("빨강 오프 !!");
    digitalWrite(led_red, LOW);
  }
 
  if(cmd == '3'){                    // 3 입력되었을 때 파랑색 LED 켜기
    Serial.println("파랑 온 !!!!");
    digitalWrite(led_blue, HIGH);
  }  
  if(cmd == '4'){                    // 4 입력되었을 때 파랑색 LED 끄기
    Serial.println("파랑 오프 !!");
    digitalWrite(led_blue, LOW);
  }

  if(cmd == '5'){                    // 5 입력되었을 때 초록색 LED 켜기
    Serial.println("초록 온 !!!!");
    digitalWrite(led_green, HIGH);
  }  
  if(cmd == '6'){                    // 6 입력되었을 때 초록색 LED 끄기
    Serial.println("초록 오프 !!");
    digitalWrite(led_green, LOW);
  }

  if(cmd == '7'){                    // 7 입력되었을 때 노랑색 LED 켜기
    Serial.println("노랑 온 !!!!");
    digitalWrite(led_yellow, HIGH);
  }  
  if(cmd == '8'){                    // 9 입력되었을 때 노랑색 LED 끄기
    Serial.println("노랑 오프 !!");
    digitalWrite(led_yellow, LOW);
  }
  delay(20);                         // 0.02초 대기
}
//┌────────────────────────────────┐
//│                                                    │
//│     (주)한국공학기술연구원 http://et.ketri.re.kr       │
//│                                                    │ 
//└────────────────────────────────┘
