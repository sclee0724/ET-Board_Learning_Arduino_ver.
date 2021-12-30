/******************************************************************************************
 * FileName     : 03._button_all_status
 * Description  : 모든 버튼을 눌렀다 뗐다 해보기(시리얼 모니터 출력)
 * Author       : 이인정
 * Created Date : 2021.05.28
 * Reference    : 
 * Modified     : 2021.06.02 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int button_red    = D6;                                 // 빨강 버튼
int button_blue   = D7;                                 // 파랑 버튼
int button_green  = D8;                                 // 초록 버튼
int button_yellow = D9;                                 // 노랑 버튼


void setup() {
  pinMode(button_red, INPUT);                           // 핀 모드 설정
  pinMode(button_blue, INPUT);                          // 핀 모드 설정
  pinMode(button_green, INPUT);                         // 핀 모드 설정
  pinMode(button_yellow, INPUT);                        // 핀 모드 설정
  Serial.begin(115200); 
}


void loop() {
  int button_red_status = digitalRead(button_red);      // 빨강 버튼의 값을 저장
  int button_blue_status = digitalRead(button_blue);    // 파랑 버튼의 값을 저장
  int button_green_status = digitalRead(button_green);  // 초록 버튼의 값을 저장
  int button_yellow_status = digitalRead(button_yellow);// 노랑 버튼의 값을 저장
  if(button_red_status == LOW){                         // 빨강 버튼이 눌렸는지 체크
    Serial.println("빨간버튼이 눌림");
    }
  if(button_blue_status == LOW){                        // 파랑 버튼이 눌렸는지 체크
    Serial.println("파란버튼이 눌림");
    }
  if(button_green_status == LOW){                       // 초록 버튼이 눌렸는지 체크
    Serial.println("초록버튼이 눌림");
    }
  if(button_yellow_status == LOW){                      // 노랑 버튼이 눌렸는지 체크
    Serial.println("노란버튼이 눌림");
    }
    
  // 시리얼 플로트를 보기 위한 코드입니다.
  Serial.print(button_blue_status);                     // 파랑 버튼 상태 체크
  Serial.print(" ");
  Serial.print(button_red_status);                      // 빨강 버튼 상태 체크
  Serial.print(" ");
  Serial.print(button_green_status);                    // 초록 버튼 상태 체크
  Serial.print(" ");
  Serial.println(button_yellow_status);                 // 노랑 버튼 상태 체크
  
  delay(100);                                           // 0.1초 대기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
