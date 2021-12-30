/******************************************************************************************
 * FileName     : 02._button_two_status
 * Description  : 버튼 두 개를 눌렀다 뗐다 해보기(시리얼 모니터 출력)
 * Author       : 이인정
 * Created Date : 2021.05.28
 * Reference    : 
 * Modified     : 2021.06.02 : LIJ : 헤더 수정
 * Modified     : 2021.06.09 : WDW : 잘못된 주석 수정
 * Modified     : 2021.06.09 : WDW : 시리얼 플로터를 위한 출력 삭제
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int button_red    = D6;                                  // 빨강 버튼
int button_blue   = D7;                                  // 파랑 버튼


void setup() {
  pinMode(button_red, INPUT);                            // 핀 모드 설정
  pinMode(button_blue, INPUT);                           // 핀 모드 설정
  Serial.begin(115200);
}


void loop() {
  int button_red_status = digitalRead(button_red);       // 빨강 버튼의 값을 저장
  int button_blue_status = digitalRead(button_blue);     // 파랑 버튼의 값을 저장

  // 버튼이 눌렸는지 체크 버튼이 눌리면 LOW 눌리지 않으면 HIGH
  if(button_red_status == LOW){  
    Serial.println("빨강 버튼이 눌림");
    }  
  if(button_blue_status == LOW){
    Serial.println("파랑 버튼이 눌림");
    }  
  Serial.print(button_blue_status);
  Serial.print(" ");
  Serial.println(button_red_status);
  delay(100);                                            // 0.1초 대기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
