#if __APPLE__
#include "onnxruntime/onnxruntime_c_api.h"
#else
#include "onnxruntime_c_api.h"
#endif
#ifdef USE_CUDA
#include "cuda_provider_factory.h"
#endif
