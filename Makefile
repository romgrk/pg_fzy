EXTENSION = fzy
MODULE_big = fzy
DATA = fzy--0.0.1.sql
OBJS = fzy.o 

PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)

## Above is standard PG extension makefile
## Below is our rules

OS=$(shell uname | tr A-Z a-z)
ifeq ($(findstring mingw,$(OS)), mingw)
    OS='windows'
endif

ARCH=$(shell uname -m)
ifeq ($(ARCH), aarch64)
ARCH='arm64'
endif

PG_VERSION=$(shell pg_config --version | awk '{ sub(/\.[0-9]+/, "", $$2); print $$2 }')

stash_precompiled_binary:
	mkdir -p static
	mv fzy.so ./static/fzy-$(OS)-$(ARCH)-pg$(PG_VERSION).so

restore_precompiled_binary:
	mv ./static/fzy-$(OS)-$(ARCH)-pg$(PG_VERSION).so fzy.so
