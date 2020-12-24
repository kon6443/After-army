#include <iostream>

using namespace std;

// Pieces definition
char mPieces [7 /*kind */ ][4 /* rotation */ ][5 /* horizontal blocks */ ][5 /* vertical blocks */ ] =
{
// Square
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
    }
   },
 
// I
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 2, 1, 1},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 2, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {1, 1, 2, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 2, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    }
   }
  ,
// L
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 2, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 2, 1, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 2, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 2, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    }
   },
// L mirrored
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 2, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 1, 2, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 2, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 2, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0}
    }
   },
// N
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 2, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 2, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0}
    },
 
 
 
   {
    {0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    }
   },
// N mirrored
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 1, 2, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 1, 2, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    }
   },
// T
  {
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 2, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 2, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 2, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
    },
   {
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 2, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
    }
   }
};

// Displacement of the piece to the position where it is first drawn in the board when it is created
int mPiecesInitialPosition  [7 /*kind */ ][4 /* r2otation */ ][2 /* position */] =
{
/* Square */
  {
    {-2, -3},
    {-2, -3},
    {-2, -3},
    {-2, -3}
   },
/* I */
  {
    {-2, -2},
    {-2, -3},
    {-2, -2},
    {-2, -3}
   },
/* L */
  {
    {-2, -3},
    {-2, -3},
    {-2, -3},
    {-2, -2}
   },
/* L mirrored */
  {
    {-2, -3},
    {-2, -2},
    {-2, -3},
    {-2, -3}
   },
/* N */
  {
    {-2, -3},
    {-2, -3},
    {-2, -3},
    {-2, -2}
   },
/* N mirrored */
  {
    {-2, -3},
    {-2, -3},
    {-2, -3},
    {-2, -2}
   },
/* T */
  {
    {-2, -3},
    {-2, -3},
    {-2, -3},
    {-2, -2}
   },
};

#ifndef _PIECES_
#define _PIECES_
// --------------------------------------------------------------------------------
//                                   Pieces
// --------------------------------------------------------------------------------
class Pieces
{
public:
 
    int GetBlockType        (int pPiece, int pRotation, int pX, int pY);
    int GetXInitialPosition (int pPiece, int pRotation);
    int GetYInitialPosition (int pPiece, int pRotation);
};
#endif // _PIECES_

#ifndef _BOARD_
#define _BOARD_
// ------ Defines -----
#define BOARD_LINE_WIDTH 6          // Width of each of the two lines that delimit the board
#define BLOCK_SIZE 16               // Width and Height of each block of a piece
#define BOARD_POSITION 320          // Center position of the board from the left of the screen
#define BOARD_WIDTH 10              // Board width in blocks
#define BOARD_HEIGHT 20             // Board height in blocks
#define MIN_VERTICAL_MARGIN 20      // Minimum vertical margin for the board limit
#define MIN_HORIZONTAL_MARGIN 20    // Minimum horizontal margin for the board limit
#define PIECE_BLOCKS 5              // Number of horizontal and vertical blocks of a matrix piece
// --------------------------------------------------------------------------------
//                                   Board
// --------------------------------------------------------------------------------
class Board {
public:
 
    Board                       (Pieces *pPieces, int pScreenHeight);
 
    int GetXPosInPixels         (int pPos);
    int GetYPosInPixels         (int pPos);
    bool IsFreeBlock            (int pX, int pY);
    bool IsPossibleMovement     (int pX, int pY, int pPiece, int pRotation);
    void StorePiece             (int pX, int pY, int pPiece, int pRotation);
    void DeletePossibleLines    ();
    bool IsGameOver             ();
 
private:
 
    enum { POS_FREE, POS_FILLED };          // POS_FREE = free position of the board; POS_FILLED = filled position of the board
    int mBoard [BOARD_WIDTH][BOARD_HEIGHT]; // Board that contains the pieces
    Pieces *mPieces;
    int mScreenHeight;
 
    void InitBoard();
    void DeleteLine (int pY);
};
#endif // _BOARD_

