#include "suika.h"

#include <string.h>
#include <math.h>
#include "quantum.h"
#include <hal_pal.h>
#include "hal.h"
#include "stdlib.h"

#include "usaani.qgf.h"
#include "fn.qgf.h"
#include "qp.h"

const int HEIGHT = 240;
const int WIDTH = 240;

static painter_device_t lcd;
static painter_image_handle_t image;
static painter_image_handle_t image1;
static deferred_token my_anim;


void keyboard_post_init_kb(void) {

    lcd = qp_gc9a01_make_spi_device(HEIGHT, WIDTH, GP17, GP27, GP26, 1, 3);
    image = qp_load_image_mem(gfx_usaani);
    image1 = qp_load_image_mem(gfx_fn);

    qp_init(lcd, QP_ROTATION_0);

    qp_power(lcd, true);

    keyboard_post_init_user();
}

int last_layer = 1;
void housekeeping_task_user() {
  int curr_layer = get_highest_layer(layer_state|default_layer_state);
  if (last_layer != curr_layer) {
    last_layer = curr_layer;
    if (curr_layer == 0) {
      qp_stop_animation(my_anim);
      my_anim = qp_animate(lcd, 0, 0, image);
    } else {
      qp_stop_animation(my_anim);
      my_anim = qp_animate(lcd, 0, 0, image1);
//      qp_drawimage(lcd, 0, 0, image1);
    }
    qp_flush(lcd);
 }
}

void suspend_power_down_user(void) {
    qp_power(lcd, false);
}

void suspend_wakeup_init_user(void) {
    qp_power(lcd, true);
}
