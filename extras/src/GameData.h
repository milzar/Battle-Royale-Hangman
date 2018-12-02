// Game port no
#define PORT_NO 2666

class GameData {

    int word_length;
    // Holds the string currently revealed
    // unrevealed characters are represented by an underscore
    char current_string[10];

    int n_players;
    int current_turn;

public:
    GameData(int len) { init(len); };
    ~GameData() {}

    // Initialize variables
    // Pass the length of the root word
    void init(int);

    // Returns 1 if game is over
    // root_word is the word being guessed given by server
    // String str which can be a single char if it's a letter guess
    // or a longer string if it is a guess for the word
    int play(char* root_word, const char* str);

    // Returns whose turn it is
    int current_player() { return current_turn; }

    void render();
};