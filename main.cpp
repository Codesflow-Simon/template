#include "emulator.hpp"
#include "logging.hpp"

Emulator getEmulator(); // Function prototype
Emulator emulator;
Anchor tag;

int main() {
    emulator = getEmulator();
    tag = Anchor( Vector3(0.5,0.3,0.2), "0000"); // Set actual tag location

    init_log();
    write_log(tag.to_string_());
    close_log();
}


/**
 * @brief Get the Emulator with preset parameters
 * 
 * @return Emulator 
 */
Emulator getEmulator() {
  Emulator emulator = Emulator();
  emulator.setMeasurementError(0.1);

  emulator.setAnchor(Anchor(Vector3(-0.6, 0.9,  2.1), "2e4f"));
  emulator.setAnchor(Anchor(Vector3( 1.2, 0.1,  0.3), "3bfc"));
  emulator.setAnchor(Anchor(Vector3(-0.3, 0.3, -1.6), "3a85"));
  emulator.setAnchor(Anchor(Vector3( 0.7, 2.1, -0.4), "3dd2"));
  emulator.setAnchor(Anchor(Vector3(-1.8, 1.5,  0.1), "2e01"));
  return emulator;
}

// Doxygen mainpage

/*! \mainpage template
 *
 * \section intro_sec Introduction
 *
 * This is the introduction.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */