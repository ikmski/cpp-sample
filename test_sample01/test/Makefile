TARGET_NAME := app

# ディレクトリの設定
TARGET_DIR  := bin
INCLUDE_DIR := include
SRC_DIR     := .
BUILD_DIR   := build

TARGET := $(TARGET_DIR)/$(TARGET_NAME)

CC      := /usr/local/bin/g++-10
CFLAGS  := -Wall -O2 -I$(INCLUDE_DIR)
LDFLAGS := -L../lib -lgtest_main -lgtest

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(addprefix $(BUILD_DIR)/,$(SRCS:.cpp=.o))

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(TARGET_DIR)
	$(CC) $(LDFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)/$(SRC_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(TARGET_DIR)

