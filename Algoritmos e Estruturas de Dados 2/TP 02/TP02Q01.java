/*Crie uma classe Pokémon seguindo todas as regras apresentadas no slide 
https://github.com/icei-pucminas/aeds2/blob/master/aulas/u00\%20Nivelamento/unidade00l_nivelamento_introducaoOO.pdf. 
Sua classe terá os atributos privado id int, generation int, name String, description String, types Lista, abilities Lista, weight double, height double, 
captureRate int, isLegendary boolean, captureDate Date. Sua classe também terá pelo menos dois construtores, e os métodos gets, sets, clone, imprimir e ler.

O método $imprimir$ mostra os atributos do registro (ver cada linha da saída padrão) e o ler 
lê os atributos de um registro. Atenção para o arquivo de entrada, pois em alguns registros faltam valores e esse foi substituído pelo valor 0 (zero) ou vazio. 
A entrada padrão é composta por várias linhas e cada uma contém um número inteiro indicando o id do Pokémon a ser lido.

A última linha da entrada contém a palavra FIM. A saída padrão também contém várias linhas, uma para cada registro contido em uma linha da entrada padrão, 
no seguinte formato: [#id -> name: description - [types] - [abilities] - weight - height - captureRate - isLegendary - generation] - captureDate].

Exemplo: [#181 -> Ampharos: Light Pokémon - ['electric'] - ['Static', 'Plus'] - 61.5kg - 1.4m - 45% - false - 2 gen] - 25/05/1999 */

import java.util.*;
import java.io.*;
import java.time.*;
import java.time.format.DateTimeFormatter;

public class TP02Q01 {
    public static void main(String[] args) {
        String path = "/tmp/pokemon.csv";
        ArrayList<Pokemon> pokemons = new ArrayList<Pokemon>();

        try {
            Scanner sc = new Scanner(new File(path));
            sc.nextLine();
            while (sc.hasNextLine()) {
                pokemons.add(new Pokemon(sc.nextLine()));
            }
            sc.close();
        } catch (Exception e) {
            System.out.println("error");
        }

        Scanner sc = new Scanner(System.in);

        String input = sc.nextLine();
        while (!input.equals("FIM")) {
            int number = Integer.parseInt(input);
            pokemons.get(number - 1).imprimir();
            input = sc.nextLine();
        }

        sc.close();
    }
}

class Pokemon {
    private int id;
    private int generation;
    private String name;
    private String description;
    private ArrayList<String> types;
    private ArrayList<String> abilities;
    private double weight;
    private double height;
    private int captureRate;
    private boolean isLegendary;
    private LocalDate captureDate;

    public Pokemon() {
    }

    public Pokemon(int id,
            int generation,
            String name,
            String description,
            ArrayList<String> types,
            ArrayList<String> abilities,
            double weight,
            double heigth,
            int captureRate,
            boolean isLegendary,
            LocalDate captureDate) {
        setId(id);
        setGeneration(generation);
        setName(name);
        setDescription(description);
        setTypes(types);
        setAbilities(abilities);
        setWeight(weight);
        setHeight(height);
        setCaptureRate(captureRate);
        setIsLegendary(isLegendary);
        setCaptureDate(captureDate);
    }

    public Pokemon(String linha) {
        String[] item = linha.split(",");

        setId(Integer.parseInt(item[0]));

        setGeneration(Integer.parseInt(item[1]));

        setName(item[2]);

        setDescription(item[3]);

        ArrayList<String> types = new ArrayList<>();
        types.add(item[4]);
        if (!item[5].isEmpty())
            types.add(item[5]);
        setTypes(types);

        int counter = 6;
        boolean IsDouble = false;
        ArrayList<String> abilities = new ArrayList<>();
        while (!IsDouble) {
            try {
                Double.parseDouble(item[counter]);
                IsDouble = true;
            } catch (NumberFormatException e) {
                if (!item[counter].isEmpty()) {
                    String abilitie = item[counter].replaceAll("[\\[\\]'\"']", "").trim();
                    abilities.add(abilitie);
                    counter++;
                } else {
                    IsDouble = true;
                }
            }
        }
        setAbilities(abilities);

        if (!item[counter].isEmpty())
            setWeight(Double.parseDouble(item[counter]));
        counter++;

        if (!item[counter].isEmpty())
            setHeight(Double.parseDouble(item[counter]));
        counter++;

        setCaptureRate(Integer.parseInt(item[counter]));
        counter++;

        setIsLegendary(item[counter].equals("1"));
        counter++;

        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        setCaptureDate(LocalDate.parse(item[counter], formatter));
    }

    public Pokemon clone() {
        Pokemon clone = new Pokemon(getId(), getGeneration(), getName(), getDescription(), getTypes(), getAbilities(),
                getWeight(), getHeight(), getCaptureRate(), getIsLegendary(), getCaptureDate());
        return clone;
    }

    public void imprimir() {
        System.out.printf("[#" + id + " -> " + name + ": " + description + " - [");
        int counter = 1;
        for (String type : types) {
            if (counter == 1) {
                System.out.printf("'" + type + "'");
                counter++;
            } else {
                System.out.printf(", '" + type + "'");
            }
        }
        System.out.printf("] - [");
        counter = 1;
        for (String abilitie : abilities) {
            if (counter == 1) {
                System.out.printf("'" + abilitie + "'");
                counter++;
            } else {
                System.out.printf(", '" + abilitie + "'");
            }
        }
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        System.out.printf("] - " + weight + "kg - " + height + "m - " + captureRate + "%% - " + isLegendary + " - "
                + generation + " gen] - " + captureDate.format(formatter));
        System.out.println();
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getId() {
        return id;
    }

    public void setGeneration(int generation) {
        this.generation = generation;
    }

    public int getGeneration() {
        return generation;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public String getDescription() {
        return description;
    }

    public void setTypes(ArrayList<String> types) {
        this.types = types;
    }

    public ArrayList<String> getTypes() {
        return types;
    }

    public void setAbilities(ArrayList<String> abilities) {
        this.abilities = abilities;
    }

    public ArrayList<String> getAbilities() {
        return abilities;
    }

    public void setWeight(double weight) {
        this.weight = weight;
    }

    public double getWeight() {
        return weight;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getHeight() {
        return height;
    }

    public void setCaptureRate(int captureRate) {
        this.captureRate = captureRate;
    }

    public int getCaptureRate() {
        return captureRate;
    }

    public void setIsLegendary(boolean isLegendary) {
        this.isLegendary = isLegendary;
    }

    public boolean getIsLegendary() {
        return isLegendary;
    }

    public void setCaptureDate(LocalDate captureDate) {
        this.captureDate = captureDate;
    }

    public LocalDate getCaptureDate() {
        return captureDate;
    }
}