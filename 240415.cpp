// #include <iostream>

// int main()
// {

//     // char name1[5] = {'k', 'o', 'r', 'e', 'a'};
//     //  끝에 널 문자가 없기에 단순 문자 배열

//     // 여기부터 문자열 데이터 만드는 방법
//     char name1[6] = {'k', 'o', 'r', 'e', 'a', '\0'};
//     // C-스트링 문자열 데이터. 끝에 널 문자가 들어가 있음.

//     char name3[6] = "korea";
//     // 할당치를 정한 후 문자열데이터를 만드는 다른 방법

//     char name4[] = "korea";
//     // 자동으로 널 문자 포함 6칸을 할당받는 문자열 데이터 만드는 방법

//     char name5[10] = "korea";
//     // name5 에는 {'k','o','r','e','a','\n','\n','\n','\n','\n'} 가 들어간다.

//     std::cout << name1 << name3 << name4 << name5;
// }

// #include <iostream>

// int main()
// {
//     char name5[10] = "korea";

//     std::cout << name5;

//     char name5[10] = "korea";

//     std::cout << name5;
//     return 0;
// }

// #include <iostream>
// #include <string>
// int main()
// {
//     std::string name("jaehyeong whang");
//     int age = 20;
//     std::string department("department of control and robot engineering");

//     std::cout << "name : " << name << std::endl
//               << "age : " << age << std::endl
//               << "department : " << department;

//     return 0;
// }

// char address[100];
// std::cout << "당신의 주소를 입력해 주세요 : ";
// std::cin.getline(address, 100, '\n');
// std::cout << address;
// return 0;

// int main()
// {
//     char name1[20] = "jaehyeong jeong";
//     char name2[30] = "gyeongsang national univ";

//     std::cout << name1 << std::endl
//               << name2;

//     return 0;
// }

// char name[9];
// // 한국어 이름 최대 4글자(8바이트) + 널문자(1바이트) 로 할당해 둠.
// char univ[30];

// // std::cout << "이름을 입력하세요 : ";
// // std::cin >> name;
// // std::cout << "대학교는 어디신지요 ?:";
// // std::cin >> univ;

// // std::cout << "당신의 이름은" << name << "이고 대학교는 " << univ << "이군요!\n";

// // bool a;
// // std::cout << "당신의 성별이 여자면 1 남자면 0를 입력하세요 : ";
// // std::cin >> a;

// // if (a == true)
// // {
// //     std::cout << "당신은 여성입니다.";
// // }
// // else
// // {
// //     std::cout << "당신은 남성입니다.";
// // }
// // return 0;

// // #include <iostream>

// // int main()
// // {
// //     int a;
// //     std::cout << "당신의 나이를 입력하세요 > ";
// //     std::cin >> a;

// //     if (a > 60)
// //     {
// //         std::cout << "당신은 할아버지 입니다!!!";
// //     }
// //     else if (a > 40)
// //     {
// //         std::cout << "당신은 아조씨 입니다!!!";
// //     }
// //     else if (a > 20)
// //     {
// //         std::cout << "당신은 젊은이 입니다!!!";
// //     }
// //     else
// //     {
// //         std::cout << "당신은 유아 입니다!!!";
// //     }
// //     return 0;
// // }

// // int a, b;

// // std::cout << "값 1을 입력하세요 >> ";
// // std::cin >> a;
// // std::cout << "값 2을 입력하세요 >> ";
// // std::cin >> b;

// // std::cout << "값 1이 값 2보다 큰지 여부 : " << (a > b) << "\n값 1이 값 2보다 작은지 여부 : " << (a < b)
// //           << "\n값 1이 값 2와 같은지 여부 : " << (a == b) << "\n값 1이 값 2와 다른지 여부 : " << (a != b);

// // return 0;

// #include <iostream>
// int main()
// {
//     int score;
//     char gr;
//     std::cout << "당신의 성적(0~100)을 입력 : ";
//     std::cin >> score;

//     if (score >= 90) // 100~90
//     {
//         gr = 'A';
//     }
//     else if (score >= 80) // 89~80
//     {
//         gr = 'B';
//     }
//     else if (score >= 70) // 79~70
//     {
//         gr = 'C';
//     }
//     else if (score >= 60) // 69~60
//     {
//         gr = 'D';
//     }
//     else // 59 이하
//     {
//         gr = 'F';
//     }

//     std::cout << "당신의 학점은 " << gr << "입니다.\n";
// }

#include <iostream>
#include <string>

int main()
{
    int mid, fin, att; // 순서대로 중간/기말/출석 점수를 넣을 int형 변수
    std::string grade;

    std::cout << "중간고사 점수(최대 40)를 입력하세요 > ";
    std::cin >> mid;
    std::cout << "기말고사 점수(최대 40)를 입력하세요 > ";
    std::cin >> fin;
    std::cout << "출석 점수(최대 20)를 입력하세요 > ";
    std::cin >> att;

    int sum = mid + fin + att; // 점수 총합 구하기

    if (sum > 90 && att >= 10) // 총 점수 합이 91 이상 그리고 출석점수가 10 이상일 때
    {
        grade = "A+";
    }
    else if (sum > 80 && att >= 10) // 총 점수 합이 81 이상 그리고 출석점수가 10 이상일 때
    {
        grade = 'A';
    }
    else if (sum > 70 && att >= 10) // 총 점수 합이 71 이상 그리고 출석점수가 10 이상일 때
    {
        grade = 'B';
    }
    else if (sum > 60 && att >= 10) // 총 점수 합이 61 이상 그리고 출석점수가 10 이상일 때
    {
        grade = 'C';
    }
    else if (sum > 50 && att >= 10) // 총 점수 합이 51 이상 그리고 출석점수가 10 이상일 때
    {
        grade = 'D';
    }
    else // 아닌 모든 경우
    {
        grade = 'F';
    }

    std::cout << "당신의 총합 점수는" << sum << "이고 학점은 " << grade << "입니다.\n";
    return 0;
}

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string name; // 비어있는 스트링 클래스 name 객체 선언

//     std::cout << "이름을 입력하세요 > ";
//     std::cin >> name;

//     std::cout << name;

//     return 0;

// if (grade == "F") // grade 변수는 문자열을 담는 변수이기에 "" 로 묶어줘야 합니다.
// {
//     std::cout << "F학점인 이유는 총 점수가 50점 이하이거나 출석점수가 10점 미만인 경우입니다.";
// }

// }
