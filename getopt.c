#include <unistd.h>
#include <stdio.h>

int
main(int argc, char* argv[])
{
 char ch;

  while ((ch = getopt(argc, argv, "d:f:kg:")) != -1) {
    switch (ch) {
      case 'd':
        printf("-d %s\n", optarg);
        break;
      case 'f':
        printf("-f %s\n", optarg);
        break;
      case 'k':
        printf("-k %s\n", optarg);
        break;
      case 'g':
        printf("-g %s\n", optarg);
        break;
      default:
        printf("-%c %s\n", ch, optarg);
        break;
    }
  }

  printf("optind %d\n", optind);
  printf("argv[optind] %s\n", argv[optind]);
  printf("argc %d\n", argc);
  return 0;
}