#ifndef _IO_
#define _IO_
// ------ Includes -----
#ifndef LINUX
//#include "SDL/include/SDL.h"
//#include "SDL/SDL_GfxPrimitives/SDL_gfxPrimitives.h"
#else
//#include <SDL/SDL.h>
//#include "SDL/SDL_GfxPrimitives/sdl_gfxprimitives.h"
#endif
#pragma comment (lib, "SDL/lib/SDL.lib")
#pragma comment (lib, "SDL/SDL_GfxPrimitives/SDL_GfxPrimitives_Static.lib")
// ------ Enums -----
enum color {BLACK, RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, WHITE, COLOR_MAX}; // Colors
// --------------------------------------------------------------------------------
//                                   IO
// --------------------------------------------------------------------------------

class IO {
public:
    IO                      ();
 
    void DrawRectangle      (int pX1, int pY1, int pX2, int pY2, enum color pC);
    void ClearScreen        ();
    int GetScreenHeight     ();
    int InitGraph           ();
    int Pollkey             ();
    int Getkey              ();
    int IsKeyDown           (int pKey);
    void UpdateScreen       ();
};
#endif // _IO_












#ifndef _GAME_
#define _GAME_
// ------ Includes -----
#include <time.h>
// ------ Defines -----
#define WAIT_TIME 700           // Number of milliseconds that the piece remains before going 1 block down */

// --------------------------------------------------------------------------------
//                                   Game
// --------------------------------------------------------------------------------
class Game {
public:
    Game            (Board *pBoard, Pieces *pPieces, IO *pIO, int pScreenHeight);
    void DrawScene ();
    void CreateNewPiece ();
 
    int mPosX, mPosY;               // Position of the piece that is falling down
    int mPiece, mRotation;          // Kind and rotation the piece that is falling down
 
private:
    int mScreenHeight;              // Screen height in pixels
    int mNextPosX, mNextPosY;       // Position of the next piece
    int mNextPiece, mNextRotation;  // Kind and rotation of the next piece
 
    Board *mBoard;
    Pieces *mPieces;
    IO *mIO;
 
    int GetRand (int pA, int pB);
    void InitGame();
    void DrawPiece (int pX, int pY, int pPiece, int pRotation);
    void DrawBoard ();
};
#endif // _GAME_




int main() {
     
    /*
    ==================
    Main
    ==================
    */
    int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
        // ----- Vars -----
     
        // Class for drawing staff, it uses SDL for the rendering. Change the methods of this class
        // in order to use a different renderer
        IO mIO;
        int mScreenHeight = mIO.GetScreenHeight();
        // Pieces
        Pieces mPieces;
        // Board
        Board mBoard (&mPieces, mScreenHeight);
        // Game
        Game mGame (&mBoard, &mPieces, &mIO, mScreenHeight);
        // Get the actual clock milliseconds (SDL)
        unsigned long mTime1 = SDL_GetTicks();
    
        // ----- Main Loop -----
        while (!mIO.IsKeyDown (SDLK_ESCAPE)) {
            // ----- Draw -----
            mIO.ClearScreen ();         // Clear screen
            mGame.DrawScene ();         // Draw staff
            mIO.UpdateScreen ();        // Put the graphic context in the screen
        // ----- Input -----
         
        int mKey = mIO.Pollkey();
         
        switch (mKey)
        {
            case (SDLK_RIGHT):
            {
                if (mBoard.IsPossibleMovement (mGame.mPosX + 1, mGame.mPosY, mGame.mPiece, mGame.mRotation))
                    mGame.mPosX++;
                    break;
            }
         
            case (SDLK_LEFT):
            {
                if (mBoard.IsPossibleMovement (mGame.mPosX - 1, mGame.mPosY, mGame.mPiece, mGame.mRotation))
                    mGame.mPosX--;
                break;
            }
         
            case (SDLK_DOWN):
            {
                if (mBoard.IsPossibleMovement (mGame.mPosX, mGame.mPosY + 1, mGame.mPiece, mGame.mRotation))
                    mGame.mPosY++;
                break;
            }
                case (SDLK_x):
                {
                    // Check collision from up to down
                    while (mBoard.IsPossibleMovement(mGame.mPosX, mGame.mPosY, mGame.mPiece, mGame.mRotation)) { mGame.mPosY++; }
                 
                    mBoard.StorePiece (mGame.mPosX, mGame.mPosY - 1, mGame.mPiece, mGame.mRotation);
                 
                    mBoard.DeletePossibleLines ();
                 
                    if (mBoard.IsGameOver())
                    {
                        mIO.Getkey();
                        exit(0);
                    }
                 
                    mGame.CreateNewPiece();
                 
                    break;
                }
                case (SDLK_z):
                    {
                        if (mBoard.IsPossibleMovement (mGame.mPosX, mGame.mPosY, mGame.mPiece, (mGame.mRotation + 1) % 4))
                            mGame.mRotation = (mGame.mRotation + 1) % 4;
                 
                        break;
                    }
                }
            
             // ----- Vertical movement -----
             
                    unsigned long mTime2 = SDL_GetTicks();
             
                    if ((mTime2 - mTime1) > WAIT_TIME)
                    {
                        if (mBoard.IsPossibleMovement (mGame.mPosX, mGame.mPosY + 1, mGame.mPiece, mGame.mRotation))
                        {
                            mGame.mPosY++;
                        }
                        else
                        {
                            mBoard.StorePiece (mGame.mPosX, mGame.mPosY, mGame.mPiece, mGame.mRotation);
             
                            mBoard.DeletePossibleLines ();
             
                            if (mBoard.IsGameOver())
                            {
                                mIO.Getkey();
                                exit(0);
                            }
             
                            mGame.CreateNewPiece();
                        }
             
                        mTime1 = SDL_GetTicks();
                    }
                }
             
                return 0;
            }
            
            
            
    return 0;
}

