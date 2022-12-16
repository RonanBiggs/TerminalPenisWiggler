class TipWiggler{
    public:
int yj;
bool switchDirection = false;
TipWiggler(){
yj=19;
}
int wiggle(){
    
    if( yj == 10){
            switchDirection = true;
        } else if( yj == 6){
            switchDirection = false;
        }
        
        if(yj < 11 && switchDirection == false){
            yj++;

        }
        else if(yj > 6 ){
            yj--;
        }
        return yj;
}
};
