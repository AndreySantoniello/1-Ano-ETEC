#include <stdio.h>

void Leitor_num (float *_v1, float *_v2, float *_v3) 
{
    scanf("%f", _v1);
    scanf("%f", _v2);
    scanf("%f", _v3);
}

float Exibir_num (float _v1, float _v2, float _v3) 
{
    if (_v1 < _v2 && _v1 < _v3)
        return(_v1);

    if (_v2 < _v1 && _v2 < _v3 )
        return(_v2);
    else 
        return(_v3);
}

int main() {
    float v1, v2, v3, m;

    Leitor_num(&v1, &v2, &v3);

    m = Exibir_num(v1, v2, v3);

    printf("O maior e %.0f", m);
}