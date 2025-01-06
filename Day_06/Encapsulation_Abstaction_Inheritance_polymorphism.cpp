#include <iostream>
#include <string>
using namespace std;

// Base Class: CANBus
class CANBus {
private:
    string messageBuffer; // Encapsulation: Private message buffer

public:
    void sendMessage(const string& message) {
        messageBuffer = message;
        cout << "Message sent on CAN Bus: " << message << endl;
    }

    string receiveMessage() {
        cout << "Message received from CAN Bus: " << messageBuffer << endl;
        return messageBuffer;
    }
};

// Base Class: ECU
class ECU {
protected:
    string ecuName; // Common attribute for all ECUs

public:
    ECU(const string& name) : ecuName(name) {}

    // Pure virtual function for polymorphism
    virtual void processMessage(const string& message) = 0;

    virtual ~ECU() {}
};

// Derived Class: EngineECU
class EngineECU : public ECU {
public:
    EngineECU() : ECU("EngineECU") {}

    void processMessage(const string& message) override {
        cout << ecuName << " processing engine-related message: " << message << endl;
    }
};

// Derived Class: TransmissionECU
class TransmissionECU : public ECU {
public:
    TransmissionECU() : ECU("TransmissionECU") {}

    void processMessage(const string& message) override {
        cout << ecuName << " processing transmission-related message: " << message << endl;
    }
};

// Derived Class: ABSECU
class ABSECU : public ECU {
public:
    ABSECU() : ECU("ABSECU") {}

    void processMessage(const string& message) override {
        cout << ecuName << " processing ABS-related message: " << message << endl;
    }
};

int main() {
    // Create CAN Bus
    CANBus canBus;

    // Create ECUs
    ECU* engineECU = new EngineECU();
    ECU* transmissionECU = new TransmissionECU();
    ECU* absECU = new ABSECU();

    // Send a message on CAN Bus
    canBus.sendMessage("Diagnostic Command: Engine Check");

    // ECUs process the message
    string message = canBus.receiveMessage();
    engineECU->processMessage(message);
    transmissionECU->processMessage(message);
    absECU->processMessage(message);

    // Send another message
    canBus.sendMessage("Diagnostic Command: ABS Check");
    message = canBus.receiveMessage();
    absECU->processMessage(message); // Only ABS ECU processes this message

    // Clean up
    delete engineECU;
    delete transmissionECU;
    delete absECU;

    return 0;
}
