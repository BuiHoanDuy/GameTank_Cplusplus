#include <iostream>
#include <unistd.h>
using namespace std;
#include"mylib.h"
#include <math.h>
#include <mmsystem.h>
#include <windows.h>
#define DEFAULT_X 20
#define DEFAULT_Y 25
#include <string>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <fstream>
struct toa_do{
    int x,y;
};

void xoa_dau_mui_ten(){
    gotoXY(25,5); std::cout << "      " << std::endl;
    gotoXY(25,6); std::cout << "      " << std::endl;
    gotoXY(25,7); std::cout << "      " << std::endl;
    gotoXY(25,12); std::cout << "     " << std::endl;
    gotoXY(25,13); std::cout << "     " << std::endl;
    gotoXY(25,14); std::cout << "     " << std::endl;
    gotoXY(25,21); std::cout << "      " << std::endl;
    gotoXY(25,22); std::cout << "      " << std::endl;
    gotoXY(25,23); std::cout << "      " << std::endl;
    gotoXY(25,28); std::cout << "     " << std::endl;
    gotoXY(25,29); std::cout << "     " << std::endl;
    gotoXY(25,30); std::cout << "     " << std::endl;
}

int main_menu(){
    PlaySound(TEXT("menu_theme.wav"), NULL, SND_FILENAME | SND_ASYNC);
    system("cls");
    SetColor(6);
    gotoXY(46,4);
    std::cout << " ## ###  #  ##  ###" << std::endl; gotoXY(46,5);
    std::cout << "#    #  # # # #  #" << std::endl;gotoXY(46,6);
    std::cout << " #   #  ### ##   #" << std::endl;gotoXY(46,7);
    std::cout << "  #  #  # # # #  # " << std::endl;gotoXY(46,8);
    std::cout << "##   #  # # # #  #" << std::endl;

    gotoXY(48,11);
    std::cout << "###  #   ## # #" << std::endl;gotoXY(48,12);
    std::cout << "#   # # #   # #" << std::endl;gotoXY(48,13);
    std::cout << "##  ###  #   # " << std::endl;gotoXY(48,14);
    std::cout << "#   # #   #  # " << std::endl;gotoXY(48,15);
    std::cout << "### # # ##   #" << std::endl;
    gotoXY(42,12); std::cout << " #" << std::endl;
    gotoXY(42,13); std::cout << "##" << std::endl;
    gotoXY(42,14); std::cout << " #" << std::endl;
    gotoXY(67,12); std::cout << "#" << std::endl;
    gotoXY(67,13); std::cout << "##" << std::endl;
    gotoXY(67,14); std::cout << "#" << std::endl;

    gotoXY(48,19);
    std::cout << "# # ### #   ## " << std::endl;gotoXY(48,20);
    std::cout << "# # #   #   # # " << std::endl;gotoXY(48,21);
    std::cout << "### ##  #   ##" << std::endl;gotoXY(48,22);
    std::cout << "# # #   #   # " << std::endl;gotoXY(48,23);
    std::cout << "# # ### ### #  " << std::endl;gotoXY(48,24);

    gotoXY(35, 27);
    std::cout << "# # ###  ## # #      ##  ##  #  ##  ### " << std::endl;gotoXY(35,28);
    std::cout << "# #  #  #   # #     #   #   # # # # #   " << std::endl;gotoXY(35,29);
    std::cout << "###  #  # # ###      #  #   # # ##  ## " << std::endl;gotoXY(35,30);
    std::cout << "# #  #  # # # #       # #   # # # # # " << std::endl;gotoXY(35,31);
    std::cout << "# # ###  ## # #     ##   ##  #  # # ### " << std::endl;gotoXY(35,32);

    int choice=1; // đếm, xem thử người chơi chọn cái nào
    char choice_c;
    int choice_easy_hard=0; // chẵn thì dễ, lẻ thì khó
    do {
        SetColor(2);
        if (_kbhit()==true){
             choice_c = getch();
            if (choice_c == 's' && choice<4) choice ++;
            if (choice_c == 'w'&&choice>1) choice --;
        if (choice == 1){
                xoa_dau_mui_ten();
                gotoXY(25,5);
                std::cout << "   #" << std::endl; gotoXY(25,6);
                std::cout << "#####" << std::endl;gotoXY(25,7);
                std::cout << "   #" << std::endl;
        }
        if (choice == 2){
            xoa_dau_mui_ten();
            gotoXY(25,12);
            std::cout << "   #" << std::endl; gotoXY(25,13);
            std::cout << "#####" << std::endl;gotoXY(25,14);
            std::cout << "   #" << std::endl;
            if(choice_c == 'a' || choice_c == 'd') choice_easy_hard ++;
            SetColor(6);
            if (choice_easy_hard%2==0) {
                gotoXY(48,11);
                std::cout << "###  #   ## # #" << std::endl;gotoXY(48,12);
                std::cout << "#   # # #   # #" << std::endl;gotoXY(48,13);
                std::cout << "##  ###  #   # " << std::endl;gotoXY(48,14);
                std::cout << "#   # #   #  # " << std::endl;gotoXY(48,15);
                std::cout << "### # # ##   #" << std::endl;
            }
            else {
                gotoXY(48,11);
                std::cout << "# #  #  ##  ## " << std::endl;gotoXY(48,12);
                std::cout << "# # # # # # # #" << std::endl;gotoXY(48,13);
                std::cout << "### ### ##  # #" << std::endl;gotoXY(48,14);
                std::cout << "# # # # # # # #" << std::endl;gotoXY(48,15);
                std::cout << "# # # # # # ## " << std::endl;
            }
        }
        if (choice == 3){
            xoa_dau_mui_ten();
            gotoXY(25,21);
            std::cout << "   #" << std::endl; gotoXY(25,22);
            std::cout << "#####" << std::endl;gotoXY(25,23);
            std::cout << "   #" << std::endl;
        }
        if (choice == 4){
            xoa_dau_mui_ten();
            gotoXY(25,28);
            std::cout << "   #" << std::endl; gotoXY(25,29);
            std::cout << "#####" << std::endl;gotoXY(25,30);
            std::cout << "   #" << std::endl;
        }
        if(choice_c== 13 || choice_c == 32){
            if (choice_easy_hard%2==1) return 5;
            else return choice;
        }
    }
    } while(1);
// choice <= 1  && choice_easy_hard % 2==0: bắt đầu game dễ
//  choice <= 1 && choice_easy_hard % 2==1: bắt đầu game khó
// choice = 2  && choice_easy_hard % 2==0: bắt đầu game dễ
// choice = 2  && choice_easy_hard % 2==1: bắt đầu game khó
// choice = 3: hướng dẫn chơi
// choice >= 4: điểm cao nhất
}


