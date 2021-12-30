/******************************************************************************************
 * FileName     : 02._servo_motor_timer
 * Description  : 서보모터 회전 해보기(0도, 180도)
 * Author       : 이인정
 * Created Date : 2021.06.08
 * Reference    : 
 * Modified     : 2021.06.08 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

#include <Servo.h>

static const int servoPin = D2;     // 서보모터
Servo servo;


void setup() {
  Serial.begin(115200);             // 통신속도
  servo.attach(servoPin);
}


void loop() {    
  servo.write(180);                 // 서보모터 180도까지 회전
  delay(2000);                      // 2초 대기
  
  servo.write(0);                   // 서보모터 0도까지 회전
  delay(2000);                      // 2초 대기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================