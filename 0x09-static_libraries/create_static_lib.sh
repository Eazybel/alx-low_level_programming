create_static_lib.sh

#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
