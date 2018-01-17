#ifndef MAINMENU_H
#define MAINMENU_H

class MainMenu : public Display {
    private:

    public:
        MainMenu ();
        MainMenu (MainMenu const &cc);
        ~MainMenu ();
        MainMenu &operator=(MainMenu const &input);
};

#endif