/*
======================================
Return the type of a block (0 = no-block, 1 = normal block, 2 = pivot block)
Parameters:
>> pPiece:        Piece to draw
>> pRotation: 1 of the 4 possible rotations
>> pX:            Horizontal position in blocks
>> pY:            Vertical position in blocks
======================================
*/
int Pieces::GetBlockType(int pPiece, int pRotation, int pX, int pY) {
    return mPieces [pPiece][pRotation][pX][pY];
}
/*
======================================
Returns the horizontal displacement of the piece that has to be applied in order to create it in the
correct position.
 
Parameters:
 
>> pPiece:    Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
int Pieces::GetXInitialPosition (int pPiece, int pRotation)
{
    return mPiecesInitialPosition [pPiece][pRotation][0];
}
/*
======================================
Returns the vertical displacement of the piece that has to be applied in order to create it in the
correct position.
 
Parameters:
 
>> pPiece:    Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
int Pieces::GetYInitialPosition (int pPiece, int pRotation)
{
    return mPiecesInitialPosition [pPiece][pRotation][1];
}

/*
======================================
Init the board blocks with free positions
======================================
*/
void Board::InitBoard()
{
    for (int i = 0; i < BOARD_WIDTH; i++)
        for (int j = 0; j < BOARD_HEIGHT; j++)
            mBoard[i][j] = POS_FREE;
}

/*
======================================
Store a piece in the board by filling the blocks
 
Parameters:
 
>> pX:        Horizontal position in blocks
>> pY:        Vertical position in blocks
>> pPiece:    Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
void Board::StorePiece (int pX, int pY, int pPiece, int pRotation)
{
    // Store each block of the piece into the board
    for (int i1 = pX, i2 = 0; i1 < pX + PIECE_BLOCKS; i1++, i2++)
    {
        for (int j1 = pY, j2 = 0; j1 < pY + PIECE_BLOCKS; j1++, j2++)
        {
            // Store only the blocks of the piece that are not holes
            if (mPieces->GetBlockType (pPiece, pRotation, j2, i2) != 0)
                mBoard[i1][j1] = POS_FILLED;
        }
    }
}

/*
======================================
Check if the game is over becase a piece have achived the upper position
 
Returns true or false
======================================
*/
bool Board::IsGameOver()
{
    //If the first line has blocks, then, game over
    for (int i = 0; i < BOARD_WIDTH; i++)
    {
        if (mBoard[i][0] == POS_FILLED) return true;
    }
    return false;
}

