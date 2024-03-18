#!/usr/bin/env ruby

def name_from_makefile
  Dir.chdir('..') do
    makefile_lines = File.readlines('Makefile')
    executable_name = nil
    makefile_lines.each do |line|
      if line.start_with?('NAME = ')
        executable_name = line.split(' ')[2].strip
        break
      end
    end
    executable_name
  end
end

def valgrind_run
  exec_name = name_from_makefile
  Dir.chdir('..') do
    system('make')
    if exec_name
      command = "valgrind ./#{exec_name} tests/B-CPE-200_champions/jon.s"
      output = `#{command} 2>&1`

    else
      puts "\e[38;5;196m Erreur aucun exe find dans le makefile\e[0m"
    end
    phrase = 'All heap blocks were freed -- no leaks are possible'
    puts "\e[38;5;165m====== Exécution des tests valgrind ======\e[0m"
    puts "Commande exécutée : #{command}"
    puts 'Sortie de la commande:'
    puts output
    puts "\e[38;5;165m====== Fin de l'exécution ======\e[0m\n"
    puts "\e[38;5;82m======== Résultats ========\e[0m"
    if output.include?(phrase)
      puts "\e[38;5;214m Test valgrind sucess sans leak!!! 🎉\e[0m"
    else
      puts "\e[38;5;196m Test non validax leak !! 😡.\e[0m"
      exit(1)
    end
  end
end

valgrind_run
