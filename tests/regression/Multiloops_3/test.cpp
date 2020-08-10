#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]){

  /*
   * Check the inputs.
   */
  if (argc < 3){
    fprintf(stderr, "USAGE: %s ITERATIONS SEED\n", argv[0]);
    return 1;
  }

  /*
   * Fetch the inputs.
   */
  auto iterations = atoll(argv[1]);
  if (iterations < 1){
    iterations = 1;
  }
  auto seed = atoll(argv[2]);

  int *ar = (int *)malloc(sizeof(int) * iterations);
  for (auto i=0; i < iterations; i++){
    if (seed == 14324){
      printf("Hello\n");
    }
    
    float f = (float)(i * rand());
    f = sqrt(f);
    f = sqrt(f);
    f = sqrt(f);
    f = sqrt(f);

    for (auto j=0; j < iterations; j++){
      ar[j] += i * seed;
      ar[j] += i * 23;
      ar[j] /= 2 + seed;
      ar[j] /= 3 - seed;
      ar[j] *= 41;
    }

    for (auto j=0; j < iterations; j++){
      ar[j] += i * seed;
      ar[j] += i * 23;
      ar[j] /= 2 + seed;
      ar[j] /= 3 - seed;
      ar[j] *= 41;
    }

  }
 
  unsigned long long int t;
  for (auto j=0; j < iterations; j++){
    t += ar[j];
  }
  printf("%lld\n", t);

  return 0;
}
