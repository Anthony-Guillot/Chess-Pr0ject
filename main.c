#include <stdio.h>
#include <MLV/MLV_all.h>

void bouton(int p_x,int p_y,const char* text){
    MLV_Color couleur=MLV_COLOR_BLACK;
    int interligne = 9,w_box=0,h_box=0;
    MLV_get_size_of_adapted_text_box(text,interligne,&w_box, &h_box);
    int m_x,m_y;
    if(m_x>p_x && m_x<p_x+w_box && m_y>p_y && m_y<p_y+h_box){
        couleur = MLV_COLOR_BLUE;
        if(MLV_get_mouse_button_state(MLV_BUTTON_LEFT)==MLV_PRESSED){
            MLV_free_window();
        }
    }
    else{
        couleur=MLV_COLOR_BLACK;
    }
    MLV_get_mouse_position( &m_x, &m_y );
    MLV_draw_adapted_text_box(p_x,p_y,text,interligne,MLV_COLOR_GREEN,MLV_COLOR_WHITE,couleur,MLV_TEXT_CENTER);
}

int main( int argc, char *argv[] ){
    MLV_create_window("Menu","Menu echecs",640,480);
    bouton(10,10,"ceci est un test");
    bouton(10,50,"ceci est un 2eme test");
    MLV_actualise_window();
    return 0;
}

