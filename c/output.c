#import <stdio.h>
#import <time.h>

void output ( int (*f)() ) {

  int t,
      repeat = 10,
      answer;
  double timespent;

  for (t = 0; t < repeat; t++) {

    clock_t begin = clock();

    answer = (*f)();

    clock_t end = clock();

    double thistimespent = (double)(end - begin) / CLOCKS_PER_SEC;
    timespent += thistimespent;

  }

  timespent /= repeat;

  printf("Answer = %d\n", answer);
  printf("Time spent = %f\n", timespent);

}
