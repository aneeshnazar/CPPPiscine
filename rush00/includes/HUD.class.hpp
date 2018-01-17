#ifndef HUD_H
#define HUD_H

class HUD : public Display {
    private:

    public:
        HUD ();
        HUD (HUD const &cc);
        ~HUD ();
        HUD &operator=(HUD const &input);
};

#endif
