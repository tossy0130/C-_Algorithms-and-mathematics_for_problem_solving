#include <iostream>
using namespace std;

// サイコロの　青、　赤　の期待値計算
int N, B[100009], R[100009]; // B = ブルー、 R = レッド

int main() {
    // 入力
    cin >> N;

    for(int i = 1; i <= N; i++) cin >> B[i];
    for(int i = 1; i <= N; i++) cin >> R[i];

    // 答えの計算 => 答えの出力
    double Blue = 0.0, Red = 0.0;
    for(int i = 1; i <= N; i++)
    {
        Blue += 1.0 * B[i] / N;  // N 総量
        Red += 1.0 * R[i] / N; 
    }

    printf("%.12lf\n", Blue + Red);
    return 0;
}

