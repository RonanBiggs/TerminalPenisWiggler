class Shaft{
    public:
    int y;
    int x;
    bool switchDirection = false;
    Shaft(int xpos, int ystart){
        y = ystart;
        x = xpos;
    }
        void wiggle(){

        if( y == 10){
            switchDirection = true;
        } else if( y == 6){
            switchDirection = false;
        }
        
        if(y < 11 && switchDirection == false){
            y++;

        }
        else if(y > 6 ){
            y--;
        }
        mvprintw(y, x, "=");
        mvprintw(y, x+1, "=");
        mvprintw(y, x+2, "=");
        
    }

    void downwiggle(){

        if( y == 18){
            switchDirection = true;
        } else if( y == 14){
            switchDirection = false;
        }
        
        if(y < 19 && switchDirection == false){
            y++;

        }
        else if(y > 14 ){
            y--;
        }
        mvprintw(y+2, x, "=");
        mvprintw(y+2, x+1, "=");
        mvprintw(y+2, x+2, "=");
        
    }

};