/*
======================================
Delete a line of the board by moving all above lines down
Parameters:
>> pY:        Vertical position in blocks of the line to delete
======================================
*/
void Board::DeleteLine (int pY) {
    // Moves all the upper lines one row down
    for (int j = pY; j > 0; j--)
    {
        for (int i = 0; i < BOARD_WIDTH; i++)
        {
            mBoard[i][j] = mBoard[i][j-1];
        }
    }
}

/*
======================================
Delete all the lines that should be removed
======================================
*/
void Board::DeletePossibleLines () {
    for (int j = 0; j < BOARD_HEIGHT; j++)
    {
        int i = 0;
        while (i < BOARD_WIDTH)
        {
            if (mBoard[i][j] != POS_FILLED) break;
            i++;
        }
 
        if (i == BOARD_WIDTH) DeleteLine (j);
    }
}

/*
======================================
Returns 1 (true) if the this block of the board is empty, 0 if it is filled
 
Parameters:
 
>> pX:        Horizontal position in blocks
>> pY:        Vertical position in blocks
======================================
*/
bool Board::IsFreeBlock (int pX, int pY) {
    if (mBoard [pX][pY] == POS_FREE) return true; else return false;
}

/*
======================================
Returns the horizontal position (in pixels) of the block given like parameter
 
Parameters:
 
>> pPos:  Horizontal position of the block in the board
======================================
*/
int Board::GetXPosInPixels (int pPos) {
    return  ( ( BOARD_POSITION - (BLOCK_SIZE * (BOARD_WIDTH / 2)) ) + (pPos * BLOCK_SIZE) );
}
 
 
/*
======================================
Returns the vertical position (in pixels) of the block given like parameter
 
Parameters:
 
>> pPos:  Horizontal position of the block in the board
======================================
*/
int Board::GetYPosInPixels (int pPos) {
    return ( (mScreenHeight - (BLOCK_SIZE * BOARD_HEIGHT)) + (pPos * BLOCK_SIZE) );
}

/*
======================================
Check if the piece can be stored at this position without any collision
Returns true if the movement is  possible, false if it not possible
Parameters:
>> pX:        Horizontal position in blocks
>> pY:        Vertical position in blocks
>> pPiece:    Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
bool Board::IsPossibleMovement (int pX, int pY, int pPiece, int pRotation) {
    // Checks collision with pieces already stored in the board or the board limits
    // This is just to check the 5x5 blocks of a piece with the appropriate area in the board
    for(int i1=pX, i2=0; i1<pX+PIECE_BLOCKS; i1++, i2++) {
        for(int j1=pY, j2=0; j1<pY+PIECE_BLOCKS; j1++, j2++) {
            // Check if the piece is outside the limits of the board
            if ( (i1<0) || (i1>BOARD_WIDTH-1) || (j1 > BOARD_HEIGHT - 1) ) {
                if (mPieces->GetBlockType (pPiece, pRotation, j2, i2) != 0) return 0;
            }
            // Check if the piece have collisioned with a block already stored in the map
            if (j1 >= 0) {
                if ((mPieces->GetBlockType (pPiece, pRotation, j2, i2) != 0) && (!IsFreeBlock (i1, j1)) )
                    return false;
            }
        }
    }
    // No collision
    return true;
}

/*
======================================
Get a random int between to integers
 
Parameters:
>> pA: First number
>> pB: Second number
======================================
*/
int Game::GetRand (int pA, int pB) {
    return rand () % (pB - pA + 1) + pA;
}

/*
======================================
Initial parameters of the game
======================================
*/
void Game::InitGame() {
    // Init random numbers
    srand ((unsigned int) time(NULL));
 
    // First piece
    mPiece          = GetRand (0, 6);
    mRotation       = GetRand (0, 3);
    mPosX           = (BOARD_WIDTH / 2) + mPieces->GetXInitialPosition (mPiece, mRotation);
    mPosY           = mPieces->GetYInitialPosition (mPiece, mRotation);
 
    //  Next piece
    mNextPiece      = GetRand (0, 6);
    mNextRotation   = GetRand (0, 3);
    mNextPosX       = BOARD_WIDTH + 5;
    mNextPosY       = 5;
}

