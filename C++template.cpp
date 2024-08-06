#include<math.h>
#include<string>
#include<vector>

using namespace std; //입출력 네임스페이스 생략

//입력
cin >> ~~ >> ~~ >>; //std::cin
//출력
cout << ~~ << "\n" << ~~ << endl; //std::cout

//자료형 auto, 데이터의 자료형이 확정적으로 추측 가능한 경우 사용
auto a;
for(auto i = 0; ~; ~)

//범위기반 for문, 배열의 값을 하나씩 꺼내서 변수 이름에 넣어 반복
for(auto elem : array){
  ~~
}

//열거형 자료형
enum Color{
  red,    //0에 대응
  blue,   //1에 대응
  green,  //2에 대응
  black = -2,  //-2에 대응
  white        //-1에 대응
};

//2쌍 데이터 #include <utility>
vector<pair<int, int>> v;
v.push_back(make_pair(값, 값));
v[index].first v[index].second //접근

//3쌍 데이터 #include <tuple>
vector<tuple<int, int, int>> v;
v.push_back(make_tuple(값, 값, 값));
