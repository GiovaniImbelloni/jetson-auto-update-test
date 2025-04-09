#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

int main() {
    std::ofstream log("/var/log/servico_teste.log", std::ios::app);
    while (true) {
        log << "Rodando serviço...5" << std::endl;
        log.flush();
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }


    return 0;
}

