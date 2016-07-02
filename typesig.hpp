#include <cstring>

namespace typesig {

namespace impl_{
    struct discriminator___{};

    inline size_t min(size_t a, size_t b) {
        return (a < b) ? a : b;
    }

    template<class TBEGIN, class TEND>
    const char* fee() {
#if defined(__GNUC__)
        static const char * beginner = "TBEGIN = ";
        static const char * ender = " TEND = typesig::impl_::discriminator___";
#define FFFUNC __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
        static const char * beginner = "fee<";
        static const char * ender = ",struct typesig::impl_::discriminator___";
#define FFFUNC __FUNCSIG__
#else
        static const char * beginner = "";
        static const char * ender = "";
        return typeid(T).name();
#define FFFUNC ""
#endif
        enum{ maxlen = 255 };
        static char ret[maxlen + 2];
        static bool done = false;
        if (!done) {
            ret[maxlen - 2] = '.';
            ret[maxlen - 1] = '.';
            ret[maxlen] = '.';
            ret[maxlen + 1] = '\0';
            const char* begin = std::strstr(FFFUNC, beginner) + strlen(beginner);
            const char* end = std::strstr(begin, ender);
            // gcc is very unstable about delimiters =(
            if (*(end - 1) == ';' || *(end - 1) == ',') end--;
            size_t write = min(end - begin, maxlen - 2);
            std::memcpy(ret, begin, write);
            done = true;
        }

        return ret;
    }

} // namespace impl_

template<class T>
const char* signature() {
    return impl_::fee<T, impl_::discriminator___>();
}

template<class T>
const char* signature(T&) {
    return signature<T&>();
}

template<class T>
const char* signature(const T&) {
    return signature<T>();
}

} // namespace typesig
