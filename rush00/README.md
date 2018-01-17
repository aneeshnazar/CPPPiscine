Hierarchy:

1) Object: GameContainer
    1) Attribute: display
    2) Attribute: road
    3) Attribute: player
    4) Function: Run()
2) Object: GameObject
    1) Function: Update()
    2) Object: Display
        1) Object: HUD
            1) Function: DisplayScore();
            2) Function: DisplayLives();
            3) Function: DisplayTime();
        2) Object: MainMenu
        3) Function: DeathScreen()
    3) Object: Road
        1) Attribute: Scenery
        2) Object: SpawnPoints
            1) Fixed # of instances?
            2) Predetermined spawns
        3) Function: Redraw()
        4) Function: ShuffleSpawn()
        5) Function: Spawn()
    4) Object: PhysicalObject - abstract class
        1) Attribute: Color
        2) Attribute: Size
        3) Attribute: Motion
        4) Function: Collide()
        5) Function: Move()
        4) Object: Player
            1) Attribute: Lives
            2) Attribute: Score
            3) Attribute: BulletType
            4) Attribute: Armor
            5) Function: PlayerMove()
            6) Function: PlayerShoot()
            7) Function: Collide()
        5) Object: Obstacles
            1) Attribute: Health
            2) Attribute: PointValue
            3) Attribute: Damage
            3) Function: ObstacleMove()
            4) Function: Collide()
            5) Object: Enemy
                1) Attribute: Armor
                2) Function: EnemyMove()
                3) Function: EnemyShoot()
            6) (Enemy bullets are small Obstacles)
        6) Object: PlayerBullet
            1) Attribute: Damage
        7) Object: Pickup
            1) Attribute: Effect

# Collision

1) Player
    1) PlayerBullet
        1) Nothing
    2) Obstacle
        1) -1 Player life
        2) Obstacle takes damage
    3) Enemy
        1) same as obstacle
    4) Pickup
        1) Player gets pickup effect
        2) Pickup disappears
    5) Player
        1) Nothing
2) PlayerBullet
    1) PlayerBullet
        1) Nothing
    2) Obstacle
        1) Does damage to Obstacle.HP equivalent to (Self.Damage - Obstacle.Armor)
        2) PlayerBullet.HP takes damage equivalent to (Obstacle Damage - Self.Armor)
    3) Enemy
        4) same as obstacle
    4) Pickup
        1) Nothing
    5) Player
        1) Nothing
3) Obstacle
    1) PlayerBullet
        1) Does damage to Obstacle.HP equivalent to (Self.Damage - Obstacle.Armor)
        2) PlayerBullet.HP takes damage equivalent to (Obstacle Damage - Self.Armor)
    2) Obstacle
        1) Changes movement vector of self
        2) Changes movement vector of Obstacle
    3) Enemy
        1) Same as obstacle
    4) Pickup
        1) Nothing
    5) Player
        1) -1 PlayerLife
        2) Obstacle takes damage
4) Enemy
    1) PlayerBullet
        1) Does damage to Obstacle.HP equivalent to (Self.Damage - Obstacle.Armor)
        2) PlayerBullet.HP takes damage equivalent to (Obstacle Damage - Self.Armor)
    2) Obstacle
        1) Changes movement vector of self
        2) Changes movement vector of Obstacle
    3) Enemy
        1) Same as obstacle
    4) Pickup
        1) Nothing
    5) Player
        1) -1 PlayerLife
        2) Obstacle takes damage
5) Pickup
    1) PlayerBullet
        1) Nothing
    2) Obstacle
        1) Nothing
    3) Enemy
        1) Nothing
    4) Pickup
        1) Nothing
    5) Player
        1) Player gets pickup effect
        2) Pickup disappears
