#include "hashtree.h"

void sha256_hash_layer(unsigned char* output, const unsigned char* input, uint64_t count) {
#ifdef __AVX512VL__
    sha256_16_avx512(output, input, count);
#else
    sha256_shani(output, input, count);
#endif
}
