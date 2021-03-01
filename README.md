
# pg_fzy

FZY extension for PostgreSQL. You can either use the pre-compiled binaries, or build from source.

### Pre-compiled binaries

Pre-compiled binaries are available for the following systems:
 - Linux x86_64, Postgtres 13
 - Linux x86_64, Postgtres 12
 - macOS x86_64, Postgtres 13

To make use of it, run:

```
make restore_precompiled_binary
```

### Building

Requires postgresql development headers.

<details>
  <summary>Linux</summary>
  <p>
    Install headers through your package manager.<br/>
    Ubuntu: <code>sudo apt install postgresql-server-dev-XX</code><br/>
  </p>
</details>

<details>
  <summary>macOS</summary>
  <p>
    brew: <code>brew install libpq</code><br/>
  </p>
</details>

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
