
# pg_fzy

FZY extension for PostgreSQL.

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
