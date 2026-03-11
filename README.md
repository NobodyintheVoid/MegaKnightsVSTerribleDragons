```mermaid
classDiagram
    class Game {
        -int Rounds
        +AddScore()
        +StillFighting bool
        +PrintWhoWon()
    }

    class Score {
        -int ScoreKnights
        -int ScoreDragons
        +ScoreKnights()
        +ScoreDragons()
    }

    class Character {
        <<abstract>>
    }

    class Knight {
        +Knight()
    }

    class Dragon {
        +Dragon()
    }

    class Priest {
        +Priest()
    }

    class Electro {
        +Electro()
    }

    Game *--> Score : содержит
    Game --> Character : управляет

    Character <|-- Knight
    Character <|-- Dragon
    Character <|-- Priest
    Character <|-- Electro
