#ifndef __FOREACH__
#define __FOREACH__

template <class InputIt, class UnaryFunc>
void for_each(InputIt first, InputIt last, UnaryFunc func) {
    for (InputIt it = first; it != last; ++it) {
        func(*it);
    }
}

#endif // __FOREACH__

