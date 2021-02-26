
# pg_fzy

FZY extension for PostgreSQL.

### Building

Linux x86_64 shared library built by default.

```
make
```

### Installation

```
sudo make install
```

Requires `pg_config` to be installed.

```
psql> CREATE EXTENSION fzy;
```

### Usage

```
select name, fzy('Stev', "name"::cstring) as score from users;
```

Uses the case-insensitive version of fzy for now. Open an issue if you need
the case sensitive version.

### License

MIT
