// PluginKStrongDecay.cpp
// Aleksandar Koruga (aleksandar.koruga@gmail.com)

#include "SC_PlugIn.hpp"
#include "KStrongDecay.hpp"

static InterfaceTable* ft;

namespace KStrongDecay {

KStrongDecay::KStrongDecay() {
    mCalcFunc = make_calc_function<KStrongDecay, &KStrongDecay::next>();
    next(1);
}

void KStrongDecay::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace KStrongDecay

PluginLoad(KStrongDecayUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<KStrongDecay::KStrongDecay>(ft, "KStrongDecay", false);
}
