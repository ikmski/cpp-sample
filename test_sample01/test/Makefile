TARGET_NAME := app

# ディレクトリの設定
TARGET_DIR  := bin
SRC_DIR     := ../src
BUILD_DIR   := build

INCLUDE := -I./include
INCLUDE += -I../src

TARGET := $(TARGET_DIR)/$(TARGET_NAME)

CC      := /usr/local/bin/g++-10
CFLAGS  := -Wall -O2 $(INCLUDE)
LDFLAGS := -L../lib -lgtest_main -lgtest

.PHONY: all clean

all: \
	$(TARGET_DIR)/character_test

$(TARGET_DIR)/character_test: \
	$(BUILD_DIR)/character.o \
	$(BUILD_DIR)/character_test.o
	@mkdir -p $(TARGET_DIR)
	$(CC) $^ $(LDFLAGS) -o $@

$(BUILD_DIR)/character.o:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(SRC_DIR)/character.cpp -o $@

$(BUILD_DIR)/character_test.o:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c character_test.cpp -o $@

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(TARGET_DIR)

