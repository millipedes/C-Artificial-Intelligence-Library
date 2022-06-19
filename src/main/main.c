/**
 * Hard coded graph back end includes
 */
// #include <math.h>
// #include "../GraphingPackage/include/relation.h"
// #include "../GraphingPackage/include/file_io.h"
/**
 * Front end includes
 */
#include "../FunctionCFG/Token/include/token.h"
#include "../FunctionCFG/Lexer/include/lexer.h"

// double x_squared(double x);

int main(void) {
  /**
   * As the front end of the program is currently in development, the hard coded
   * back-end functions have been left for reference for when I return to meet
   * the two
   */
  // canvas      * can = init_canvas(1000, 1000);
  // graph_scale * gs = init_graph_scale(
  //     init_axis_tic_marks(10, 5, 30, X),          // x axis tic marks
  //     init_axis_tic_marks(10, 30, 5, Y),          // y axis tic marks
  //     init_coord_axis(-10.0, 10.0, 2, X),         // x axis
  //     init_coord_axis(-10.0, 10.0, 2, Y),         // y axis
  //     init_graph_border(init_color(0, 0, 0), 10), // border of graph
  //     2                                           // no axes (don't change!)
  //     );
  // write_gs_to_canvas(can, gs);
  // color * green = init_color(0, 255, 0);
  // write_rel_to_canvas(can, gs, x_squared, green, 0.00001);
  // write_canvas_to_file("test.ppm", can);
  // free_color(green);
  // free_canvas(can);
  // free_graph_scale(gs);


  /**
   * Front end functions relating to CFG
   */
  int size = 0;
  lexer * lex = init_lexer("123.132 + 92 - 10^2 * 99.8 / 40 , :: x file.name\n");
  token ** tok_list = lex_source(lex);
  while(tok_list[size]->type != TOKEN_NEWLINE) {
    token_dump_debug(tok_list[size]);
    size++;
  }

  free_token_list(tok_list);
  free_lexer(lex);
  return 0;
}

// double x_squared(double x) {
//   return pow(x + 1, 2) - 3;
// }
