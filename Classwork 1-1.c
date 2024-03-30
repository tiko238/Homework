/*
На вход программе подается беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
Требуется циклически сдвинуть биты числа N вправо на K битов и вывести полученное таким образом
число.
Данные на входе: Два целых числа: 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
Данные на выходе: Одно целое число
Пример №1
Данные на входе: 2 1
Данные на выходе: 1
*/


#include <stdio.h>
#include <stdint.h>
int main(){
uint32_t N;
int K;
scanf("%d %d", &N, &K);

uint32_t res;
uint32_t temp;

uint32_t mask = ~0;
mask >>= (32 - K);
// 000011
temp = N | mask;
// 000011
temp <<= (32 - K);
// 110000

res = N >> K;
res = res | temp;

printf("%d", res);

return 0;
}

/*
#include <stdio.h>
#include <stdint.h>

uint32_t worker(uint32_t , unsigned int);
int main (){
unsigned int k;
uint32_t n, res;
 scanf("%u %u", &n, &k);
 res = worker (n, k);
 printf("%u\n", res);
 return 0;
}
uint32_t worker (uint32_t n, unsigned int k)
{
 return n>>k | n<<(32-k);
}

*/