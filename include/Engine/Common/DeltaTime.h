#ifndef BACHERO_ENGINE_COMMON_DELTATIME
#define BACHERO_ENGINE_COMMON_DELTATIME

#include <chrono>

namespace Engine {
    class DeltaTime {
    public:
        static void record() {
            prev = cur;

            cur = std::chrono::high_resolution_clock::now();

            if (firstIter) {
                prev = cur;
                firstIter = false;
            }
        }

        static float get() {
            auto delta = std::chrono::duration_cast<std::chrono::nanoseconds>(cur - prev).count();
            return (float) delta / 1e9f;
        }

    private:
        static bool firstIter;
        static std::chrono::high_resolution_clock::time_point prev, cur;
    };
}

#endif //BACHERO_ENGINE_COMMON_DELTATIME