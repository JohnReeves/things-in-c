
clear 
echo '+------------------+'
cal
echo '+------------------+'
date +'%d/%m/%Y %H:%M:%S'
echo '+------------------+'
echo ' '

# gcc -o sample sample.c
# including any other gcc flags you like
# ./path-to-sample/sample

echo "building: "
echo '+------------------+'
echo "simple-rpn-calc.c"
echo '+------------------+'
echo "binaries in ./Results"
echo '+------------------+'
echo ' '

# gcc hello.c -o ./Results/hello
# ./Results/hello

# clang-7 -pthread -lm -o quizz simple-quizz.c
# ./quizz

# clang-7 -pthread -lm -o rock simple-rock-paper-scissors.c
# ./rock

clang-7 -pthread -lm -o rpn-calc simple-rpn-calc.c
./rpn-calc
./rpn-calc 10
./rpn-calc 10 10
./rpn-calc 10 10 +
