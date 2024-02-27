#!/usr/bin/env ruby
# Regex matching 10 digit phone num
puts ARGV[0].scan(/^\d{10}$/).join
