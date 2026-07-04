#ifndef CMDLAYER_H
#define CMDLAYER_H

#include <string>
#include "wallet.h"

namespace CMDLayer {
    void CmdLayer(const std::string& cmd, Wallet& wallet);
}

#endif
