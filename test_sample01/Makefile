TARGET_NAME := app

# ディレクトリの設定
TARGET_DIR  := bin
INCLUDE_DIR := include
SRC_DIR     := src
BUILD_DIR   := build

TARGET := $(TARGET_DIR)/$(TARGET_NAME)

CC     := clang++
CFLAGS := -Wall -O2 -I$(INCLUDE_DIR)

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(addprefix $(BUILD_DIR)/,$(SRCS:.cpp=.o))

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(TARGET_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)/$(SRC_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(TARGET_DIR)

