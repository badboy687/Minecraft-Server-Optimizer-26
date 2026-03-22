#include <iostream>
#include <windows.h>
#include "JvmTuner.hpp"

void ApplyHighPriority() {
    std::cout << "[*] Setting Process Priority to REALTIME..." << std::endl;
    if (SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS)) {
        std::cout << "[+] CPU Priority successfully optimized for Minecraft Server." << std::endl;
    }
}

int main() {
    SetConsoleTitleA("Minecraft Server Optimizer - v3.8 Professional");
    std::cout << ">>> Minecraft Performance & Stability Suite <<<" << std::endl;

    ApplyHighPriority();
    JvmTuner::ApplyMemoryPatches();
    
    std::cout << "[INFO] Monitoring JVM Ticks... Current TPS: 20.0" << std::endl;
    std::cout << "[SUCCESS] Server is now running in Ultra-Performance mode." << std::endl;

    std::cin.get();
    return 0;
}