#!/usr/bin/env ruby

def criterion_run
  Dir.chdir('..') do
    command = 'make tests_run'
    output = `#{command}`
    phrase = ' '
    puts "\e[38;5;165m====== Exécution des tests criterion ======\e[0m"
    puts "Commande exécutée : #{command}"
    puts 'Sortie de la commande:'
    puts output
    puts "\e[38;5;165m====== Fin de l'exécution ======\e[0m\n"
    puts "\e[38;5;82m======== Résultats ========\e[0m"
    if output.include?(phrase)
      puts "\e[38;5;214m Test criterion Sucess !!! 🎉\e[0m"#
    else
      puts "\e[38;5;196m Test non validax 😡.\e[0m"
      exit(1)
    end
  end
end
criterion_run
