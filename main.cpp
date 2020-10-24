#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
/*Нужно создать класс студента, чтобы записывать каждого студента в вузе в базу данных.
У каждого студента должен быть рот, которым он сможет объяснять свои опоздания ограниченным кол-вом предлжений.*/
class mouth{
    public:
        int number_of_offers = 1;
        std::string words = "Я забыл..";

        void init(int number_of_offers_mo, std::string words_mo){
            number_of_offers = number_of_offers_mo;
            words = words_mo;
        }

        void talk(){ // объявляем метод рта "говорить"
            for(int i = 0; i < number_of_offers; i++){
                std::cout << words << std::endl;
            }
        }
};

class student{
    public:
        mouth mouth_of_student;

        void init(std::string name_st, std::string surname_st, int id_st, int number_of_phone_st, mouth mouth_of_student_sp){
            mouth_of_student = mouth_of_student_sp;
            name = name_st;
            surname = surname_st;
            id = id_st;
            number_of_phone = number_of_phone_st;
        }
        void talk(){
            mouth_of_student.talk();
        }
        void read(){
            std::cout << "Введите Имя: ";
            std::cin >> name;
            std::cout << "Введите Фамилию: ";
            std::cin >> surname;
            std::cout << "Введите ID: ";
            std::cin >> id;
            std::cout << "Введите Номер телефона: ";
            std::cin >> number_of_phone;
        }
        void display(){
            std::cout << name << " " << surname << " " << id << " " << number_of_phone << std::endl;
        }
        void add(class student st2){
            std::cout << "(" << id << " + " << st2.id << ")" << std::endl;
        }
        void NameSurnamePrint(){
            std::cout << name << " " << surname << std::endl;
        }

        std::string NamePrint(){
            return name;
        }
        std::string SurnamePrint(){
            return surname;
        }
        int IdPrint(){
            return id;
        }
        int PhonePrint(){
            return number_of_phone;
        }

    private:
        std::string name;
        std::string surname;
        int id;
        int  number_of_phone;
};

int main(){
    setlocale(LC_ALL, "RUS");


    mouth mouth_of_student1;
    mouth_of_student1;
    student stud_1;
    stud_1.init("Aleks", "Ban", 242678, 8913339, mouth_of_student1);
    stud_1.talk();

    mouth mouth_of_student2;
    mouth_of_student2.init(3, "Простите, я потом принесу...");
    student stud_2;
    stud_2.init("Jhon", "Pon", 242678, 8913339, mouth_of_student2);
    stud_2.talk();

    return 0;
}
