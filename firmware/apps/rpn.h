/*! \file rpn.h
  \brief RPN Calculator application.
*/

//! Initialize the RPN calculator.
void rpn_init();
//! Draw the RPN calculator.
void rpn_draw();
//! Clears the stack to zero, or moves to the next app if already zero.
int rpn_exit();

//! A button has been pressed for the calculator.
void rpn_keypress(char ch);
