#include <llvm/CodeGen/LinkAllCodegenComponents.h>

extern "C" {
    /**
     * Dummy function to be invoked to force linking
     */
    void LLVM_InitializeAllCodegenComponents(void) {}
}