void menu_help(){
    system("cls");
    SetColor(2);
    gotoXY(50,7);
    cout << "Huong dan cach choi";
    SetColor(8);
    gotoXY(20,10); cout << "- Di chuyen xe tank de ne cac xe tank cua dich. Neu ban cham phai dich thi se bi mat mot mang.";
    gotoXY(20,11); cout << "  Neu ban mat het 3 mang thi GameOver.";
    gotoXY(20,12); cout << "- Hay co gang ban ha cang nhieu ke dich cang tot. Neu so mang ha guc du 20, thi se tang level.";
    gotoXY(20,13); cout << "* EASY LEVEL : Free Fire !!! - Ban Tu Do";
    gotoXY(20,14); cout << "* HARD LEVEL : Ban khong trung dich -> Mat mot mang!!!";
    gotoXY(40,17); cout << " Nhan phim bat ki de quay lai menu ! ";
}
// ham in danh sach so diem cao nhat ( 10 diem cao nhat );
void menu_highscore(){
    system("cls");
     ifstream file;
    int arr[5];
    file.open("high_score.txt");
    for (int i=0;i<5;i++){
        file>>arr[i];
    }
    file.close();

    SetColor(2);
    gotoXY(30,7);
    cout << "Cac so diem cao nhat ban tung dat duoc!";
    SetColor(8);
    gotoXY(45,10); cout << arr[0];
    gotoXY(45,11); cout << arr[1];
    gotoXY(45,12); cout << arr[2];
    gotoXY(45,13); cout << arr[3];
    gotoXY(45,14); cout << arr[4];
    gotoXY(31,17); cout << " Nhan phim bat ki de quay lai menu ! ";
}
void luu_file(int score){
    fstream file;
    int arr[5];
    file.open("high_score.txt",ios::trunc);
    for (int i=0;i<5;i++){
        file>>arr[i];
    }
    //ghi file 5 diem cao nhat
    for (int i=0;i<5;i++){
        if (arr[i] < score){
            for (int j=5;j>i;j--){
                arr[j] = arr[j-1];
            }
            arr[i] = score;
        }
        break;
    }

    for (int i=0;i<5;i++){
        file << arr[i];
    }
    file.close();
}
int game_over(){
    gotoXY(56,17); cout << "Game Over";
    Sleep(2000);
    system("cls");
    for (int i = 0; i < 10;i++){
        int cl = rand()%16+1;
        SetColor(cl);
        gotoXY(20,7);
        std::cout << " ######      ###    ##     ## ########     #######  ##     ## ######## ########" << std::endl; gotoXY(20,8);
        std::cout << "##    ##    ## ##   ###   ### ##          ##     ## ##     ## ##       ##     ##" << std::endl; gotoXY(20,9);
        std::cout << "##         ##   ##  #### #### ##          ##     ## ##     ## ##       ##     ##" << std::endl; gotoXY(20,10);
        std::cout << "##   #### ##     ## ## ### ## ######      ##     ## ##     ## ######   ######## " << std::endl; gotoXY(20,11);
        std::cout << "##    ##  ######### ##     ## ##          ##     ##  ##   ##  ##       ##   ##" << std::endl; gotoXY(20,12);
        std::cout << "##    ##  ##     ## ##     ## ##          ##     ##   ## ##   ##       ##    ## " << std::endl; gotoXY(20,13);
        std::cout << " ######   ##     ## ##     ## ########     #######     ###    ######## ##     ## " << std::endl;
        Sleep(200);
    }

    SetColor(6);
    gotoXY(40,16);
    std::cout << "##   #                           #    " << std::endl; gotoXY(40,17);
    std::cout << "# #  #   ## # #      ## ###  ##     ##  " << std::endl;gotoXY(40,18);
    std::cout << "##   #  # # ###     # # # # # #  #  # # " << std::endl;gotoXY(40,19);
    std::cout << "#    ## ###   #     ###  ## ###  ## # # " << std::endl;gotoXY(40,20);
    std::cout << "#           ###         ###" << std::endl;

    gotoXY(50,23);
    std::cout << "# # ### ### # # " << std::endl;gotoXY(50,24);
    std::cout << "### #   # # # # " << std::endl;gotoXY(50,25);
    std::cout << "### ##  # # # # " << std::endl;gotoXY(50,26);
    std::cout << "# # #   # # # #" << std::endl;gotoXY(50,27);
    std::cout << "# # ### # # ### " << std::endl;gotoXY(50,28);

    int choice=1;
    char choice_c;
    SetColor(2);
    while(1){
        if(_kbhit()==true){
                choice_c = getch();
            if (choice_c == 'w') {
                choice = 1;

                gotoXY(28,25);
                std::cout << "    " << std::endl; gotoXY(28,26);
                std::cout << "     " << std::endl;gotoXY(28,27);
                std::cout << "    " << std::endl;

                gotoXY(28,18);
                std::cout << "   #" << std::endl; gotoXY(28,19);
                std::cout << "#####" << std::endl;gotoXY(28,20);
                std::cout << "   #" << std::endl;

            }
            else if (choice_c == 's'){
                choice = 2;

                gotoXY(28,18);
                std::cout << "    " << std::endl; gotoXY(28,19);
                std::cout << "     " << std::endl;gotoXY(28,20);
                std::cout << "    " << std::endl;

                gotoXY(28,25);
                std::cout << "   #" << std::endl; gotoXY(28,26);
                std::cout << "#####" << std::endl;gotoXY(28,27);
                std::cout << "   #" << std::endl;
            }
            else if (choice_c == 13 || choice_c == 32){
                return choice;
            }
            else continue;
        }
    }

}
bool kiem_tra_tuong(int x_check, int y_check,int ban_do){
    if (ban_do==0){
        //check tường dọc trước, ngang sau
        if (x_check == 11 || x_check == 109 || y_check == 6 || y_check == 29 ) return true;
        // ----- check tuong 1; -------
        for (int y=11;y<=23;y++){
            if (x_check==29){  //30-1
                if (y_check == y)
                return true;
            }
        }
        for (int y = 11;y<=20;y++){
            if (x_check==36){ // 35 +1
                if (y_check == y)
                return true;
            }
        }
        for (int y=21;y<=23;y++){
            if (x_check==51){
                if (y_check == y)
                return true;
            }
        }
        for (int x=30;x<=35;x++){
            if (y_check==10){
                if (x_check==x)
                return true;
            }
        }
        for (int x=35;x<=50;x++){
            if (y_check==20){
                if (x_check==x)
                return true;
            }
        }
        for (int x=30;x<=50;x++){
            if (y_check==24){
                if (x_check==x)
                return true;
            }
        }


        // ---- check tuong 2 ----
        for (int x=48;x<=53;x++){
            if (y_check==10){
                if (x_check==x)
                return true;
            }
        }
        for (int x=48;x<=53;x++){
            if (y_check==14){
                if (x_check==x)
                return true;
            }
        }
        for (int y=11;y<=13;y++){
           if (x_check == 47){
                if (y_check==y)
                return true;
           }
        }
        for (int y=11;y<=13;y++){
           if (x_check == 54){
                if (y_check==y)
                return true;
           }
        }

       // ---- check tuong 3 ----
        for (int x=67;x<=72;x++){
            if (y_check==20){
                if (x_check==x)
                return true;
            }
        }
        for (int x=67;x<=72;x++){
            if (y_check==24){
                if (x_check==x)
                return true;
            }
        }
        for (int y=21;y<=23;y++){
           if (x_check == 66) {
                if (y_check==y)
                return true;
           }
        }
        for (int y=21;y<=23;y++){
           if (x_check == 73){
                if (y_check==y)
                return true;
           }
        }
       // ---- check tuong 4 ----
        for (int y=11;y<=13;y++){
        if (x_check==74){
                if (y_check == y)
                return true;
            }
        }
        for (int y = 14;y<=23;y++){
            if (x_check==84){
                if (y_check == y)
                return true;
            }
        }
        for (int y=11;y<=23;y++){
            if (x_check==91){
                if (y_check == y)
                return true;
            }
        }
        for (int x=75;x<=90;x++){
            if (y_check==10){
                if (x_check==x)
                return true;
            }
        }
        for (int x=75;x<=84;x++){
            if (y_check==14){
                if (x_check==x)
                return true;
            }
        }
        for (int x=85;x<=90;x++){
            if (y_check==24){
                if (x_check==x)
                return true;
            }
        }
        return false;
    }
//-------------ban do thu 2 (map1)-----------
     if (ban_do==1){
        //check tường dọc trước, ngang sau
        if (x_check == 11 || x_check == 109 || y_check == 6 || y_check == 29 ) return true;
        // ----- check tuong dau; -------
        for (int y=11;y<=23;y++){
            if (x_check==29){  //30-1
                if (y_check == y)
                return true;
            }
        }
        for (int y = 11;y<=23;y++){
            if (x_check==36){ // 35 +1
                if (y_check == y)
                return true;
            }
        }
        for (int x=30;x<=35;x++){
            if (y_check==10){
                if (x_check==x)
                return true;
            }
        }
        for (int x=30;x<=35;x++){
            if (y_check==24){
                if (x_check==x)
                return true;
            }
        }
        // ----- check tuong giua; -------
        for (int y=11;y<=23;y++){
            if (x_check==57){
                if (y_check == y)
                return true;
            }
        }
        for (int y = 11;y<=23;y++){
            if (x_check==63){
                if (y_check == y)
                return true;
            }
        }
        for (int x=58;x<=62;x++){
            if (y_check==10){
                if (x_check==x)
                return true;
            }
        }
        for (int x=58;x<=62;x++){
            if (y_check==24){
                if (x_check==x)
                return true;
            }
        }

       // ---- check tuong cuoi ----

        for (int y = 11;y<=23;y++){
            if (x_check==84){
                if (y_check == y)
                return true;
            }
        }
        for (int y=11;y<=23;y++){
            if (x_check==91){
                if (y_check == y)
                return true;
            }
        }
        for (int x=85;x<=90;x++){
            if (y_check==10){
                if (x_check==x)
                return true;
            }
        }
        for (int x=85;x<=90;x++){
            if (y_check==24){
                if (x_check==x)
                return true;
            }
        }
        return false;
    }
}