/*
======================================
Create a random piece
======================================
*/
void Game::CreateNewPiece() {
    // The new piece
    mPiece          = mNextPiece;
    mRotation       = mNextRotation;
    mPosX           = (BOARD_WIDTH / 2) + mPieces->GetXInitialPosition (mPiece, mRotation);
    mPosY           = mPieces->GetYInitialPosition (mPiece, mRotation);
 
    // Random next piece
    mNextPiece      = GetRand (0, 6);
    mNextRotation   = GetRand (0, 3);
}

/*
======================================
Draw piece
Parameters:
>> pX:        Horizontal position in blocks
>> pY:        Vertical position in blocks
>> pPiece:    Piece to draw
>> pRotation: 1 of the 4 possible rotations
======================================
*/
void Game::DrawPiece (int pX, int pY, int pPiece, int pRotation) {
    color mColor;               // Color of the block
    // Obtain the position in pixel in the screen of the block we want to draw
    int mPixelsX = mBoard->GetXPosInPixels (pX);
    int mPixelsY = mBoard->GetYPosInPixels (pY);
 
    // Travel the matrix of blocks of the piece and draw the blocks that are filled
    for (int i = 0; i < PIECE_BLOCKS; i++)
    {
        for (int j = 0; j < PIECE_BLOCKS; j++)
        {
            // Get the type of the block and draw it with the correct color
            switch (mPieces->GetBlockType (pPiece, pRotation, j, i))
            {
                case 1: mColor = GREEN; break;  // For each block of the piece except the pivot
                case 2: mColor = BLUE; break;   // For the pivot
            }
             
            if (mPieces->GetBlockType (pPiece, pRotation, j, i) != 0)
                mIO->DrawRectangle   (mPixelsX + i * BLOCK_SIZE,
                                    mPixelsY + j * BLOCK_SIZE,
                                    (mPixelsX + i * BLOCK_SIZE) + BLOCK_SIZE - 1,
                                    (mPixelsY + j * BLOCK_SIZE) + BLOCK_SIZE - 1,
                                    mColor);
        }
    }
}

/*
======================================
Draw board
 
Draw the two lines that delimit the board
======================================
*/
void Game::DrawBoard () {
 
    // Calculate the limits of the board in pixels
    int mX1 = BOARD_POSITION - (BLOCK_SIZE * (BOARD_WIDTH / 2)) - 1;
    int mX2 = BOARD_POSITION + (BLOCK_SIZE * (BOARD_WIDTH / 2));
    int mY = mScreenHeight - (BLOCK_SIZE * BOARD_HEIGHT);
     
    // Check that the vertical margin is not to small
    //assert (mY > MIN_VERTICAL_MARGIN);
 
    // Rectangles that delimits the board
    mIO->DrawRectangle (mX1 - BOARD_LINE_WIDTH, mY, mX1, mScreenHeight - 1, BLUE);
 
    mIO->DrawRectangle (mX2, mY, mX2 + BOARD_LINE_WIDTH, mScreenHeight - 1, BLUE);
     
    // Check that the horizontal margin is not to small
    //assert (mX1 > MIN_HORIZONTAL_MARGIN);
 
    // Drawing the blocks that are already stored in the board
    mX1 += 1;
    for (int i = 0; i < BOARD_WIDTH; i++)
    {
        for (int j = 0; j < BOARD_HEIGHT; j++)
        {
            // Check if the block is filled, if so, draw it
            if (!mBoard->IsFreeBlock(i, j))
                mIO->DrawRectangle ( mX1 + i * BLOCK_SIZE,
                                        mY + j * BLOCK_SIZE,
                                        (mX1 + i * BLOCK_SIZE) + BLOCK_SIZE - 1,
                                        (mY + j * BLOCK_SIZE) + BLOCK_SIZE - 1,
                                        RED);
        }
    }
}

/*
======================================
Draw scene
 
Draw all the objects of the scene
======================================
*/
void Game::DrawScene () {
    DrawBoard ();                                                   // Draw the delimitation lines and blocks stored in the board
    DrawPiece (mPosX, mPosY, mPiece, mRotation);                    // Draw the playing piece
    DrawPiece (mNextPosX, mNextPosY, mNextPiece, mNextRotation);    // Draw the next piece
}


