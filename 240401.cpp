// #include <iostream>

// int main() {
//     int a = 10;
//     float b = -10.1;
//     char c = 'A';

//     std::cout<<"정수형 데이터 a의 값 = "<<a<<std::endl<<
//     "실수형 데이터 b의 값 = "<<b<<std::endl<<
//     "문자형 데이터 c의 값 = "<<c<<std::endl ;

//     return 0; 
// }


// int main(){
//     int a , b , c = 10 ;  // int형 데이터를 담는 a,b,c 변수를 동시에 선언하고 c는 선언과 동시에 값을 할당
//     float d = 10.2 , e , f ;  // float형 데이터를 담는 d,e,f 변수를 동시에 선언하고 d는 선언과 동시에 값을 할당
//     a = 0; // 선언만 해 두었던 a 변수에 값 할당
//     b = -20; // 선언만 해 두었던 b 변수에 값 할당
//     e = f = 3.14; // 여러 변수에 같은 값을 삽입하는 경우에 이렇게 선언할 수도 있다.
//     std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e<<'\n'<<f<<'\n'; // 모든 변수 출력
// }

// #include <iostream> // 표준 입출력 담당 헤더파일 포함
// int main(){
//     int a; // int형 데이터를 담을 a 선언

//     std::cout<<"당신의 나이를 입력하세요 : " ; // 무엇을 입력해야 하는지 사용자에게 알려주기 위한 출력문
//     std::cin >> a ; // 사용자로부터 받은 값을 변수 a에 삽입
//     std::cout<<"당신의 나이는 "<<a<<"살 이군요 !"; // 입력받은 값을 포함하여 출력함
//     return 0;
// }

// #include <iostream> // 표준 입출력 담당 헤더파일 포함
// int main(){
//     char fir_nm , grade ;
//     int age ;
//     std::cout<<"당신의 이름 첫 이니셜 알파벳, 성적, 나이를 입력하세요 : ";
//     std::cin>>fir_nm>>grade>>age ;
//     std::cout<<"당신의 이니셜은 "<<fir_nm<<"이고, 성적은 "<<grade<<"이며, 나이는 "<<age<<"살 이군요!!\n";
//     return 0;
// }

// #include <iostream>
// int main(){
//     int a = 10 , b = 4 ;
//     std::cout<<"10 더하기 4 는 "<< a+b <<std::endl
//     <<"10 빼기 4 는 "<< a-b <<std::endl
//     <<"10 곱하기 4 는 "<< a*b <<std::endl
//     <<"10 나누기 4의 몫은 "<< a/b <<std::endl
//     <<"10 나누기 4의 나머지는 "<< a%b <<std::endl;
//     return 0;
// }


// # include <iostream>
// int main(){
//     int a1 = 10 , a2 = 4 ;
//     float b1 = 10 , b2 = 4;

//     std::cout<<"정수형 10 과 4 의 / 연산값 : "<< a1/a2 <<"\n"
//     <<"실수형 10 과 4 의 / 연산값 : "<< b1/b2 <<"\n";

//     // 첫줄 출력은 정수데이터/정수데이터 이므로 나눈 몫만을 출력합니다.
//     // 두번째 줄 출력은 실수데티어/실수데이터 이므로 나눈 값을 소숫점까지 정확히 표현합니다.
// }


# include <iostream>
int main(){
    int year_1 = 2024 , year_2 ;
    // year_1 = 현재 년도. 초기값이 할당되어 있음.
    // year_2 = 사용자로부터 받아 오는 출생 년도. 

    char name ; 
    // 사용자로부터 받아 오는 이니셜을 넣을 변수.

    std::cout<<"당신의 출생 년도와 이름 첫 이니셜을 입력하시오 : ";
    std::cin>>year_2>>name;

    std::cout<<"당신은 한국나이로 "<<year_1 - year_2 + 1<<"살 이군요!\n"<<
    // 현재 년도 - 출생 년도 + 1 을 출력하도록.
    "당신의 이름의 이니셜은 "<<name<<"이군요!\n";
    return 0;
}


// #include <iostream>
// int main(){
//     int a , b ;
//     std::cout<<"두 정수를 입력하세요 : ";
//     std::cin>>a>>b;

//     int ans_1 = a / b ; 
//     int ans_2 = a % b ;

//     std::cout<<a<<"와"<<b<<"의 나누기 몫은"<<ans_1<<"이고, 나누기 나머지는"
//     <<ans_2<<"입니다.\n";
//     return 0;
// }