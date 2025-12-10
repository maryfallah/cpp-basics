# --- Configuration ---
CXX = g++
CXXFLAGS = -std=c++17 -Wall
BUILD_DIR = build
# --- Targets ---

# 1. Default target (runs when you type 'make')
all: $(BUILD_DIR)/rand-num $(BUILD_DIR)/hello-world $(BUILD_DIR)/tax-calculation $(BUILD_DIR)/calculate-circle-area $(BUILD_DIR)/calculation $(BUILD_DIR)/celcius-to-fahrenheit

# Create build directory if needed
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# --- Individual Build Rules (Target: Source) ---

$(BUILD_DIR)/rand-num: gen-rand-num.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) gen-rand-num.cpp -o $@ 

$(BUILD_DIR)/hello-world: hello-world.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) hello-world.cpp -o $@

$(BUILD_DIR)/tax-calculation: tax-calculation.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) tax-calculation.cpp -o $@

$(BUILD_DIR)/calculate-circle-area: calculate-circle-area.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) calculate-circle-area.cpp -o $@

$(BUILD_DIR)/celcius-to-fahrenheit: celcius-to-fahrenheit.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) celcius-to-fahrenheit.cpp -o $@ 
$(BUILD_DIR)/calculation: calculation.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) calculation.cpp -o $@ 
	
# 4. Clean up command (runs when you type 'make clean')
clean:
	rm -rf $(BUILD_DIR)/*