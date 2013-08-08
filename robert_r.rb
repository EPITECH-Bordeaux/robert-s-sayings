# -*- coding: utf-8 -*-
require 'sqlite3'
require 'optparse'

class App
  attr_accessor :db, :options, :option_parser

  def initialize(args)
    @options = {:db => "quotes.db", :add => []}

    @option_parser = OptionParser.new do |opts|
      opts.on('-a', '--add STRING', 'String to add') do |quote|
        @options[:add].push(quote)
      end

      # opts.on('-j', '--json', 'Import a JSON array into the database') do |filename|
      #   @options[:json].push(filename)
      # end

      opts.on('-d', '--db DATABASE', 'Database name (default: quotes.db)') do |dbname|
        @options[:db] = dbname
      end
      
      opts.on("-h", "--help", "Show this message") do 
        puts opts
        exit
      end
    end    
    ParseCL(args)

    fexist = File.exists?(@options[:db])
    if !fexist
      File.new(@options[:db], File::CREAT, 0644)
    end
    
    @db = SQLite3::Database.new(@options[:db])
    
    if !fexist
      @db.execute("CREATE TABLE quote(id INTEGER PRIMARY KEY AUTOINCREMENT, quote TEXT);")
      if @options[:add].size == 0
        $stderr.puts "Database empty! Please fill it before launching the script"
        exit
      end
    end
  end

  def GetQuotes
    return @db.execute("SELECT quote FROM quote;")
  end

  def PutRow(data)
    if data.is_a? Array
      data.each do |x|
        @db.execute("INSERT INTO quote(quote) VALUES(?);", x)
      end
    elsif data.is_a? String
      @db.execute("INSERT INTO quote(quote) VALUES(?);", data)
    end
  end

  def ImportFromJson()
    
  end

  def ParseCL(args)
    begin
      @option_parser.parse!(args)
    rescue OptionParser::InvalidOption => e
      $stderr.print "Error: ", e, "\n\n"
      $stderr.print @option_parser
      exit
    end
  end
end

def main(args)
  app = App.new(ARGV)
  
  if (app.options[:add].size > 0)
    app.PutRow(app.options[:add])
  end

  quotes = app.GetQuotes()
  puts quotes[rand(quotes.size)]
  while true
    sleep((rand() % 1000 + 400000) / 1000000)
    if rand(2) > 0
      puts quotes[rand(quotes.size)]
    end
  end
end

begin
  main(ARGV)
rescue Exception => e
end

