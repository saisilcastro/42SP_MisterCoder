n=$1
file=$2
gcc ./ex$n/main.c ./ex$n/$file.c -o ./ex$n/main -Wall -Wextra -Werror