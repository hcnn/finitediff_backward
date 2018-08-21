
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := finitediff_backward.o $(DEPS:.c=.o)

.DEFAULT_GOAL := validate

test: test.o $(OBJS)

finitediff_backward.o: finitediff_backward.c finitediff_backward.h

deps: package.json
	clib install --dev
	@touch $@

validate: test
	./$<

clean:
	rm -f $(OBJS) finitediff_backward.o test.o test

.PHONY: validate clean