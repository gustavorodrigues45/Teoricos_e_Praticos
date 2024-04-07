#include<stdio.h>


void media_arit(float a, float b, float c, float *media) {
  *media = (a + b + c) / 3.0f; // Média aritmética de a, b e c armazenada em media
}

int main() {
  float x = 5.5, y = 10.2, z = 15.8;
  float media;

  media_arit(x, y, z, &media);

  printf("Media: %.2f\n", media);

  return 0;
}