bool kiem_tra_tuong_dan(int x_check, int y_check, int ban_do, int preCheck){
        if (preCheck == 0) {
            if (x_check==12) return true;
            if (x_check==11) return true;
        }
        else if (preCheck == 1) {
            if (y_check==7) return true;
            if (y_check==6) return true;
        }
        else if (preCheck == 2) {
            if (y_check==28) return true;
            if (y_check==29) return true;
        }
        else if (preCheck == 3) {
            if (x_check==108) return true;
            if (x_check==109) return true;
        }
        if (ban_do==0){
        //check tường dọc trước, ngang sau x==12 || x == 108 || y ==7 || y == 28
        if (preCheck == 1 || preCheck == 2){
            // ----- check tuong 1; -------
            for (int y=11;y<=23;y++){
                if (x_check==29){
                        if (y_check == y)
                        return true;
                    }
            }
            for (int y = 11;y<=20;y++){
                if (x_check==36){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y=21;y<=23;y++){
                if (x_check==51){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=30;x<=35;x++){
                if (y_check==9){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=35;x<=50;x++){
                if (y_check==19){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=30;x<=50;x++){
                if (y_check==25){
                    if (x_check==x)
                    return true;
                }
            }


            // ---- check tuong 2 ----
            for (int x=48;x<=53;x++){
                if (y_check==9){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=48;x<=53;x++){
                if (y_check==15){
                    if (x_check==x)
                    return true;
                }
            }
            for (int y=11;y<=13;y++){
               if (x_check == 47){
                    if (y_check==y)
                    return true;
               }
            }
            for (int y=11;y<=13;y++){
               if (x_check == 54){
                    if (y_check==y)
                    return true;
               }
            }

           // ---- check tuong 3 ----
            for (int x=67;x<=72;x++){
                if (y_check==19){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=67;x<=72;x++){
                if (y_check==25){
                    if (x_check==x)
                    return true;
                }
            }
            for (int y=21;y<=23;y++){
               if (x_check == 66) {
                    if (y_check==y)
                    return true;
               }
            }
            for (int y=21;y<=23;y++){
               if (x_check == 73){
                    if (y_check==y)
                    return true;
               }
            }
           // ---- check tuong 4 ----
            for (int y=11;y<=13;y++){
            if (x_check==74){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y = 14;y<=23;y++){
                if (x_check==84){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y=11;y<=23;y++){
                if (x_check==91){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=75;x<=90;x++){
                if (y_check==9){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=75;x<=84;x++){
                if (y_check==15){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=85;x<=90;x++){
                if (y_check==25){
                    if (x_check==x)
                    return true;
                }
            }
        }
        else {
            // ----- check tuong 1; -------
            for (int y=11;y<=23;y++){
            if (x_check==28){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y = 11;y<=20;y++){
                if (x_check==37){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y=21;y<=23;y++){
                if (x_check==52){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=30;x<=35;x++){
                if (y_check==11){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=35;x<=50;x++){
                if (y_check==21){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=30;x<=50;x++){
                if (y_check==23){
                    if (x_check==x)
                    return true;
                }
            }


            // ---- check tuong 2 ----
            for (int x=48;x<=53;x++){
                if (y_check==11){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=48;x<=53;x++){
                if (y_check==13){
                    if (x_check==x)
                    return true;
                }
            }
            for (int y=11;y<=13;y++){
               if (x_check == 46){
                    if (y_check==y)
                    return true;
               }
            }
            for (int y=11;y<=13;y++){
               if (x_check == 55){
                    if (y_check==y)
                    return true;
               }
            }

           // ---- check tuong 3 ----
            for (int x=67;x<=72;x++){
                if (y_check==21){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=67;x<=72;x++){
                if (y_check==23){
                    if (x_check==x)
                    return true;
                }
            }
            for (int y=21;y<=23;y++){
               if (x_check == 65) {
                    if (y_check==y)
                    return true;
               }
            }
            for (int y=21;y<=23;y++){
               if (x_check == 74){
                    if (y_check==y)
                    return true;
               }
            }
           // ---- check tuong 4 ----
            for (int y=11;y<=13;y++){
            if (x_check==73){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y = 14;y<=23;y++){
                if (x_check==83){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y=11;y<=23;y++){
                if (x_check==92){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=75;x<=90;x++){
                if (y_check==11){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=75;x<=84;x++){
                if (y_check==13){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=85;x<=90;x++){
                if (y_check==23){
                    if (x_check==x)
                    return true;
                }
            }

        }
        return false;
    }

    // ------------------ map1--------------
      if (ban_do==1){
        if (preCheck == 1 || preCheck == 2){
            // ----- check tuong dau; -------
            for (int y=11;y<=23;y++){
                if (x_check==29){
                        if (y_check == y)
                        return true;
                    }
            }
            for (int y = 11;y<=23;y++){
                if (x_check==36){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=30;x<=35;x++){
                if (y_check==9){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=30;x<=35;x++){
                if (y_check==25){
                    if (x_check==x)
                    return true;
                }
            }
        // ----- check tuong giua; -------
            for (int y=11;y<=23;y++){
                if (x_check==57){
                        if (y_check == y)
                        return true;
                    }
            }
            for (int y = 11;y<=23;y++){
                if (x_check==63){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=58;x<=62;x++){
                if (y_check==9){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=58;x<=62;x++){
                if (y_check==25){
                    if (x_check==x)
                    return true;
                }
            }
           // ---- check tuong cuoi ----
            for (int y = 11;y<=23;y++){
                if (x_check==84){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y=11;y<=23;y++){
                if (x_check==91){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=85;x<=90;x++){
                if (y_check==9){
                    if (x_check==x)
                    return true;
                }
            }

            for (int x=85;x<=90;x++){
                if (y_check==25){
                    if (x_check==x)
                    return true;
                }
            }

        }
        else {
            // ----- check tuong dau; -------
            for (int y=11;y<=23;y++){
            if (x_check==28){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y = 11;y<=23;y++){
                if (x_check==37){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=30;x<=35;x++){
                if (y_check==11){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=30;x<=35;x++){
                if (y_check==23){
                    if (x_check==x)
                    return true;
                }
            }
            // ----- check tuong dau; -------
            for (int y=11;y<=23;y++){
                if (x_check==56){  //30-1
                        if (y_check == y)
                        return true;
                }
            }
            for (int y = 11;y<=23;y++){
                if (x_check==64){ // 35 +1
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=58;x<=62;x++){
                if (y_check==11){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=58;x<=62;x++){
                if (y_check==23){
                    if (x_check==x)
                    return true;
                }
            }
           // ---- check tuong cuoi ----
            for (int y = 11;y<=23;y++){
                if (x_check==83){
                    if (y_check == y)
                    return true;
                }
            }
            for (int y=11;y<=23;y++){
                if (x_check==92){
                    if (y_check == y)
                    return true;
                }
            }
            for (int x=85;x<=90;x++){
                if (y_check==11){
                    if (x_check==x)
                    return true;
                }
            }
            for (int x=85;x<=90;x++){
                if (y_check==23){
                    if (x_check==x)
                    return true;
                }
            }
        }
        return false;
    }
}
void hien_thi_diem(int score, int alive, int level){
    SetColor(196);
    gotoXY(55,33); cout << "SCORE : " << score;
    gotoXY(75,33); cout << "ALIVE : " << alive;
    gotoXY(35,33); cout << "LEVEL : " << level;
}

class tank{
    private:
    toa_do chinh;
    toa_do phu;
    char than;
    char nong_phai, nong_trai, nong_tren, nong_duoi;
    char dan;
    public:
        friend int init(int hard_or_easy);
        friend class dich;
        setX(int a){
            chinh.x = a;
        }
        setY(int b){
            chinh.y = b;
        }
        tank(){
            chinh.x = DEFAULT_X;
            chinh.y = DEFAULT_Y;
            phu.x = -1;
            phu.y = -1;
            than = 178;
            nong_phai = 16;
            nong_trai = 17;
            nong_tren = 30;
            nong_duoi = 31;
            dan = 42;
        }

        void sang_trai(){
            --chinh.x;
        }
        void sang_phai(){
            ++chinh.x;
        }
        void len_tren(){
            --chinh.y;
        }
        void xuong_duoi(){
            ++chinh.y;
        }

        void ve_tank(int check, int ma_mau){
            SetColor(ma_mau);
            if (check == 0){
                gotoXY(chinh.x-1,chinh.y-1);
                cout << " " << than << than;
                gotoXY(chinh.x-1,chinh.y);
                cout << nong_trai << than<< than;
                gotoXY(chinh.x-1,chinh.y+1);
                cout << " " << than << than;
            }
            else if (check == 1){
                gotoXY(chinh.x-1,chinh.y-1);
                cout << " " << nong_tren << " ";
                gotoXY(chinh.x-1,chinh.y);
                cout << than << than<< than;
                gotoXY(chinh.x-1,chinh.y+1);
                cout << than << than << than;
            }
            else if (check == 2){
                gotoXY(chinh.x-1,chinh.y-1);
                cout << than << than << than;
                gotoXY(chinh.x-1,chinh.y);
                cout << than << than<< than;
                gotoXY(chinh.x-1,chinh.y+1);
                cout << " " << nong_duoi << " ";
            }
            else if (check == 3){
                gotoXY(chinh.x-1,chinh.y-1);
                cout << than << than << " ";
                gotoXY(chinh.x-1,chinh.y);
                cout << than << than<< nong_phai;
                gotoXY(chinh.x-1,chinh.y+1);
                cout << than << than << " ";
            }
        }

        void di_chuyen(){
            gotoXY(phu.x-1,phu.y-1);
            cout << "   ";
            gotoXY(phu.x-1,phu.y);
            cout << "   ";
            gotoXY(phu.x-1,phu.y+1);
            cout << "   ";
            phu.x = chinh.x; phu.y = chinh.y;
            gotoXY(chinh.x,chinh.y);
        }

        // truyen toa do xe tank va huong dan
        // dan.x, dan.y = chinh.x, chinh.y
        // mỗi lần nhấn nút space thì cấp phát động, truyền x,y vào
        void vien_dan( int preCheck, int x, int y){
            SetColor(10);
            gotoXY(x,y); cout << dan;
                if (preCheck == 0 || preCheck == 3){
                    Sleep(20);
                }
                else if (preCheck == 1 || preCheck == 2){
                    Sleep(55);
                }
            }
};

class vat_can{
    char c = 35;
    public:
        void ve_khung(){
        SetColor(3);
        for (int x=10; x<110;x++){
            gotoXY(x,5);
            cout << c;
            gotoXY(x,30);
            cout << c;
        }
        for (int y=5; y<=30;y++){
            gotoXY(10,y);
            cout << c;
            gotoXY(110,y);
            cout << c;
        }
    }

        void map0(){
            SetColor(2);
            //da ben trai
            for (int x=30;x<35;x++){
                for (int y=11;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
            for (int x=35;x<=50;x++){
                for (int y=21;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
            // da ben phai
            for (int x=75;x<85;x++){
                for (int y=11;y<=13;y++){
                    gotoXY(x,y); cout << c;
                }
            }
            for (int x=85;x<=90;x++){
                for (int y=11;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
            // da nho tren
            for (int x=48;x<=53;x++){
                for (int y=11;y<=13;y++){
                    gotoXY(x,y); cout << c;
                }
            }

            // da nho duoi
            for (int x=67;x<=72;x++){
                for (int y=21;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
        }

        void map1(){
            SetColor(2);
            //da ben trai
            for (int x=30;x<=35;x++){
                for (int y=11;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
            // da ben phai
            for (int x=85;x<=90;x++){
                for (int y=11;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
            // da giua
            for (int x=58;x<=62;x++){
                for (int y=11;y<=23;y++){
                    gotoXY(x,y); cout << c;
                }
            }
        }
};


class dich : public tank{
    int ban_do;
    toa_do dan_chinh;
    toa_do dan_phu;
//    int tong_dich =0;
    bool dan_cham_tuong = 1;
    public:
    friend int init(int hard_or_easy);
    dich(int x, int y){
        dan_phu.x = -1;
        dan_phu.y = -1;
        chinh.x = x;
        chinh.y = y;
        phu.x = -1;
        phu.y = -1;
        than = 178;
        nong_phai = 16;
        nong_trai = 17;
        nong_tren = 30;
        nong_duoi = 31;
        dan = 42;
    }
    void dich_ban_dan(int huong_ngau_nhien, int preCheck){
           if (dan_cham_tuong==false){
            gotoXY(dan_phu.x,dan_phu.y);
            cout<<" ";
            dan_phu.x = dan_chinh.x; dan_phu.y = dan_chinh.y;
             if (huong_ngau_nhien == 0) {

                dan_phu.x = dan_chinh.x-2; dan_phu.y = dan_chinh.y;
                vien_dan(huong_ngau_nhien,dan_chinh.x-2,dan_chinh.y);
                dan_chinh.x--;
            }
            else if (huong_ngau_nhien == 1) {
                dan_phu.x = dan_chinh.x; dan_phu.y = dan_chinh.y-2;
                vien_dan(huong_ngau_nhien,dan_chinh.x,dan_chinh.y-2);
                dan_chinh.y--;
            }
            else if (huong_ngau_nhien== 2) {
                dan_phu.x = dan_chinh.x; dan_phu.y = dan_chinh.y+2;
                vien_dan(huong_ngau_nhien,dan_chinh.x,dan_chinh.y+2);
                dan_chinh.y++;
            }
            else if (huong_ngau_nhien == 3) {
                dan_phu.x = dan_chinh.x+2; dan_phu.y = dan_chinh.y;
                vien_dan(huong_ngau_nhien,dan_chinh.x+2,dan_chinh.y);
                dan_chinh.x++;
            }
            if (kiem_tra_tuong_dan(dan_chinh.x,dan_chinh.y, ban_do, preCheck)== true){
                gotoXY(dan_phu.x,dan_phu.y); cout << " ";
                dan_cham_tuong = 1;
            }
        }
        else {
            dan_chinh.x = dan_chinh.y = -1;
        }
    }


    // -------- phai truyen vao phu.y thì khi bắn đạn mới kiểm tra được đúng, y phụ là y đúng, y chính chạy tới trc 1 đơn vị trước khi check rồi
    bool kiem_tra_cham(int x, int y){ // truyền vào tọa độ của đạn xe tank
        if (chinh.x-1 == x && phu.y-1 == y || chinh.x == x && phu.y-1 == y || chinh.x+1 == x && phu.y-1 == y ||
            chinh.x-1 == x && phu.y == y || chinh.x == x && phu.y == y || chinh.x+1 == x && phu.y== y ||
            chinh.x-1 == x && phu.y+1 == y || chinh.x == x && phu.y+1 == y || chinh.x+1 == x && phu.y+1== y) return true;
        else return false;
    }

};

void tao_toa_do_ngau_nhien(int &x, int &y,int ban_do){
    lap_lai:
        //Cong thuc cua chung ta: Min + rand[(Max-Min)+1];
    int temp = rand()%4;
    if (ban_do == 0){
        if (temp==0){
            x = rand()%90 + 15 ;
            y = rand()%3 + 7 ;
            }
        else if (temp ==1){
            x = rand()%37 + 46 ;
            y = rand()%5+ 15 ;
        }
        else if (temp == 2){
            x = rand()%41 + 65;
            y = rand()%4 + 25 ;
        }
        else if (temp == 3){
            x = rand()%10 + 95 ;
            y = rand()%20 + 7 ;
        }
        if (kiem_tra_tuong(x,y,ban_do) == true ){
            goto lap_lai;
        }
        else return;
    }
    else if(ban_do==1){
        if (temp==0){
            x = rand()%17 + 38 ;
            y = rand()%19 +8;
            }
        else if (temp ==1){
            x = rand()%15 +13 ;
            y = rand()%19 +8;
        }
        else if (temp == 2){
            x = rand()%13 + 93;
            y = rand()%19 +8;
        }
        else if (temp == 3){
            x = rand()%18 +65 ;
            y = rand()%19 +8;
        }
    }
}



int init(int hard_or_easy){
    PlaySound(TEXT("theme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    // thay đổi bản đồ khi mà score đạt 20.
    int hard_level = hard_or_easy; //neu = 1 thi se Kho';
    bool hard_level_check = 1; //1 khi đã bắn đạn ra thì gtrị bằng 1, cho tới khi chạm tường mà chưa trúng địch thì -1 mạng.
    int so_mang = 3;
    int level = 1;
    int mapIndex = 0;
    int nhap_nhay = 0; // khi đạn trúng địch thì sẽ nhấp nháy vài giây rồi mới reset vị tri.
    vat_can tao_map;
    DOI_MAP:
    system("cls");
    int score = 0;
    tao_map.ve_khung();
    int ban_do = mapIndex%2;
    if (ban_do==0) tao_map.map0();
    else if (ban_do==1) tao_map.map1();
    mapIndex ++;
    hien_thi_diem(score,so_mang, level);
    // -------- khai bao cho dich --------
    srand(time(NULL));
    toa_do temp; // dùng để khơi tạo vị trí ban đầu cho địch
    tao_toa_do_ngau_nhien( temp.x, temp.y, ban_do);
    dich Dich1(temp.x, temp.y) ;
    tao_toa_do_ngau_nhien( temp.x, temp.y, ban_do);
    dich Dich2(temp.x, temp.y);
    tao_toa_do_ngau_nhien( temp.x, temp.y, ban_do);
    dich Dich3(temp.x, temp.y);

    int dich1_preCheck, dich2_preCheck, dich3_preCheck;


    tro_lai_tu_dau_ESC:
    // ------ khai bao cho tank -------
    int hen_gio =0;
    tank Tank;
    int check =1 ;
    int preCheck;
    toa_do dan_phu;
    dan_phu.x = -1;
    dan_phu.y = -1;
    toa_do dan_chinh;
    dan_chinh.x = dan_chinh.y = -1;
    bool dan_cham_tuong = 1;
    int dich1_check, dich2_check, dich3_check;
    while (true){
        quay_lai:
        if (hen_gio%100000 == 0) {
            hen_gio = 0;
            dich1_check = rand()%4;
            dich2_check = rand()%4;
            dich3_check = rand()%4;
//            Dich2.dich_ban_dan(dich2_check);
//            Dich3.dich_ban_dan(dich3_check);
        }
    // --------- dich --------
        // nếu dan.chinh == dịch thì reset lại vị trí xe địch và score +1;
        hen_gio++;
        if (hen_gio%9999==0){
            Dich1.di_chuyen();
            Dich1.ve_tank(dich1_check,12);

            if (dich1_check != 4) dich1_preCheck = dich1_check;
            if (dich1_check == 0) {
                Dich1.sang_trai();
            }
            else if (dich1_check == 1) {
                Dich1.len_tren();
            }
            else if (dich1_check == 2) {
                Dich1.xuong_duoi();
            }
            else if (dich1_check == 3) {
                Dich1.sang_phai();
            }
//            else if (dich1_check == 4 ){
//                Dich1.dan_chinh.x = Dich1.chinh.x;
//                Dich1.dan_chinh.y = Dich1.chinh.y;
//                Dich1.dan_cham_tuong = 0;
//            }
//            Dich1.dich_ban_dan(dich1_preCheck);

            if (kiem_tra_tuong(Dich1.chinh.x,Dich1.chinh.y, ban_do)==true){
                if (dich1_check == 0) Dich1.sang_phai();
                else if (dich1_check == 1) Dich1.xuong_duoi();
                else if (dich1_check == 2) Dich1.len_tren();
                else if (dich1_check == 3) Dich1.sang_trai();
            }
                Dich2.di_chuyen();
                Dich2.ve_tank(dich2_check,11);
                if (dich2_check == 0) {
                    Dich2.sang_trai();
                }
                else if (dich2_check == 1) {
                    Dich2.len_tren();
                }
                else if (dich2_check == 2) {
                    Dich2.xuong_duoi();
                }
                else if (dich2_check == 3) {
                    Dich2.sang_phai();
                }
            if (kiem_tra_tuong(Dich2.chinh.x,Dich2.chinh.y, ban_do)==true){
                if (dich2_check == 0) Dich2.sang_phai();
                else if (dich2_check == 1) Dich2.xuong_duoi();
                else if (dich2_check == 2) Dich2.len_tren();
                else if (dich2_check == 3) Dich2.sang_trai();
            }
                Dich3.di_chuyen();
                Dich3.ve_tank(dich3_check,6);
                if (dich3_check == 0) {
                    Dich3.sang_trai();
                }
                else if (dich3_check == 1) {
                    Dich3.len_tren();
                }
                else if (dich3_check == 2) {
                    Dich3.xuong_duoi();
                }
                else if (dich3_check == 3) {
                    Dich3.sang_phai();
                }
            if (kiem_tra_tuong(Dich3.chinh.x,Dich3.chinh.y, ban_do)==true){                if (dich3_check == 0) Dich3.sang_phai();
                else if (dich3_check == 1) Dich3.xuong_duoi();
                else if (dich3_check == 2) Dich3.len_tren();
                else if (dich3_check == 3) Dich3.sang_trai();

            }

        }


 //   quay_lai:
     if (_kbhit()==true){
        if(check != 4 && check != 5) Tank.di_chuyen();
        // ---------------- ve xe tang ------------------
        Tank.ve_tank(check,15);
        char huong = getch();
        if (check != 4 && dan_cham_tuong==1 && check!=5) preCheck = check;
        if (huong=='a') check = 0;
        else if (huong == 27) so_mang=0;
        else if (huong=='w') check = 1;
        else if (huong=='s') check = 2;
        else if (huong=='d') check = 3;
        else if (huong==32 && dan_cham_tuong==1) check = 4;
        else check = 5;

	//precheck : dinh huong dan bay
	// check: huong tank di chuyen
    // ---------------- di chuyển xe tăng ---------------

        if (check == 0) Tank.sang_trai();
        else if (check == 1) Tank.len_tren();
        else if (check == 2) Tank.xuong_duoi();
        else if (check == 3) Tank.sang_phai();
        else if (check == 4) {
          //  PlaySound(TEXT("ban_dan.wav"), NULL, SND_FILENAME | SND_ASYNC);
            hard_level_check=0; // chua trung duoc ai!
            dan_chinh.x = Tank.chinh.x;
            dan_chinh.y = Tank.chinh.y;
            dan_cham_tuong = 0;
        }
        else if (check == 5) {
            continue;
            //goto quay_lai;
            //goto khong_bi_dung;
        }
        }

        // ------------------ bắn đạn ------------

        if (dan_cham_tuong==false){
            gotoXY(dan_phu.x,dan_phu.y);
            cout<<" ";
            dan_phu.x = dan_chinh.x; dan_phu.y = dan_chinh.y;
             if (preCheck == 0) {

                dan_phu.x = dan_chinh.x-2; dan_phu.y = dan_chinh.y;
                Tank.vien_dan(preCheck,dan_chinh.x-2,dan_chinh.y);
                dan_chinh.x--;
            }
            else if (preCheck == 1) {
                dan_phu.x = dan_chinh.x; dan_phu.y = dan_chinh.y-2;
                Tank.vien_dan(preCheck,dan_chinh.x,dan_chinh.y-2);
                dan_chinh.y--;
            }
            else if (preCheck == 2) {
                dan_phu.x = dan_chinh.x; dan_phu.y = dan_chinh.y+2;
                Tank.vien_dan(preCheck,dan_chinh.x,dan_chinh.y+2);
                dan_chinh.y++;
            }
            else if (preCheck == 3) {
                dan_phu.x = dan_chinh.x+2; dan_phu.y = dan_chinh.y;
                Tank.vien_dan(preCheck,dan_chinh.x+2,dan_chinh.y);
                dan_chinh.x++;
            }
            //kiem tra dan cham tuong
            if (kiem_tra_tuong_dan(dan_chinh.x,dan_chinh.y,ban_do,preCheck)== true){
                gotoXY(dan_phu.x,dan_phu.y); cout << " ";
                dan_cham_tuong = 1;
            }
        }


        // -------- kiểm tra xe tăng có chạm tường chưa

        if (kiem_tra_tuong(Tank.chinh.x,Tank.chinh.y, ban_do)== true) {
            if (check == 0) Tank.sang_phai();
            else if (check == 1) Tank.xuong_duoi();
            else if (check == 2) Tank.len_tren();
            else if (check == 3) Tank.sang_trai();
            continue;
            //goto quay_lai;
        }

        // --------- hết kiểm tra xe tăng chạm tường-----
// ------------------- kiểm tra bắn đạn có trúng địch hay không ----------
// ---------------------- khi đạn chạm vào tank thì sẽ resett lại vị trí tank.
        nhap_nhay_mau_cho_dep:
        if (Dich1.kiem_tra_cham(dan_chinh.x,dan_chinh.y)==true){
              //  PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
                if (nhap_nhay<500) {
                    nhap_nhay ++;
                    int nhap_nhay_mau = rand()%15 +1;
                    Dich1.ve_tank(dich1_check,nhap_nhay_mau);
                    goto nhap_nhay_mau_cho_dep;
                }
                nhap_nhay = 0;
                score ++;
                gotoXY(63,33); cout << score;
                tao_toa_do_ngau_nhien( temp.x, temp.y, ban_do);
                Dich1.chinh.x = temp.x;
                Dich1.chinh.y = temp.y;
                dan_phu.x = -1;
                dan_phu.y = -1;
                dan_chinh.x = dan_chinh.y = -1;
                dan_cham_tuong = true;
                hard_level_check = 1;
        }
        if (Dich2.kiem_tra_cham(dan_chinh.x,dan_chinh.y)==true){
                //PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
                if (nhap_nhay<500) {
                    nhap_nhay ++;
                    int nhap_nhay_mau = rand()%15 +1;
                    Dich2.ve_tank(dich2_check,nhap_nhay_mau);
                    goto nhap_nhay_mau_cho_dep;
                }
                nhap_nhay = 0;
                score ++;
                gotoXY(63,33); cout << score;
                tao_toa_do_ngau_nhien( temp.x, temp.y, ban_do);
                Dich2.chinh.x = temp.x;
                Dich2.chinh.y = temp.y;
                dan_phu.x = -1;
                dan_phu.y = -1;
                dan_chinh.x = dan_chinh.y = -1;
                dan_cham_tuong = true;
                hard_level_check = 1;
        }
        if (Dich3.kiem_tra_cham(dan_chinh.x,dan_chinh.y)==true){
               // PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
                if (nhap_nhay<500) {
                    nhap_nhay ++;
                    int nhap_nhay_mau = rand()%15 +1;
                    Dich3.ve_tank(dich3_check,nhap_nhay_mau);
                    goto nhap_nhay_mau_cho_dep;
                }
                nhap_nhay = 0;
                score ++;
                gotoXY(63,33); cout << score;
                tao_toa_do_ngau_nhien( temp.x, temp.y, ban_do);
                Dich3.chinh.x = temp.x;
                Dich3.chinh.y = temp.y;
                dan_phu.x = -1;
                dan_phu.y = -1;
                dan_chinh.x = dan_chinh.y = -1;
                dan_cham_tuong = true;
                hard_level_check = 1;
        }

        // -------------------Độ khó là HARD ------------------------

        if(hard_level==1){
            if (dan_cham_tuong==1){
            if (hard_level_check==0) {
                so_mang --;
                Sleep(1000);
                Tank.chinh.x = DEFAULT_X;
                Tank.chinh.y = DEFAULT_Y;
                gotoXY(83,33); cout << so_mang;
                hard_level_check = 1;
            }
        }
        }

        // -------------------Kiểm tra 2 xe tông nhau------------------------



        if (score % 21 == 20) {
            ++level;
            goto DOI_MAP;
        }
        if ((Dich1.kiem_tra_cham(Tank.chinh.x-1,Tank.chinh.y-1) == true) || (Dich1.kiem_tra_cham(Tank.chinh.x+1,Tank.chinh.y-1) == true)||
            (Dich1.kiem_tra_cham(Tank.chinh.x-1,Tank.chinh.y+1) == true) || (Dich1.kiem_tra_cham(Tank.chinh.x+1,Tank.chinh.y+1) == true) ){
               // PlaySound(TEXT("cham_dich2.wav"), NULL, SND_FILENAME | SND_ASYNC);
                so_mang --;
                Sleep(1000);
                Tank.chinh.x = DEFAULT_X;
                Tank.chinh.y = DEFAULT_Y;
                gotoXY(83,33); cout << so_mang;
            }
        if ((Dich2.kiem_tra_cham(Tank.chinh.x-1,Tank.chinh.y-1) == true) || (Dich2.kiem_tra_cham(Tank.chinh.x+1,Tank.chinh.y-1) == true)||
            (Dich2.kiem_tra_cham(Tank.chinh.x-1,Tank.chinh.y+1) == true) || (Dich2.kiem_tra_cham(Tank.chinh.x+1,Tank.chinh.y+1) == true) ){
                //PlaySound(TEXT("cham_dich2.wav"), NULL, SND_FILENAME | SND_ASYNC);
                so_mang --;
                Sleep(1000);
                Tank.chinh.x = DEFAULT_X;
                Tank.chinh.y = DEFAULT_Y;
                gotoXY(83,33); cout << so_mang;
            }
        if ((Dich3.kiem_tra_cham(Tank.chinh.x-1,Tank.chinh.y-1) == true) || (Dich3.kiem_tra_cham(Tank.chinh.x+1,Tank.chinh.y-1) == true)||
            (Dich3.kiem_tra_cham(Tank.chinh.x-1,Tank.chinh.y+1) == true) || (Dich3.kiem_tra_cham(Tank.chinh.x+1,Tank.chinh.y+1) == true) ){
               // PlaySound(TEXT("cham_dich2.wav"), NULL, SND_FILENAME | SND_ASYNC);
                so_mang --;
                Sleep(1000);
                Tank.chinh.x = DEFAULT_X;
                Tank.chinh.y = DEFAULT_Y;
                gotoXY(83,33); cout << so_mang;
            }
        if (so_mang==0) {
            PlaySound(TEXT("game_over.wav"), NULL, SND_FILENAME | SND_ASYNC);
            luu_file(score);
            int check_game = game_over();
            if (check_game == 1){
                system("cls");
                return 1; // quay lai Khoi tao lai tu dau
            }
            else if (check_game == 2) return 2; // quay lai main menu
        }
    }




}

// cuối cùng, khi chạm vào địch thì sẽ gameover. tank.chinh == dich1,2,3.chinh
// sau 15 giây xe tank địch biến mất -> trừ 1 mạng
// mất 3 mạng thì gameover
int main(){
    int check_choice;
    resizeConsole(120,40);
    Quay_lai_main_menu:
    int choice =  main_menu();
    if (choice <= 2 || choice == 5) {
        int hard_or_easy = 0; // 0 la de; 1 la kho;
        Khoi_tao_lai_tu_dau:
        if(choice == 5){
            hard_or_easy = 1;
        }
        system("cls");
        ShowCur(false);
        check_choice = init(hard_or_easy); // check choice de xem Main Menu hay Play again
        if (check_choice == 1)goto Khoi_tao_lai_tu_dau;
        else if (check_choice == 2) goto Quay_lai_main_menu;
        getch();
    }
    else if (choice == 3) {
        menu_help();
        getch(); goto Quay_lai_main_menu;
    }
    else if (choice >=4){
        menu_highscore();

        getch(); goto Quay_lai_main_menu;
    }

}
