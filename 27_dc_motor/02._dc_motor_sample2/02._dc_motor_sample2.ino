/******************************************************************************************
 * FileName     : 02._dc_motor_simple2
 * Description  : DC모터를 이용해 바퀴 전진 및 후진 해보기
 * Author       : 임은희
 * Created Date : 2021.12.07
 * Reference    : 
 * Modified     : 2021.12.14 : LEH : 코드 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int led_red = D2;                            // 빨강 LED
int led_blue = D3;                           // 파랑 LED


void setup() {
  // initialize digital pin for Moter-L
 pinMode(D2, OUTPUT);                        // 핀 모드 설정     
 pinMode(D3, OUTPUT);                        // 핀 모드 설정
}


void loop() {
  // forward
 digitalWrite(D2, HIGH);                     // 빨강 LED 켜기
 digitalWrite(D3, LOW);                      // 파랑 LED 끄기
 delay(5000);                                // 5초 기다리기

  // stop
 digitalWrite(D2, LOW);                      // 빨강 LED 끄기
 digitalWrite(D3, LOW);                      // 파랑 LED 끄기
 delay(5000);                                // 5초 기다리기
   
  // backward
 digitalWrite(D2, HIGH);                     // 빨강 LED 켜기
 digitalWrite(D3, HIGH);                     // 파랑 LED 켜기
 delay(5000);                                // 5초 기다리기
  
  // stop
 digitalWrite(D2, LOW);                      // 빨강 LED 끄기
 digitalWrite(D3, LOW);                      // 파랑 LED 끄기
 delay(5000);                                // 5초 기다리기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
