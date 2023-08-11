#define XENON_API





#define XN_ASSERT(x, ...) {if!(x)) {XN_ERROR("Assertion Failed: {0}", __VA_ARGS__); } }
#define XN_CORE_ASSERT(x, ...) { if(!(x)) { XN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); } } 


#define BIT(x) (1 << x)
