// PluginKStrongDecay.hpp
// Aleksandar Koruga (aleksandar.koruga@gmail.com)

#pragma once

#include "SC_PlugIn.hpp"

namespace KStrongDecay {

class KStrongDecay : public SCUnit {
public:
    KStrongDecay();

    // Destructor
    // ~KStrongDecay();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace KStrongDecay
