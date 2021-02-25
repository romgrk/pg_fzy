EXTENSION = fzy
MODULE_big = fzy
DATA = fzy--0.0.1.sql
OBJS = fzy.o 

PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
