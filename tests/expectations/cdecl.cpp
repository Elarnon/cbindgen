#include <cstdint>
#include <cstdlib>

using A = void(*)();

using B = void(*)();

using C = bool(*)(int32_t, int32_t);

using D = bool(*(*)(int32_t))(float);

using E = int32_t(*(*)())[16];

using F = const int32_t*;

using G = const int32_t*const *;

using H = int32_t*const *;

using I = int32_t(*)[16];

using J = double(**)(float);

using K = int32_t[16];

using L = const int32_t*[16];

using M = bool(*[16])(int32_t, int32_t);

using N = void(*[16])(int32_t, int32_t);

extern "C" {

void (*O())();

void root(A a, B b, C c, D d, E e, F f, G g, H h, I i, J j, K k, L l, M m, N n);

} // extern "C"
