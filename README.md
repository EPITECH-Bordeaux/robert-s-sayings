Robert_r's sayings ! (Ruby Style)
==========

### Require
* Ruby (2.0)
* Gem
* Bundle
* sqlite3 Gem

### Installation
```sh
git clone https://github.com/izissise/robert-s-sayings.git
cd robert-s-sayings
bundle install
ruby robert_r.rb
```

### What is it ?

This ruby script (you also use the C script in the master branch), is a compilation of robert_r an Epitech Student who says a lot of shit about computer science (and other domains) some are jokes, some others are just a thought of our dear robert_r! :D

### Feature
For the moments the script use a SQLite3 database:

* Use your own database
* Add your own quote to the database
* Use your own database and add your own quote to the database at the same time
* Finally, it just writes some random quotes at random moments

For a list of feature that will be implemented please see our TODO list below.

### Database
You can use your own database with `--db` or `-d` options followed by the name of your database
```sh
ruby robert_r.rb --db mydb.db
```
The db extension (.db) is optional:
```sh
ruby robert_r.rb --db mydb
```

### Add a quote of Robert_r (Only works for robert_r ;))
Use `--add` or `-a` option and simply do:
```sh
ruby robert_r.rb --add "Je corrige un bug et un autre apparait, ça fait une cascade de bug !"
```
And to add multiple quotes:
```sh
ruby robert_r.rb --add "je fais le xorus" -a "Git c'est fini, maintenant c'est l'afs ou rien"
```

### Mix everything
You can obviously use another database, add some quotes and then run the script but our script can do it simply.

```sh
ruby robert_r.rb --db quotes.db --add "je fais le xorus" -a "Git c'est fini, maintenant c'est l'afs ou rien"
```
This command will use the quotes.db file as your database then add these two quotes and then run the script normally.

### List
You can list all the quotes present in the current database thanks to `--list` and `-l` option

### Help
```
Usage: ruby robert_r.rb [options]
    -a, --add STRING                 String to add
    -n, --no                         Don't start after an add
    -l, --list                       List all quote of robert_r
    -d, --db DATABASE                Database name (default: quotes.db)
    -h, --help                       Show this message
```

### TODO
* Import a JSON array file to your database
* Import another database into yours (No merge, just add at the end)
* Make coffee (Expected in 42 years)
