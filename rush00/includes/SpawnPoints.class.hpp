#ifndef SPAWNPOINTS_H
#define SPAWNPOINTS_H

class SpawnPoints : public Road {
    private:

    public:
        SpawnPoints ();
        SpawnPoints (SpawnPoints const &cc);
        ~SpawnPoints ();
        SpawnPoints &operator=(SpawnPoints const &input);
};

#endif
