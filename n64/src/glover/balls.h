#ifndef DKR_FN_BALLS_H
#define DKR_FN_BALLS_H

    typedef enum {
        TRANSFORM_RUBBER_BALL = 0xFFFFFFFF,
        TRANSFORM_BOWLING_BALL = 0x00000007,
        TRANSFORM_POWER_BALL = 0x00000008,
        TRANSFORM_BEARING_BALL = 0x00000009,
        TRANSFORM_BEACH_BALL = 0x0000000A,
        TRANSFORM_CRYSTAL_BALL = 0x0000000C,
        TRANSFORM_BOOMERANG_POTION = 0x0000000D,
        TRANSFORM_HERCULES_POTION = 0x00000004,
        TRANSFORM_SPEED_POTION = 0x00000005,
        TRANSFORM_STICKY_POTION = 0x00000003,
        TRANSFORM_FROG_POTION = 0x00000002,
        TRANSFORM_HELICOPTER_POTION = 0x00000006,
        TRANSFORM_DEATH_POTION = 0x00000001
    } TRANSFORM_BALLS;

    typedef enum {
        CURRENT_RUBBER_BALL = 0x00,
        CURRENT_BOWLING_BALL = 0x01,
        CURRENT_POWER_BALL = 0x02,
        CURRENT_BEARING_BALL = 0x03,
        CURRENT_BEACH_BALL = 0x04,
        CURRENT_CRYSTAL_BALL = 0x06
    } CURRENT_BALLS;

    #define gvr_current_ball (*(u8*) 0x8029F487)

    typedef void (*gvr_fnt_change_ball)(u32 ball_type, u16 power_uptimer, u8 a1, u8 a18);
    #define gvr_fn_change_ball ((gvr_fnt_change_ball)0x8018C700)

    //Messed up ball:
    //0x80157000
    //A0: 0x64
    //A1: 0x80
    //A2: 0x01
    //A3: 0x18
#endif
