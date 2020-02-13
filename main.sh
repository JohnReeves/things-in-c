
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
echo "simple-rpn-calc.cpp"
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

#clang-7 -pthread -lm -o rpn-calc simple-rpn-calc.c
#./rpn-calc
#./rpn-calc 10
#./rpn-calc 10 10
#./rpn-calc 10 10 +
#./rpn-calc 10 10 x
#./rpn-calc 10 10 /
#./rpn-calc 10 10 -

# g++ -o rpn-calcpp simple-rpn-calc.cpp
clang++ -std=c++11 -o rpn-calcpp simple-rpn-calc.cpp
./rpn-calcpp '10 10 +' # 20
./rpn-calcpp '10 -10 -' # 20
./rpn-calcpp '-10 -10 +' # -20
./rpn-calcpp '10 10 -' # 0
./rpn-calcpp '10 10 *' # 100
./rpn-calcpp '2 e *' # 5.43656
./rpn-calcpp '2 p +' # 5.1415926
./rpn-calcpp '10 10 /' # 1
./rpn-calcpp '10 0 ^' # 1
./rpn-calcpp '10 1 ^' # 10
./rpn-calcpp '10 3 ^' # 1000
./rpn-calcpp '3 4 / 5 * 2 -' # 1.75
./rpn-calcpp '3 4 / 5 10 * 2 -' # 48
# .        '((15 ÷ (7 − (1 + 1))) × 3) − (2 + (1 + 1))'
./rpn-calcpp '15 7 3 1 + − ÷ 3 × 3 4 1 + + -' # -5
./rpn-calcpp '15 7 3 1 + − ÷ 3 ^ 3 4 1 +'
./rpn-calcpp '12 2 %' # 2
