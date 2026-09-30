/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 071312bc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 in_x9;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  puVar13 = *(undefined8 **)(unaff_x20 + 0x2e0);
  *(undefined8 *)(unaff_x19 + 0x5d0) = param_1;
  *(undefined8 *)(unaff_x19 + 0x5d8) = in_x9;
  thunk_FUN_03d1023c(unaff_x19 + 0x5d0,0);
  uVar11 = *puVar13;
  in_stack_00000008 = 0;
  thunk_FUN_03d1023c();
  puVar3 = PTR_DAT_09210ba8;
  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x366);
  if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x5e0) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x5e8) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0x5e0,0);
    uVar11 = *(undefined8 *)puVar3;
    in_stack_00000008 = 0;
    thunk_FUN_03d1023c();
    puVar3 = PTR_DAT_09210ac8;
    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x5187);
    if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x5f0) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x5f8) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x5f0,0);
      uVar11 = *(undefined8 *)puVar3;
      in_stack_00000008 = 0;
      thunk_FUN_03d1023c();
      puVar3 = PTR_DAT_09211358;
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x5190);
      if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x600) = uVar11;
        *(undefined8 *)(unaff_x19 + 0x608) = in_stack_00000008;
        thunk_FUN_03d1023c(unaff_x19 + 0x600,0);
        uVar11 = *(undefined8 *)puVar3;
        in_stack_00000008 = 0;
        thunk_FUN_03d1023c();
        puVar3 = PTR_DAT_092113e0;
        in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x51a9);
        if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x610) = uVar11;
          *(undefined8 *)(unaff_x19 + 0x618) = in_stack_00000008;
          thunk_FUN_03d1023c(unaff_x19 + 0x610,0);
          uVar11 = *(undefined8 *)puVar3;
          in_stack_00000008 = 0;
          thunk_FUN_03d1023c();
          puVar3 = PTR_DAT_09210b00;
          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x5166);
          if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x620) = uVar11;
            *(undefined8 *)(unaff_x19 + 0x628) = in_stack_00000008;
            thunk_FUN_03d1023c(unaff_x19 + 0x620,0);
            uVar11 = *(undefined8 *)puVar3;
            in_stack_00000008 = 0;
            thunk_FUN_03d1023c();
            puVar3 = PTR_DAT_09210c08;
            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0xc42d);
            if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x630) = uVar11;
              *(undefined8 *)(unaff_x19 + 0x638) = in_stack_00000008;
              thunk_FUN_03d1023c(unaff_x19 + 0x630,0);
              uVar11 = *(undefined8 *)puVar3;
              in_stack_00000008 = 0;
              thunk_FUN_03d1023c();
              puVar3 = PTR_DAT_09210b30;
              in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0xc431);
              if (0x62 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x640) = uVar11;
                *(undefined8 *)(unaff_x19 + 0x648) = in_stack_00000008;
                thunk_FUN_03d1023c(unaff_x19 + 0x640,0);
                uVar11 = *(undefined8 *)puVar3;
                in_stack_00000008 = 0;
                thunk_FUN_03d1023c();
                puVar3 = PTR_DAT_09210e00;
                in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x3a8);
                if (99 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x650) = uVar11;
                  *(undefined8 *)(unaff_x19 + 0x658) = in_stack_00000008;
                  thunk_FUN_03d1023c(unaff_x19 + 0x650,0);
                  uVar11 = *(undefined8 *)puVar3;
                  in_stack_00000008 = 0;
                  thunk_FUN_03d1023c();
                  puVar3 = PTR_DAT_092108c0;
                  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6faf);
                  if (100 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x660) = uVar11;
                    *(undefined8 *)(unaff_x19 + 0x668) = in_stack_00000008;
                    thunk_FUN_03d1023c(unaff_x19 + 0x660,0);
                    uVar11 = *(undefined8 *)puVar3;
                    in_stack_00000008 = 0;
                    thunk_FUN_03d1023c();
                    puVar3 = PTR_DAT_09210948;
                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb0);
                    if (0x65 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x670) = uVar11;
                      *(undefined8 *)(unaff_x19 + 0x678) = in_stack_00000008;
                      thunk_FUN_03d1023c(unaff_x19 + 0x670,0);
                      uVar11 = *(undefined8 *)puVar3;
                      in_stack_00000008 = 0;
                      thunk_FUN_03d1023c();
                      puVar3 = PTR_DAT_092110f8;
                      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb1);
                      if (0x66 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x680) = uVar11;
                        *(undefined8 *)(unaff_x19 + 0x688) = in_stack_00000008;
                        thunk_FUN_03d1023c(unaff_x19 + 0x680,0);
                        uVar11 = *(undefined8 *)puVar3;
                        in_stack_00000008 = 0;
                        thunk_FUN_03d1023c();
                        puVar3 = PTR_DAT_092111a8;
                        in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb2);
                        if (0x67 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x690) = uVar11;
                          *(undefined8 *)(unaff_x19 + 0x698) = in_stack_00000008;
                          thunk_FUN_03d1023c(unaff_x19 + 0x690,0);
                          uVar11 = *(undefined8 *)puVar3;
                          in_stack_00000008 = 0;
                          thunk_FUN_03d1023c();
                          puVar3 = PTR_DAT_09210e50;
                          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb7);
                          if (0x68 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x6a0) = uVar11;
                            *(undefined8 *)(unaff_x19 + 0x6a8) = in_stack_00000008;
                            thunk_FUN_03d1023c(unaff_x19 + 0x6a0,0);
                            uVar11 = *(undefined8 *)puVar3;
                            in_stack_00000008 = 0;
                            thunk_FUN_03d1023c();
                            puVar3 = PTR_DAT_09211240;
                            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fbd);
                            if (0x69 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x6b0) = uVar11;
                              *(undefined8 *)(unaff_x19 + 0x6b8) = in_stack_00000008;
                              thunk_FUN_03d1023c(unaff_x19 + 0x6b0,0);
                              uVar11 = *(undefined8 *)puVar3;
                              in_stack_00000008 = 0;
                              thunk_FUN_03d1023c();
                              puVar3 = PTR_DAT_09210940;
                              in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb4);
                              if (0x6a < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x6c0) = uVar11;
                                *(undefined8 *)(unaff_x19 + 0x6c8) = in_stack_00000008;
                                thunk_FUN_03d1023c(unaff_x19 + 0x6c0,0);
                                uVar11 = *(undefined8 *)puVar3;
                                in_stack_00000008 = 0;
                                thunk_FUN_03d1023c();
                                puVar3 = PTR_DAT_09210900;
                                in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb3);
                                if (0x6b < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x6d0) = uVar11;
                                  *(undefined8 *)(unaff_x19 + 0x6d8) = in_stack_00000008;
                                  thunk_FUN_03d1023c(unaff_x19 + 0x6d0,0);
                                  uVar11 = *(undefined8 *)puVar3;
                                  in_stack_00000008 = 0;
                                  thunk_FUN_03d1023c();
                                  puVar3 = PTR_DAT_09210fa0;
                                  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb5);
                                  if (0x6c < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x6e0) = uVar11;
                                    *(undefined8 *)(unaff_x19 + 0x6e8) = in_stack_00000008;
                                    thunk_FUN_03d1023c(unaff_x19 + 0x6e0,0);
                                    uVar11 = *(undefined8 *)puVar3;
                                    in_stack_00000008 = 0;
                                    thunk_FUN_03d1023c();
                                    puVar3 = PTR_DAT_09210c70;
                                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb6);
                                    if (0x6d < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x6f0) = uVar11;
                                      *(undefined8 *)(unaff_x19 + 0x6f8) = in_stack_00000008;
                                      thunk_FUN_03d1023c(unaff_x19 + 0x6f0,0);
                                      uVar11 = *(undefined8 *)puVar3;
                                      in_stack_00000008 = 0;
                                      thunk_FUN_03d1023c();
                                      puVar3 = PTR_DAT_09210bc0;
                                      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x5182);
                                      if (0x6e < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x700) = uVar11;
                                        *(undefined8 *)(unaff_x19 + 0x708) = in_stack_00000008;
                                        thunk_FUN_03d1023c(unaff_x19 + 0x700,0);
                                        uVar11 = *(undefined8 *)puVar3;
                                        in_stack_00000008 = 0;
                                        thunk_FUN_03d1023c();
                                        puVar3 = PTR_DAT_09211300;
                                        in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x3b5);
                                        if (0x6f < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x710) = uVar11;
                                          *(undefined8 *)(unaff_x19 + 0x718) = in_stack_00000008;
                                          thunk_FUN_03d1023c(unaff_x19 + 0x710,0);
                                          uVar11 = *(undefined8 *)puVar3;
                                          in_stack_00000008 = 0;
                                          thunk_FUN_03d1023c();
                                          puVar3 = PTR_DAT_092107b8;
                                          in_stack_00000008 =
                                               CONCAT62(in_stack_00000008._2_6_,0x1b5);
                                          if (0x70 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x720) = uVar11;
                                            *(undefined8 *)(unaff_x19 + 0x728) = in_stack_00000008;
                                            thunk_FUN_03d1023c(unaff_x19 + 0x720,0);
                                            uVar11 = *(undefined8 *)puVar3;
                                            in_stack_00000008 = 0;
                                            thunk_FUN_03d1023c();
                                            puVar3 = PTR_DAT_092108a0;
                                            in_stack_00000008 =
                                                 CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                            if (0x71 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x730) = uVar11;
                                              *(undefined8 *)(unaff_x19 + 0x738) = in_stack_00000008
                                              ;
                                              thunk_FUN_03d1023c(unaff_x19 + 0x730,0);
                                              uVar11 = *(undefined8 *)puVar3;
                                              in_stack_00000008 = 0;
                                              thunk_FUN_03d1023c();
                                              puVar3 = PTR_DAT_09210980;
                                              in_stack_00000008 =
                                                   CONCAT62(in_stack_00000008._2_6_,65000);
                                              if (0x72 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x740) = uVar11;
                                                *(undefined8 *)(unaff_x19 + 0x748) =
                                                     in_stack_00000008;
                                                thunk_FUN_03d1023c(unaff_x19 + 0x740,0);
                                                uVar11 = *(undefined8 *)puVar3;
                                                in_stack_00000008 = 0;
                                                thunk_FUN_03d1023c();
                                                puVar3 = PTR_DAT_092112c0;
                                                in_stack_00000008 =
                                                     CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                                if (0x73 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x750) = uVar11;
                                                  *(undefined8 *)(unaff_x19 + 0x758) =
                                                       in_stack_00000008;
                                                  thunk_FUN_03d1023c(unaff_x19 + 0x750,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  thunk_FUN_03d1023c();
                                                  puVar3 = PTR_DAT_09211280;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x6fb3);
                                                  if (0x74 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x760) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x768) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x760,0);
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar3 = PTR_DAT_09210830;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x4e8a);
                                                    if (0x75 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x770) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x778) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x770,0);
                                                      uVar11 = *(undefined8 *)puVar3;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar3 = PTR_DAT_09210f88;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x2d0);
                                                      if (0x76 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x780) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0x788) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x780,0);
                                                        uVar11 = *(undefined8 *)puVar3;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar1 = PTR_DAT_092113c0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x35e)
                                                        ;
                                                        if (0x77 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x790) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x798) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x790,0);
                                                          uVar11 = *(undefined8 *)puVar1;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar1 = PTR_DAT_09211120;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x36a);
                                                          if (0x78 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x7a0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x7a8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x7a0,0);
                                                            uVar11 = *(undefined8 *)puVar1;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar1 = PTR_DAT_09211218;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4fc4);
                                                            if (0x79 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x7b0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x7b8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x7b0,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar1;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar1 = PTR_DAT_09210d48;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            500);
                                                              if (0x7a < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x7c0) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x7c8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0x7c0
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar1;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar1 = PTR_DAT_09210d60;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x25);
                                                                if (0x7b < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 2000)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0x7d8)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     2000,0);
                                                                  uVar11 = *(undefined8 *)puVar1;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar1 = PTR_DAT_09210bb8;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,500);
                                                                  if (0x7c < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x7e0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x7e8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x7e0,0);
                                                                    uVar11 = *(undefined8 *)puVar1;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar1 = PTR_DAT_09210e58;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x4f35);
                                                                    if (0x7d < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x7f0) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x7f8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x7f0,0);
                                                                      uVar11 = *(undefined8 *)puVar1
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar1 = PTR_DAT_09211148;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x4f3c);
                                                  if (0x7e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x800) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x808) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x800,0);
                                                    uVar11 = *(undefined8 *)puVar1;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar1 = PTR_DAT_09210a38;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x4f36);
                                                    if (0x7f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x810) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x818) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x810,0);
                                                      uVar11 = *(undefined8 *)puVar1;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar1 = PTR_DAT_09211310;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x4f49);
                                                      if (0x80 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x820) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0x828) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x820,0);
                                                        uVar11 = *(undefined8 *)puVar1;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar1 = PTR_DAT_09210ca0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x4f3d
                                                                     );
                                                        if (0x81 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x830) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x838) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x830,0);
                                                          uVar11 = *(undefined8 *)puVar1;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar1 = PTR_DAT_09210da0;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4fc7);
                                                          if (0x82 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x840) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x848) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x840,0);
                                                            uVar11 = *(undefined8 *)puVar1;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar1 = PTR_DAT_09210938;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4fc8);
                                                            if (0x83 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x850) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x858) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x850,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar1;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar1 = PTR_DAT_09211178;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x5187);
                                                              if (0x84 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x860) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x868) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0x860
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar1;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar1 = PTR_DAT_09210e30;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4f38);
                                                                if (0x85 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x870)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0x878)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x870,0);
                                                                  uVar11 = *(undefined8 *)puVar1;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar1 = PTR_DAT_092108b8;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x25);
                                                                  if (0x86 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x880) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x888) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x880,0);
                                                                    uVar11 = *(undefined8 *)puVar1;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar1 = PTR_DAT_09210ff8;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x4f35);
                                                                    if (0x87 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x890) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x898) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x890,0);
                                                                      uVar11 = *(undefined8 *)puVar1
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar1 = PTR_DAT_09210b68;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x366);
                                                  if (0x88 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x8a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x8a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x8a0,0);
                                                    uVar11 = *(undefined8 *)puVar1;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar1 = PTR_DAT_09210be0;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x4f36);
                                                    if (0x89 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x8b0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x8b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x8b0,0);
                                                      uVar11 = *(undefined8 *)puVar1;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar1 = PTR_DAT_09211200;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x51a9);
                                                      if (0x8a < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x8c0) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0x8c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x8c0,0);
                                                        uVar11 = *(undefined8 *)puVar1;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar1 = PTR_DAT_09210bd0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x25);
                                                        if (0x8b < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x8d0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x8d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x8d0,0);
                                                          uVar11 = *(undefined8 *)puVar1;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar1 = PTR_DAT_09211070;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,0x25
                                                                       );
                                                          if (0x8c < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x8e0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x8e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x8e0,0);
                                                            uVar11 = *(undefined8 *)puVar1;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar1 = PTR_DAT_09211328;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x366);
                                                            if (0x8d < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x8f0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x8f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x8f0,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar1;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar1 = PTR_DAT_092108a8;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x5190);
                                                              if (0x8e < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x900) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x908) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0x900
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar1;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar1 = PTR_DAT_09211210;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x475);
                                                                if (0x8f < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x910)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0x918)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x910,0);
                                                                  uVar11 = *(undefined8 *)puVar1;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar1 = PTR_DAT_09210a90;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x476);
                                                                  if (0x90 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x920) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x928) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x920,0);
                                                                    uVar11 = *(undefined8 *)puVar1;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar1 = PTR_DAT_09211110;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x479);
                                                                    if (0x91 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x930) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x938) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x930,0);
                                                                      uVar11 = *(undefined8 *)puVar1
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar1 = PTR_DAT_092107c0;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x477);
                                                  if (0x92 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x940) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x948) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x940,0);
                                                    uVar11 = *(undefined8 *)puVar1;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar1 = PTR_DAT_09210f48;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x47b);
                                                    if (0x93 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x950) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x958) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x950,0);
                                                      uVar11 = *(undefined8 *)puVar1;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar1 = PTR_DAT_092111a0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x47a);
                                                      if (0x94 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x960) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0x968) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x960,0);
                                                        uVar11 = *(undefined8 *)puVar1;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar1 = PTR_DAT_09211458;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x47c)
                                                        ;
                                                        if (0x95 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x970) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x978) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x970,0);
                                                          uVar11 = *(undefined8 *)puVar1;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar1 = PTR_DAT_09210990;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x47d);
                                                          if (0x96 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x980) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x988) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x980,0);
                                                            uVar11 = *(undefined8 *)puVar1;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar1 = PTR_DAT_09211220;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x478);
                                                            if (0x97 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x990) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x998) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x990,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar1;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar1 = PTR_DAT_09210d20;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4f42);
                                                              if (0x98 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x9a0) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x9a8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0x9a0
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar1;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar1 = PTR_DAT_09210db0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x51bc);
                                                                if (0x99 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x9b0)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0x9b8)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x9b0,0);
                                                                  uVar11 = *(undefined8 *)puVar1;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar1 = PTR_DAT_092112d0;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x476);
                                                                  if (0x9a < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x9c0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x9c8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x9c0,0);
                                                                    uVar11 = *(undefined8 *)puVar1;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar1 = PTR_DAT_09210ed0;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x477);
                                                                    if (0x9b < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x9d0) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x9d8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x9d0,0);
                                                                      uVar11 = *(undefined8 *)puVar1
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar1 = PTR_DAT_09210ab8;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x474);
                                                  if (0x9c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x9e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x9e8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x9e0,0);
                                                    uVar11 = *(undefined8 *)puVar1;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar1 = PTR_DAT_09210c20;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6fb4);
                                                    if (0x9d < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x9f0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x9f8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x9f0,0);
                                                      uVar11 = *(undefined8 *)puVar1;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar1 = PTR_DAT_092109f0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6fb5);
                                                      if (0x9e < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xa00) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xa08) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xa00,0);
                                                        uVar11 = *(undefined8 *)puVar1;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar1 = PTR_DAT_092109a0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb5
                                                                     );
                                                        if (0x9f < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xa10) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xa18) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xa10,0);
                                                          uVar11 = *(undefined8 *)puVar1;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar1 = PTR_DAT_09210930;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0xcae0);
                                                          if (0xa0 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xa20) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xa28) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xa20,0);
                                                            uVar11 = *(undefined8 *)puVar1;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar1 = PTR_DAT_09211398;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0xcadc);
                                                            if (0xa1 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xa30) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xa38) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xa30,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar1;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar1 = PTR_DAT_09211000;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0xcaed);
                                                              if (0xa2 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xa40) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xa48) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xa40
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar1;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar1 = PTR_DAT_09210808;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0xcadc);
                                                                if (0xa3 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xa50)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xa58)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xa50,0);
                                                                  uVar11 = *(undefined8 *)puVar1;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar1 = PTR_DAT_09210800;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0xd698);
                                                                  if (0xa4 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xa60) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xa68) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xa60,0);
                                                                    uVar11 = *(undefined8 *)puVar1;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar1 = PTR_DAT_09211348;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x3a8);
                                                                    if (0xa5 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xa70) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xa78) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xa70,0);
                                                                      uVar11 = *(undefined8 *)puVar1
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar1 = PTR_DAT_09211208;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x3a8);
                                                  if (0xa6 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xa80) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xa88) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xa80,0);
                                                    uVar11 = *(undefined8 *)puVar1;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar1 = PTR_DAT_09210be8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x3a8);
                                                    if (0xa7 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xa90) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xa98) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xa90,0);
                                                      uVar11 = *(undefined8 *)puVar1;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar1 = PTR_DAT_09211030;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x3a8);
                                                      if (0xa8 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xaa0) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xaa8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xaa0,0);
                                                        uVar11 = *(undefined8 *)puVar1;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar1 = PTR_DAT_09210c58;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x3a8)
                                                        ;
                                                        if (0xa9 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xab0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xab8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xab0,0);
                                                          uVar11 = *(undefined8 *)puVar1;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar1 = PTR_DAT_09211320;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4e8a);
                                                          if (0xaa < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xac0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xac8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xac0,0);
                                                            uVar11 = *(undefined8 *)puVar1;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar1 = PTR_DAT_09211138;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb5);
                                                            if (0xab < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xad0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xad8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xad0,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar1;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar1 = PTR_DAT_09210e68;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x6fb5);
                                                              if (0xac < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xae0) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xae8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xae0
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar1;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar1 = PTR_DAT_092111d0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6fb6);
                                                                if (0xad < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xaf0)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xaf8)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xaf0,0);
                                                                  uVar11 = *(undefined8 *)puVar1;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar1 = PTR_DAT_092113f8;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0xcec8);
                                                                  if (0xae < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xb00) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xb08) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xb00,0);
                                                                    uVar11 = *(undefined8 *)puVar1;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar1 = PTR_DAT_09211388;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x5166);
                                                                    if (0xaf < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xb10) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xb18) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xb10,0);
                                                                      uVar11 = *(undefined8 *)puVar1
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar1 = PTR_DAT_09211048;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x35a);
                                                  if (0xb0 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xb20) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xb28) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xb20,0);
                                                    uVar11 = *(undefined8 *)puVar1;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar1 = PTR_DAT_09210768;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x51bc);
                                                    if (0xb1 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xb30) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xb38) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xb30,0);
                                                      uVar11 = *(undefined8 *)puVar1;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar1 = PTR_DAT_09210880;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x417);
                                                      if (0xb2 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xb40) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xb48) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xb40,0);
                                                        uVar11 = *(undefined8 *)puVar1;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar2 = PTR_DAT_09210f08;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x474)
                                                        ;
                                                        if (0xb3 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xb50) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xb58) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xb50,0);
                                                          uVar11 = *(undefined8 *)puVar2;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar5 = PTR_DAT_09210790;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x475);
                                                          if (0xb4 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xb60) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xb68) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xb60,0);
                                                            uVar11 = *(undefined8 *)puVar5;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar5 = PTR_DAT_09211080;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x476);
                                                            if (0xb5 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xb70) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xb78) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xb70,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar5;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar5 = PTR_DAT_09211128;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x477);
                                                              if (0xb6 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xb80) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xb88) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xb80
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar5;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar5 = PTR_DAT_09210a28;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x478);
                                                                if (0xb7 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xb90)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xb98)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xb90,0);
                                                                  uVar11 = *(undefined8 *)puVar5;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar5 = PTR_DAT_09210b28;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x479);
                                                                  if (0xb8 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xba0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xba8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xba0,0);
                                                                    uVar11 = *(undefined8 *)puVar5;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar5 = PTR_DAT_09210fc8;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x47a);
                                                                    if (0xb9 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xbb0) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 3000) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xbb0,0);
                                                                      uVar11 = *(undefined8 *)puVar5
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar5 = PTR_DAT_09210f40;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x47b);
                                                  if (0xba < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xbc0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xbc8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xbc0,0);
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar5 = PTR_DAT_09211408;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x47c);
                                                    if (0xbb < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xbd0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xbd8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xbd0,0);
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar5 = PTR_DAT_09210fc0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x47d);
                                                      if (0xbc < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xbe0) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xbe8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xbe0,0);
                                                        uVar11 = *(undefined8 *)puVar5;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210f10;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x25);
                                                        if (0xbd < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xbf0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xbf8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xbf0,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210a30;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x402);
                                                          if (0xbe < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xc00) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xc08) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xc00,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09211330;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4f31);
                                                            if (0xbf < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xc10) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xc18) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xc10,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210a78;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4f35);
                                                              if (0xc0 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xc20) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xc28) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xc20
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09211020;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4f36);
                                                                if (0xc1 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xc30)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xc38)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xc30,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_092109d8;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x4f38);
                                                                  if (0xc2 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xc40) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xc48) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xc40,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210b38;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x4f3c);
                                                                    if (0xc3 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xc50) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xc58) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xc50,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210928;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x4f3d);
                                                  if (0xc4 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xc60) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xc68) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xc60,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_092109a8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x4f42);
                                                    if (0xc5 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xc70) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xc78) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xc70,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09211308;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x4f49);
                                                      if (0xc6 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xc80) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xc88) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xc80,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210af0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x4e9f
                                                                     );
                                                        if (199 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xc90) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xc98) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xc90,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210fb8;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4fc4);
                                                          if (200 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xca0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xca8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xca0,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210e40;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4fc7);
                                                            if (0xc9 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xcb0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xcb8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xcb0,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210c40;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4fc8);
                                                              if (0xca < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xcc0) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xcc8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xcc0
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09211100;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x1b5);
                                                                if (0xcb < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xcd0)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xcd8)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xcd0,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210e18;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,500);
                                                                  if (0xcc < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xce0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xce8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xce0,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09211040;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x2e1);
                                                                    if (0xcd < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xcf0) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xcf8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xcf0,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_092112f0;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x307);
                                                  if (0xce < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xd00) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xd08) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xd00,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210b48;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6faf);
                                                    if (0xcf < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xd10) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xd18) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xd10,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09211230;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x352);
                                                      if (0xd0 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xd20) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xd28) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xd20,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_092110e0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x354)
                                                        ;
                                                        if (0xd1 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xd30) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xd38) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xd30,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210860;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x357);
                                                          if (0xd2 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xd40) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xd48) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xd40,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_092111b0;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x359);
                                                            if (0xd3 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xd50) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xd58) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xd50,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210e28;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x35c);
                                                              if (0xd4 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xd60) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xd68) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xd60
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_092113f0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x35d);
                                                                if (0xd5 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xd70)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xd78)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xd70,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09211370;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x35e);
                                                                  if (0xd6 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xd80) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xd88) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xd80,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210848;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x35f);
                                                                    if (0xd7 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xd90) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xd98) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xd90,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_092113d8;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x360);
                                                  if (0xd8 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xda0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xda8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xda0,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210f60;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x361);
                                                    if (0xd9 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xdb0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xdb8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xdb0,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210820;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x362);
                                                      if (0xda < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xdc0) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xdc8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xdc0,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210cf0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x365)
                                                        ;
                                                        if (0xdb < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xdd0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xdd8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xdd0,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_092108e0;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x366);
                                                          if (0xdc < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xde0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xde8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xde0,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210de8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x5187);
                                                            if (0xdd < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xdf0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xdf8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xdf0,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09211428;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x5190);
                                                              if (0xde < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xe00) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xe08) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xe00
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_092111f0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x51a9);
                                                                if (0xdf < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xe10)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xe18)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xe10,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_092110c8;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x4e89);
                                                                  if (0xe0 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xe20) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xe28) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xe20,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09211410;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x4b0);
                                                                    if (0xe1 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xe30) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xe38) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xe30,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09211470;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0xc42c);
                                                  if (0xe2 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xe40) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xe48) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xe40,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09211368;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0xcadc);
                                                    if (0xe3 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xe50) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xe58) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xe50,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210d68;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0xc431);
                                                      if (0xe4 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xe60) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xe68) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xe60,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210998;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0xc431
                                                                     );
                                                        if (0xe5 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xe70) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xe78) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xe70,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_092110b8;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0xc431);
                                                          if (0xe6 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xe80) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xe88) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xe80,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09211118;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0xcaed);
                                                            if (0xe7 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xe90) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xe98) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xe90,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09211448;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0xcaed);
                                                              if (0xe8 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xea0) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xea8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xea0
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210cc8;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6faf);
                                                                if (0xe9 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xeb0)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xeb8)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xeb0,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210f20;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x36a);
                                                                  if (0xea < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xec0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xec8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xec0,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09211460;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x6fbb);
                                                                    if (0xeb < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xed0) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xed8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xed0,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_092110f0;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x6fbd);
                                                  if (0xec < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xee0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xee8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xee0,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210f90;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6fb0);
                                                    if (0xed < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xef0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xef8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xef0,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09211168;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6fb1);
                                                      if (0xee < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0xf00) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xf08) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0xf00,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_092111c0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb2
                                                                     );
                                                        if (0xef < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xf10) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xf18) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xf10,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_092107d0;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6fb3);
                                                          if (0xf0 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xf20) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xf28) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xf20,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_092108f0;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb4);
                                                            if (0xf1 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xf30) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xf38) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xf30,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09211198;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x6fb5);
                                                              if (0xf2 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xf40) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xf48) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xf40
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210a50;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6fb6);
                                                                if (0xf3 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xf50)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xf58)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xf50,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210c00;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x6fb6);
                                                                  if (0xf4 < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xf60) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0xf68) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0xf60,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210b58;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x96c6);
                                                                    if (0xf5 < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xf70) = uVar11;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0xf78) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0xf70,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_092107e0;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x6fb7);
                                                  if (0xf6 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xf80) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0xf88) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0xf80,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210fa8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6faf);
                                                    if (0xf7 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0xf90) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0xf98) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0xf90,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_092109e8;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6fb0);
                                                      if (0xf8 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 4000) = uVar11;
                                                        *(undefined8 *)(unaff_x19 + 0xfa8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 4000,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_092112e8;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb1
                                                                     );
                                                        if (0xf9 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0xfb0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0xfb8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0xfb0,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09211188;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6fb2);
                                                          if (0xfa < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0xfc0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0xfc8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0xfc0,0);
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210db8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb5);
                                                            if (0xfb < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xfd0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0xfd8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0xfd0,0
                                                                                );
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210aa0;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x6fb4);
                                                              if (0xfc < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0xfe0) =
                                                                     uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0xfe8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 + 0xfe0
                                                                                   ,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09211010;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6fb6);
                                                                if (0xfd < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0xff0)
                                                                       = uVar11;
                                                                  *(undefined8 *)(unaff_x19 + 0xff8)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0xff0,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210c80;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x6fb3);
                                                                  if (0xfe < *(uint *)(unaff_x19 +
                                                                                      0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1000) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1008) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1000,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210950;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x6fb7);
                                                                    if (0xff < *(uint *)(unaff_x19 +
                                                                                        0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1010) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1018) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1010,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210e20;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x3b5);
                                                  if (0x100 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1020) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1028) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1020,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210ad8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x3a8);
                                                    if (0x101 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1030) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1038) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1030,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210e90;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x4e9f);
                                                      if (0x102 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1040) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1048) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1040,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210a08;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x4e9f
                                                                     );
                                                        if (0x103 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1050) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1058) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1050,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_092111f8;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6faf);
                                                          if (0x104 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1060) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1068) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1060,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210968;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb0);
                                                            if (0x105 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1070) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1078) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1070,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_092107a0;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4e9f);
                                                              if (0x106 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1080)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1088)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1080,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210e78;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6faf);
                                                                if (0x107 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1090) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1098) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1090,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210e80;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x6fbd);
                                                                  if (0x108 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x10a0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x10a8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x10a0,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210ac0;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x6faf);
                                                                    if (0x109 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x10b0) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x10b8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x10b0,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09211028;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x6fb0);
                                                  if (0x10a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x10c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x10c8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x10c0,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210d90;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6fb0);
                                                    if (0x10b < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x10d0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x10d8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x10d0,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210e10;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6fb1);
                                                      if (0x10c < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x10e0) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x10e8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x10e0,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210810;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb1
                                                                     );
                                                        if (0x10d < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x10f0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x10f8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x10f0,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210798;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6fb2);
                                                          if (0x10e < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1100) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1108) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1100,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210778;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb2);
                                                            if (0x10f < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1110) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1118) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1110,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09211298;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x6fb3);
                                                              if (0x110 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1120)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1128)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1120,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210f00;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6fb3);
                                                                if (0x111 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1130) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1138) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1130,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09211228;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x6fb4);
                                                                  if (0x112 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1140) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1148) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1140,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210908;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x6fb4);
                                                                    if (0x113 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1150) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1158) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1150,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210840;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x6fb5);
                                                  if (0x114 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1160) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1168) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1160,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210ae0;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6fb5);
                                                    if (0x115 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1170) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1178) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1170,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09211088;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6fb6);
                                                      if (0x116 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1180) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1188) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1180,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_092113b8;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb6
                                                                     );
                                                        if (0x117 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1190) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1198) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1190,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_092113e8;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6fb7);
                                                          if (0x118 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x11a0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x11a8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x11a0,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09211140;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb7);
                                                            if (0x119 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x11b0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x11b8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x11b0,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210b88;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x551);
                                                              if (0x11a < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x11c0)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x11c8)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x11c0,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210eb8;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x5182);
                                                                if (0x11b < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x11d0) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x11d8) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x11d0,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09211378;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x5182);
                                                                  if (0x11c < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x11e0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x11e8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x11e0,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210828;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x5182);
                                                                    if (0x11d < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x11f0) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x11f8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x11f0,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210918;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x556a);
                                                  if (0x11e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1200) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1208) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1200,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210b98;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x556a);
                                                    if (0x11f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1210) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1218) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1210,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210fe8;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x5182);
                                                      if (0x120 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1220) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1228) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1220,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210df0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x3b5)
                                                        ;
                                                        if (0x121 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1230) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1238) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1230,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210d18;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x3b5);
                                                          if (0x122 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1240) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1248) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1240,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210d40;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x3b5);
                                                            if (0x123 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1250) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1258) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1250,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210a00;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x3b5);
                                                              if (0x124 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1260)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1268)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1260,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09211108;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x3b5);
                                                                if (0x125 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1270) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1278) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1270,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210978;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x3b5);
                                                                  if (0x126 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1280) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1288) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1280,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_092107f0;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x3b5);
                                                                    if (0x127 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1290) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1298) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1290,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210780;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x3b5);
                                                  if (0x128 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x12a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x12a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x12a0,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09211360;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x3b5);
                                                    if (0x129 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x12b0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x12b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x12b0,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210d98;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6faf);
                                                      if (0x12a < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x12c0) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x12c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x12c0,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210920;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb0
                                                                     );
                                                        if (299 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x12d0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x12d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x12d0,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09211160;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6fb1);
                                                          if (300 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x12e0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x12e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x12e0,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_092111c8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x6fb2);
                                                            if (0x12d < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x12f0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x12f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x12f0,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09211420;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x6fb7);
                                                              if (0x12e < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1300)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1308)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1300,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210a80;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x6fbd);
                                                                if (0x12f < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1310) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1318) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1310,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210d00;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x6faf);
                                                                  if (0x130 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1320) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1328) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1320,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09211050;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x6fb0);
                                                                    if (0x131 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1330) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1338) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1330,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_092109c0;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x6fb1);
                                                  if (0x132 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1340) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1348) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1340,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210ab0;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x6fb2);
                                                    if (0x133 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1350) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1358) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1350,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210bf0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x6fb7);
                                                      if (0x134 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1360) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1368) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1360,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09211468;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fbd
                                                                     );
                                                        if (0x135 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1370) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1378) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1370,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210f70;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x6fb6);
                                                          if (0x136 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1380) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 5000) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1380,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09210850;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          10000);
                                                            if (0x137 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1390) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1398) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1390,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_092113b0;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x3a4);
                                                              if (0x138 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x13a0)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x13a8)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x13a0,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210788;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4e8c);
                                                                if (0x139 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x13b0) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x13b8) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x13b0,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210a88;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x4e8c);
                                                                  if (0x13a < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x13c0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x13c8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x13c0,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09211248;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x35a);
                                                                    if (0x13b < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x13d0) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x13d8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x13d0,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210ce8;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x4e8b);
                                                  if (0x13c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x13e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x13e8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x13e0,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_092109f8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                                    if (0x13d < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x13f0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x13f8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x13f0,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210cb0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                                      if (0x13e < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1400) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1408) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1400,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210c38;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x3a4)
                                                        ;
                                                        if (0x13f < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1410) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1418) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1410,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210958;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4e8b);
                                                          if (0x140 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1420) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1428) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1420,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_092111b8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x36a);
                                                            if (0x141 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1430) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1438) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1430,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210f30;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4b0);
                                                              if (0x142 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1440)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1448)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1440,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09210f58;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4b0);
                                                                if (0x143 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1450) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1458) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1450,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_092109c8;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,65000);
                                                                  if (0x144 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1460) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1468) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1460,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_092109e0;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0xfde9);
                                                                    if (0x145 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1470) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1478) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1470,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210dd0;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,65000);
                                                  if (0x146 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1480) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1488) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1480,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_09210c30;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                    if (0x147 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1490) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1498) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1490,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210bf8;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x4b1);
                                                      if (0x148 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x14a0) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x14a8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x14a0,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210ff0;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x4e9f
                                                                     );
                                                        if (0x149 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x14b0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x14b8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x14b0,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09210a40;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4e9f);
                                                          if (0x14a < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x14c0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x14c8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x14c0,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09211068;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4b0);
                                                            if (0x14b < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x14d0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x14d8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x14d0,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_092113d0;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4b1);
                                                              if (0x14c < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x14e0)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x14e8)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x14e0,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_09211268;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4b0);
                                                                if (0x14d < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x14f0) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x14f8) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x14f0,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09211278;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,12000);
                                                                  if (0x14e < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1500) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1508) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1500,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09211390;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x2ee1);
                                                                    if (0x14f < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1510) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1518) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1510,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210c88;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,12000);
                                                  if (0x150 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1520) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1528) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1520,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_092110c0;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,65000);
                                                    if (0x151 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1530) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1538) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1530,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09211180;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                      if (0x152 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1540) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1548) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1540,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar6 = PTR_DAT_09210f28;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x6fb6
                                                                     );
                                                        if (0x153 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1550) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1558) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1550,0);
                                                          uVar11 = *(undefined8 *)puVar6;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar6 = PTR_DAT_09211380;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4e2);
                                                          if (0x154 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1560) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1568) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1560,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar6;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar6 = PTR_DAT_09211058;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4e3);
                                                            if (0x155 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1570) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1578) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1570,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar6;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar6 = PTR_DAT_09210fe0;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4e4);
                                                              if (0x156 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1580)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1588)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1580,0);
                                                                uVar11 = *(undefined8 *)puVar6;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar6 = PTR_DAT_092113a0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4e5);
                                                                if (0x157 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1590) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1598) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1590,0);
                                                                  uVar11 = *(undefined8 *)puVar6;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar6 = PTR_DAT_09210b78;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x4e6);
                                                                  if (0x158 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x15a0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x15a8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x15a0,0);
                                                                    uVar11 = *(undefined8 *)puVar6;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar6 = PTR_DAT_09210d70;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x4e7);
                                                                    if (0x159 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x15b0) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x15b8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x15b0,0);
                                                                      uVar11 = *(undefined8 *)puVar6
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar6 = PTR_DAT_09210d30;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x4e8);
                                                  if (0x15a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15c8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x15c0,0);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar6 = PTR_DAT_092107d8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x4e9);
                                                    if (0x15b < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x15d0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x15d8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x15d0,0);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar6 = PTR_DAT_09210fd0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x4ea);
                                                      if (0x15c < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x15e0) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x15e8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x15e0,0);
                                                        uVar11 = *(undefined8 *)puVar6;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar4 = PTR_DAT_09211400;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x36a)
                                                        ;
                                                        if (0x15d < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x15f0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x15f8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x15f0,0);
                                                          uVar11 = *(undefined8 *)puVar4;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar4 = PTR_DAT_09210c98;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4e4);
                                                          if (0x15e < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1600) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1608) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1600,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar4;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar4 = PTR_DAT_09211270;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          20000);
                                                            if (0x15f < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1610) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1618) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1610,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar4;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar4 = PTR_DAT_092108d8;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4e22);
                                                              if (0x160 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1620)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1628)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1620,0);
                                                                uVar11 = *(undefined8 *)puVar4;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar4 = PTR_DAT_09210eb0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x4e2);
                                                                if (0x161 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1630) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1638) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1630,0);
                                                                  uVar11 = *(undefined8 *)puVar4;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar4 = PTR_DAT_09210a20;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x4e3);
                                                                  if (0x162 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1640) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1648) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1640,0);
                                                                    uVar11 = *(undefined8 *)puVar4;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar4 = PTR_DAT_09211038;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x4e21);
                                                                    if (0x163 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1650) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1658) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1650,0);
                                                                      uVar11 = *(undefined8 *)puVar4
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar4 = PTR_DAT_09210e98;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x4e23);
                                                  if (0x164 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1660) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1668) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1660,0);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar4 = PTR_DAT_09210960;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x4e24);
                                                    if (0x165 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1670) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1678) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1670,0);
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar4 = PTR_DAT_09210bd8;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x4e25);
                                                      if (0x166 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1680) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1688) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1680,0);
                                                        uVar11 = *(undefined8 *)puVar4;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar4 = PTR_DAT_092113a8;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x4f25
                                                                     );
                                                        if (0x167 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1690) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1698) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1690,0);
                                                          uVar11 = *(undefined8 *)puVar4;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar4 = PTR_DAT_09210cf8;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4f2d);
                                                          if (0x168 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x16a0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x16a8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x16a0,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar4;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar4 = PTR_DAT_092107f8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x51c8);
                                                            if (0x169 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x16b0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x16b8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x16b0,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar4;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar4 = PTR_DAT_092107c8;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x51d5);
                                                              if (0x16a < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x16c0)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x16c8)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x16c0,0);
                                                                uVar11 = *(undefined8 *)puVar4;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar4 = PTR_DAT_09210f18;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0xc433);
                                                                if (0x16b < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x16d0) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x16d8) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x16d0,0);
                                                                  uVar11 = *(undefined8 *)puVar4;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar4 = PTR_DAT_09210888;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x5161);
                                                                  if (0x16c < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x16e0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x16e8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x16e0,0);
                                                                    uVar11 = *(undefined8 *)puVar4;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar4 = PTR_DAT_092112a8;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0xcadc);
                                                                    if (0x16d < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x16f0) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x16f8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x16f0,0);
                                                                      uVar11 = *(undefined8 *)puVar4
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar4 = PTR_DAT_09211340;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0xcae0);
                                                  if (0x16e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1700) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1708) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1700,0);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar4 = PTR_DAT_09211290;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0xcadc);
                                                    if (0x16f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1710) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1718) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1710,0);
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar4 = PTR_DAT_09210770;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x7149);
                                                      if (0x170 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1720) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1728) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1720,0);
                                                        uVar11 = *(undefined8 *)puVar4;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar4 = PTR_DAT_09210aa8;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x4e89
                                                                     );
                                                        if (0x171 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1730) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1738) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1730,0);
                                                          uVar11 = *(undefined8 *)puVar4;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar4 = PTR_DAT_09211238;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x4e8a);
                                                          if (0x172 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1740) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1748) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1740,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar4;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar4 = PTR_DAT_092111e8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x4e8c);
                                                            if (0x173 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1750) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1758) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1750,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar4;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar4 = PTR_DAT_09210b18;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x4e8b);
                                                              if (0x174 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1760)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1768)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1760,0);
                                                                uVar11 = *(undefined8 *)puVar4;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar4 = PTR_DAT_09210818;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0xdeae);
                                                                if (0x175 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 6000)
                                                                       = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1778) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     6000,0);
                                                                  uVar11 = *(undefined8 *)puVar4;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar4 = PTR_DAT_09210d78;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0xdeab);
                                                                  if (0x176 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1780) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1788) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1780,0);
                                                                    uVar11 = *(undefined8 *)puVar4;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar4 = PTR_DAT_092107e8;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0xdeaa);
                                                                    if (0x177 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1790) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1798) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1790,0);
                                                                      uVar11 = *(undefined8 *)puVar4
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar4 = PTR_DAT_09210a18;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0xdeb2);
                                                  if (0x178 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x17a0,0);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar4 = PTR_DAT_09211318;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0xdeb0);
                                                    if (0x179 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x17b0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x17b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x17b0,0);
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar4 = PTR_DAT_09210f68;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0xdeb1);
                                                      if (0x17a < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x17c0) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x17c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x17c0,0);
                                                        uVar11 = *(undefined8 *)puVar4;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar4 = PTR_DAT_09211158;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0xdeaf
                                                                     );
                                                        if (0x17b < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x17d0) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x17d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x17d0,0);
                                                          uVar11 = *(undefined8 *)puVar4;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar4 = PTR_DAT_09210fb0;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0xdeb3);
                                                          if (0x17c < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x17e0) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x17e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x17e0,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar4;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar4 = PTR_DAT_092110d8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0xdeac);
                                                            if (0x17d < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x17f0) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x17f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x17f0,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar4;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar4 = PTR_DAT_09210c90;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0xdead);
                                                              if (0x17e < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1800)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1808)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1800,0);
                                                                uVar11 = *(undefined8 *)puVar4;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar4 = PTR_DAT_09210ce0;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x2714);
                                                                if (0x17f < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1810) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1818) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1810,0);
                                                                  uVar11 = *(undefined8 *)puVar4;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar4 = PTR_DAT_09210a98;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x272d);
                                                                  if (0x180 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1820) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1828) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1820,0);
                                                                    uVar11 = *(undefined8 *)puVar4;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar4 = PTR_DAT_092110d0;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x2718);
                                                                    if (0x181 < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1830) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x1838) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x1830,0);
                                                                      uVar11 = *(undefined8 *)puVar4
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar4 = PTR_DAT_09210878;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x2712);
                                                  if (0x182 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1840) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1848) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x1840,0);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar4 = PTR_DAT_092108e8;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x2762);
                                                    if (0x183 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1850) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x1858) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x1850,0);
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar4 = PTR_DAT_09210868;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x2717);
                                                      if (0x184 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1860) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1868) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1860,0);
                                                        uVar11 = *(undefined8 *)puVar4;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar4 = PTR_DAT_09210ef8;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x2716
                                                                     );
                                                        if (0x185 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1870) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1878) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1870,0);
                                                          uVar11 = *(undefined8 *)puVar4;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar4 = PTR_DAT_09210e08;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        0x2715);
                                                          if (0x186 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1880) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1888) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1880,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar4;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar4 = PTR_DAT_09210ec8;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0x275f);
                                                            if (0x187 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1890) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1898) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1890,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar4;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar4 = PTR_DAT_092110b0;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            0x2711);
                                                              if (0x188 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x18a0)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x18a8)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x18a0,0);
                                                                uVar11 = *(undefined8 *)puVar4;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar4 = PTR_DAT_09210ee8;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0x2713);
                                                                if (0x189 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x18b0) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x18b8) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x18b0,0);
                                                                  uVar11 = *(undefined8 *)puVar4;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar4 = PTR_DAT_09210a70;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x271a);
                                                                  if (0x18a < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x18c0) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x18c8) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x18c0,0);
                                                                    uVar11 = *(undefined8 *)puVar4;
                                                                    in_stack_00000008 = 0;
                                                                    thunk_FUN_03d1023c();
                                                                    puVar4 = PTR_DAT_092110a8;
                                                                    in_stack_00000008 =
                                                                         CONCAT62(in_stack_00000008.
                                                                                  _2_6_,0x2725);
                                                                    if (0x18b < *(uint *)(unaff_x19
                                                                                         + 0x18)) {
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x18d0) = uVar11
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (unaff_x19 + 0x18d8) =
                                                                           in_stack_00000008;
                                                                      thunk_FUN_03d1023c(unaff_x19 +
                                                                                         0x18d0,0);
                                                                      uVar11 = *(undefined8 *)puVar4
                                                                      ;
                                                                      in_stack_00000008 = 0;
                                                                      thunk_FUN_03d1023c();
                                                                      puVar4 = PTR_DAT_09210e48;
                                                                      in_stack_00000008 =
                                                                           CONCAT62(
                                                  in_stack_00000008._2_6_,0x2761);
                                                  if (0x18c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18e8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(unaff_x19 + 0x18e0,0);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c();
                                                    puVar4 = PTR_DAT_09211098;
                                                    in_stack_00000008 =
                                                         CONCAT62(in_stack_00000008._2_6_,0x2721);
                                                    if (0x18d < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x18f0) = uVar11;
                                                      *(undefined8 *)(unaff_x19 + 0x18f8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(unaff_x19 + 0x18f0,0);
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_03d1023c();
                                                      puVar4 = PTR_DAT_092109d0;
                                                      in_stack_00000008 =
                                                           CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                                      if (0x18e < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1900) = uVar11
                                                        ;
                                                        *(undefined8 *)(unaff_x19 + 0x1908) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(unaff_x19 + 0x1900,0);
                                                        uVar11 = *(undefined8 *)puVar4;
                                                        in_stack_00000008 = 0;
                                                        thunk_FUN_03d1023c();
                                                        puVar4 = PTR_DAT_09210df8;
                                                        in_stack_00000008 =
                                                             CONCAT62(in_stack_00000008._2_6_,0x3a4)
                                                        ;
                                                        if (399 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1910) =
                                                               uVar11;
                                                          *(undefined8 *)(unaff_x19 + 0x1918) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(unaff_x19 + 0x1910,0);
                                                          uVar11 = *(undefined8 *)puVar4;
                                                          in_stack_00000008 = 0;
                                                          thunk_FUN_03d1023c();
                                                          puVar4 = PTR_DAT_09211440;
                                                          in_stack_00000008 =
                                                               CONCAT62(in_stack_00000008._2_6_,
                                                                        65000);
                                                          if (400 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1920) =
                                                                 uVar11;
                                                            *(undefined8 *)(unaff_x19 + 0x1928) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(unaff_x19 + 0x1920,0)
                                                            ;
                                                            uVar11 = *(undefined8 *)puVar4;
                                                            in_stack_00000008 = 0;
                                                            thunk_FUN_03d1023c();
                                                            puVar4 = PTR_DAT_09210f38;
                                                            in_stack_00000008 =
                                                                 CONCAT62(in_stack_00000008._2_6_,
                                                                          0xfde9);
                                                            if (0x191 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1930) =
                                                                   uVar11;
                                                              *(undefined8 *)(unaff_x19 + 0x1938) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(unaff_x19 + 0x1930,
                                                                                 0);
                                                              uVar11 = *(undefined8 *)puVar4;
                                                              in_stack_00000008 = 0;
                                                              thunk_FUN_03d1023c();
                                                              puVar4 = PTR_DAT_09210ca8;
                                                              in_stack_00000008 =
                                                                   CONCAT62(in_stack_00000008._2_6_,
                                                                            65000);
                                                              if (0x192 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1940)
                                                                     = uVar11;
                                                                *(undefined8 *)(unaff_x19 + 0x1948)
                                                                     = in_stack_00000008;
                                                                thunk_FUN_03d1023c(unaff_x19 +
                                                                                   0x1940,0);
                                                                uVar11 = *(undefined8 *)puVar4;
                                                                in_stack_00000008 = 0;
                                                                thunk_FUN_03d1023c();
                                                                puVar4 = PTR_DAT_092112f8;
                                                                in_stack_00000008 =
                                                                     CONCAT62(in_stack_00000008.
                                                                              _2_6_,0xfde9);
                                                                if (0x193 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1950) = uVar11;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1958) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(unaff_x19 +
                                                                                     0x1950,0);
                                                                  uVar11 = *(undefined8 *)puVar4;
                                                                  in_stack_00000008 = 0;
                                                                  thunk_FUN_03d1023c();
                                                                  puVar7 = PTR_DAT_09210760;
                                                                  puVar4 = PTR_DAT_09209620;
                                                                  in_stack_00000008 =
                                                                       CONCAT62(in_stack_00000008.
                                                                                _2_6_,0x3b6);
                                                                  if (0x194 < *(uint *)(unaff_x19 +
                                                                                       0x18)) {
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1960) = uVar11;
                                                                    *(undefined8 *)
                                                                     (unaff_x19 + 0x1968) =
                                                                         in_stack_00000008;
                                                                    thunk_FUN_03d1023c(unaff_x19 +
                                                                                       0x1960,0);
                                                                    **(long **)(*(long *)puVar4 +
                                                                               0xb8) = unaff_x19;
                                                                    thunk_FUN_03d1023c(*(undefined8
                                                                                         *)(*(long *
                                                  )puVar4 + 0xb8));
                                                  lVar9 = FUN_03d2d394(*(undefined8 *)puVar7,0x62);
                                                  in_stack_00000008 = *(undefined8 *)puVar5;
                                                  thunk_FUN_03d1023c(&stack0x00000008);
                                                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_03d2d548();
                                                  }
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar9 + 0x20) = 0x4e40025;
                                                    thunk_FUN_03d1023c((undefined8 *)(lVar9 + 0x28),
                                                                       0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_09210c40;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x38) =
                                                           in_stack_00000008;
                                                      *(undefined8 *)(lVar9 + 0x30) = 0x4e401b5;
                                                      thunk_FUN_03d1023c((undefined8 *)
                                                                         (lVar9 + 0x38),0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09211100;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x48) =
                                                             in_stack_00000008;
                                                        *(undefined8 *)(lVar9 + 0x40) = 0x4e401f4;
                                                        thunk_FUN_03d1023c((undefined8 *)
                                                                           (lVar9 + 0x48),0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_092107b0;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (3 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x58) =
                                                               in_stack_00000008;
                                                          *(undefined8 *)(lVar9 + 0x50) =
                                                               0x20204e802c4;
                                                          thunk_FUN_03d1023c((undefined8 *)
                                                                             (lVar9 + 0x58),0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_09210e18;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (4 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x68) =
                                                                 in_stack_00000008;
                                                            *(undefined8 *)(lVar9 + 0x60) =
                                                                 0x4e502e1;
                                                            thunk_FUN_03d1023c((undefined8 *)
                                                                               (lVar9 + 0x68),0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_09211040;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            puVar5 = PTR_DAT_09210b10;
                                                            if (5 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x78) =
                                                                   in_stack_00000008;
                                                              *(undefined8 *)(lVar9 + 0x70) =
                                                                   0x4e90307;
                                                              thunk_FUN_03d1023c((undefined8 *)
                                                                                 (lVar9 + 0x78),0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)puVar5;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              puVar5 = PTR_DAT_09210d10;
                                                              if (6 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x88) =
                                                                     in_stack_00000008;
                                                                *(undefined8 *)(lVar9 + 0x80) =
                                                                     0x4e40352;
                                                                thunk_FUN_03d1023c((undefined8 *)
                                                                                   (lVar9 + 0x88),0)
                                                                ;
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)puVar5;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (7 < *(uint *)(lVar9 + 0x18)) {
                                                                  *(undefined8 *)(lVar9 + 0x98) =
                                                                       in_stack_00000008;
                                                                  *(undefined8 *)(lVar9 + 0x90) =
                                                                       0x20204e20354;
                                                                  thunk_FUN_03d1023c((undefined8 *)
                                                                                     (lVar9 + 0x98),
                                                                                     0);
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092110e0;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  puVar5 = PTR_DAT_09210ad0;
                                                  if (8 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xa8) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar9 + 0xa0) = 0x4e40357;
                                                    thunk_FUN_03d1023c((undefined8 *)(lVar9 + 0xa8),
                                                                       0);
                                                    in_stack_00000008 = *(undefined8 *)puVar5;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (9 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xb8) =
                                                           in_stack_00000008;
                                                      *(undefined8 *)(lVar9 + 0xb0) = 0x4e60359;
                                                      thunk_FUN_03d1023c((undefined8 *)
                                                                         (lVar9 + 0xb8),0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09211388;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (10 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 200) =
                                                             in_stack_00000008;
                                                        *(undefined8 *)(lVar9 + 0xc0) = 0x4e4035a;
                                                        thunk_FUN_03d1023c((undefined8 *)
                                                                           (lVar9 + 200),0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_092111b0;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        puVar5 = PTR_DAT_09210d28;
                                                        if (0xb < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0xd8) =
                                                               in_stack_00000008;
                                                          *(undefined8 *)(lVar9 + 0xd0) = 0x4e4035c;
                                                          thunk_FUN_03d1023c((undefined8 *)
                                                                             (lVar9 + 0xd8),0);
                                                          in_stack_00000008 = *(undefined8 *)puVar5;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0xc < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0xe8) =
                                                                 in_stack_00000008;
                                                            *(undefined8 *)(lVar9 + 0xe0) =
                                                                 0x4e4035d;
                                                            thunk_FUN_03d1023c((undefined8 *)
                                                                               (lVar9 + 0xe8),0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar3;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0xd < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0xf8) =
                                                                   in_stack_00000008;
                                                              *(undefined8 *)(lVar9 + 0xf0) =
                                                                   0x20204e7035e;
                                                              thunk_FUN_03d1023c((undefined8 *)
                                                                                 (lVar9 + 0xf8),0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09211370;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0xe < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x100) =
                                                                     0x4e4035f;
                                                                *(undefined8 *)(lVar9 + 0x108) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x108,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09210848
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0xf < *(uint *)(lVar9 + 0x18)) {
                                                                  *(undefined **)(lVar9 + 0x110) =
                                                                       &UNK_04e80360;
                                                                  *(undefined8 *)(lVar9 + 0x118) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x118,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092113d8;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x120) = 0x4e40361;
                                                    *(undefined8 *)(lVar9 + 0x128) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x128,0);
                                                    in_stack_00000008 = *unaff_x27;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    puVar3 = PTR_DAT_092108c8;
                                                    if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x130) = 0x20204e30362
                                                      ;
                                                      *(undefined8 *)(lVar9 + 0x138) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x138,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar3;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x140) = 0x4e50365;
                                                        *(undefined8 *)(lVar9 + 0x148) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x148,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09210cf0;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x150) = 0x4e20366
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x158) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x158,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar6;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x160) =
                                                                 0x303036a036a;
                                                            *(undefined8 *)(lVar9 + 0x168) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x168,0);
                                                            in_stack_00000008 = *unaff_x28;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            puVar3 = PTR_DAT_09211338;
                                                            if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x170) =
                                                                   0x4e5036b;
                                                              *(undefined8 *)(lVar9 + 0x178) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x178,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)puVar3;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              puVar3 = PTR_DAT_09210d58;
                                                              if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x180) =
                                                                     0x30303a403a4;
                                                                *(undefined8 *)(lVar9 + 0x188) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x188,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)puVar3;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x17 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 400) =
                                                                       0x30303a803a8;
                                                                  *(undefined8 *)(lVar9 + 0x198) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x198,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09210978;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  puVar3 = PTR_DAT_09210c10;
                                                  if (0x18 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x1a0) = 0x30303b503b5;
                                                    *(undefined8 *)(lVar9 + 0x1a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x1a8,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar3;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x19 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x1b0) = 0x30303b603b6
                                                      ;
                                                      *(undefined8 *)(lVar9 + 0x1b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x1b8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09210f10;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x1a < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x1c0) = 0x4e60402;
                                                        *(undefined8 *)(lVar9 + 0x1c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x1c8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09210768;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x1b < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x1d0) = 0x4e40417
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x1d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x1d8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar1;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x1c < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x1e0) =
                                                                 0x4e40474;
                                                            *(undefined8 *)(lVar9 + 0x1e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x1e8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar2;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x1d < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x1f0) =
                                                                   0x4e40475;
                                                              *(undefined8 *)(lVar9 + 0x1f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x1f8,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210790;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              puVar3 = PTR_DAT_09210ff0;
                                                              if (0x1e < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x200) =
                                                                     0x4e40476;
                                                                *(undefined8 *)(lVar9 + 0x208) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x208,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09211080
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                puVar1 = PTR_DAT_09211268;
                                                                if (0x1f < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x210) =
                                                                       0x4e40477;
                                                                  *(undefined8 *)(lVar9 + 0x218) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x218,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09211128;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x20 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x220) = 0x4e40478;
                                                    *(undefined8 *)(lVar9 + 0x228) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x228,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_09210a28;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x21 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x230) = 0x4e40479;
                                                      *(undefined8 *)(lVar9 + 0x238) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x238,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09210b28;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x22 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x240) = 0x4e4047a;
                                                        *(undefined8 *)(lVar9 + 0x248) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x248,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09210fc8;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x23 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x250) = 0x4e4047b
                                                          ;
                                                          *(undefined8 *)(lVar9 + 600) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 600,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_09210f40;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x24 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x260) =
                                                                 0x4e4047c;
                                                            *(undefined8 *)(lVar9 + 0x268) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x268,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_09211408;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x25 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x270) =
                                                                   0x4e4047d;
                                                              *(undefined8 *)(lVar9 + 0x278) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x278,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210a40;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              puVar2 = PTR_DAT_09211190;
                                                              if (0x26 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x280) =
                                                                     0x20004b004b0;
                                                                *(undefined8 *)(lVar9 + 0x288) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x288,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)puVar2;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                puVar2 = PTR_DAT_09210e60;
                                                                if (0x27 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x290) =
                                                                       0x4b004b1;
                                                                  *(undefined8 *)(lVar9 + 0x298) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x298,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)puVar2;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  puVar2 = PTR_DAT_09211480;
                                                  if (0x28 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x2a0) = 0x30304e204e2;
                                                    *(undefined8 *)(lVar9 + 0x2a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x2a8,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar2;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    puVar2 = PTR_DAT_09210a60;
                                                    if (0x29 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x2b0) = 0x30304e304e3
                                                      ;
                                                      *(undefined8 *)(lVar9 + 0x2b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x2b8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar2;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      puVar2 = PTR_DAT_092108d0;
                                                      if (0x2a < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x2c0) =
                                                             0x30304e404e4;
                                                        *(undefined8 *)(lVar9 + 0x2c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x2c8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar2;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        puVar2 = PTR_DAT_092111e0;
                                                        if (0x2b < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x2d0) =
                                                               0x30304e504e5;
                                                          *(undefined8 *)(lVar9 + 0x2d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x2d8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar2;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x2c < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x2e0) =
                                                                 0x30304e604e6;
                                                            *(undefined8 *)(lVar9 + 0x2e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x2e8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_09210b78;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x2d < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x2f0) =
                                                                   0x30304e704e7;
                                                              *(undefined8 *)(lVar9 + 0x2f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x2f8,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210d70;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x2e < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x300) =
                                                                     0x30304e804e8;
                                                                *(undefined8 *)(lVar9 + 0x308) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x308,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09210d30
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x2f < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x310) =
                                                                       0x30304e904e9;
                                                                  *(undefined8 *)(lVar9 + 0x318) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x318,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092107d8;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x30 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 800) = 0x30304ea04ea;
                                                    *(undefined8 *)(lVar9 + 0x328) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x328,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_09210f70;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x31 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x330) = 0x4e42710;
                                                      *(undefined8 *)(lVar9 + 0x338) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x338,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09210e08;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x32 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x340) = 0x4e4275f;
                                                        *(undefined8 *)(lVar9 + 0x348) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x348,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar1;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        puVar5 = PTR_DAT_09211330;
                                                        puVar2 = PTR_DAT_09210ee0;
                                                        puVar1 = PTR_DAT_09210930;
                                                        if (0x33 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x350) = 0x4b02ee0
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x358) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x358,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar2;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x34 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x360) =
                                                                 0x4b02ee1;
                                                            *(undefined8 *)(lVar9 + 0x368) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x368,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar3;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x35 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x370) =
                                                                   0x10104e44e9f;
                                                              *(undefined8 *)(lVar9 + 0x378) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x378,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210a30;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x36 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x380) =
                                                                     0x4e44f31;
                                                                *(undefined8 *)(lVar9 + 0x388) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x388,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)puVar5;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x37 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x390) =
                                                                       0x4e44f35;
                                                                  *(undefined8 *)(lVar9 + 0x398) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x398,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09210a78;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  puVar6 = PTR_DAT_09211020;
                                                  puVar5 = PTR_DAT_09210b38;
                                                  puVar2 = PTR_DAT_092109d8;
                                                  puVar3 = PTR_DAT_09210928;
                                                  if (0x38 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x3a0) = 0x4e44f36;
                                                    *(undefined8 *)(lVar9 + 0x3a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x3a8,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar6;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x39 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x3b0) = 0x4e44f38;
                                                      *(undefined8 *)(lVar9 + 0x3b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x3b8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar2;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x3a < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x3c0) = 0x4e44f3c;
                                                        *(undefined8 *)(lVar9 + 0x3c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x3c8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar5;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x3b < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x3d0) = 0x4e44f3d
                                                          ;
                                                          *(undefined8 *)(lVar9 + 0x3d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x3d8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar3;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x3c < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x3e0) =
                                                                 0x3a44f42;
                                                            *(undefined8 *)(lVar9 + 1000) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 1000,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_092109a8;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            puVar5 = PTR_DAT_09211410;
                                                            puVar2 = PTR_DAT_09210af0;
                                                            puVar3 = PTR_DAT_092108e0;
                                                            if (0x3d < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x3f0) =
                                                                   0x4e44f49;
                                                              *(undefined8 *)(lVar9 + 0x3f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x3f8,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)puVar2;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x3e < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x400) =
                                                                     0x4e84fc4;
                                                                *(undefined8 *)(lVar9 + 0x408) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x408,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09210e40
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x3f < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined **)(lVar9 + 0x410) =
                                                                       &UNK_04e74fc8;
                                                                  *(undefined8 *)(lVar9 + 0x418) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x418,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_09211378;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x40 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x420) = 0x30304e35182;
                                                    *(undefined8 *)(lVar9 + 0x428) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x428,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar3;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x41 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x430) = 0x4e45187;
                                                      *(undefined8 *)(lVar9 + 0x438) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x438,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09210e38;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x42 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x440) = 0x4e35221;
                                                        *(undefined8 *)(lVar9 + 0x448) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x448,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09210918;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x43 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x450) =
                                                               0x30304e3556a;
                                                          *(undefined8 *)(lVar9 + 0x458) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x458,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_09211448;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x44 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x460) =
                                                                 0x30304e46faf;
                                                            *(undefined8 *)(lVar9 + 0x468) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x468,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_092110f0;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x45 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x470) =
                                                                   0x30304e26fb0;
                                                              *(undefined8 *)(lVar9 + 0x478) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x478,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210f90;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x46 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x480) =
                                                                     0x10104e66fb1;
                                                                *(undefined8 *)(lVar9 + 0x488) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x488,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09211168
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x47 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x490) =
                                                                       0x30304e96fb2;
                                                                  *(undefined8 *)(lVar9 + 0x498) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x498,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092111c0;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x48 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x4a0) = 0x30304e36fb3;
                                                    *(undefined8 *)(lVar9 + 0x4a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x4a8,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_092107d0;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x49 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x4b0) = 0x30304e86fb4
                                                      ;
                                                      *(undefined8 *)(lVar9 + 0x4b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x4b8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_092108f0;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x4a < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x4c0) =
                                                             0x30304e56fb5;
                                                        *(undefined8 *)(lVar9 + 0x4c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x4c8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09211198;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x4b < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x4d0) =
                                                               0x20204e76fb6;
                                                          *(undefined8 *)(lVar9 + 0x4d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x4d8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_09210b58;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x4c < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x4e0) =
                                                                 0x30304e66fb7;
                                                            *(undefined8 *)(lVar9 + 0x4e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x4e8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_09211460;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x4d < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x4f0) =
                                                                   0x30104e46fbd;
                                                              *(undefined8 *)(lVar9 + 0x4f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x4f8,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210c00;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x4e < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x500) =
                                                                     0x30304e796c6;
                                                                *(undefined8 *)(lVar9 + 0x508) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x508,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)puVar5;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                puVar3 = PTR_DAT_09211478;
                                                                if (0x4f < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x510) =
                                                                       0x10103a4c42c;
                                                                  *(undefined8 *)(lVar9 + 0x518) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x518,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)puVar3;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x50 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x520) = 0x30103a4c42d;
                                                    *(undefined8 *)(lVar9 + 0x528) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x528,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar5;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x51 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x530) = 0x3a4c42e;
                                                      *(undefined8 *)(lVar9 + 0x538) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x538,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x52 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x540) =
                                                             0x30303a4cadc;
                                                        *(undefined8 *)(lVar9 + 0x548) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x548,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09211398;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        puVar3 = PTR_DAT_09210808;
                                                        if (0x53 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x550) =
                                                               0x10103b5caed;
                                                          *(undefined8 *)(lVar9 + 0x558) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x558,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar3;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x54 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x560) =
                                                                 0x30303a8d698;
                                                            *(undefined8 *)(lVar9 + 0x568) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x568,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_09210d78;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            puVar3 = PTR_DAT_09210b18;
                                                            if (0x55 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x570) =
                                                                   0xdeaadeaa;
                                                              *(undefined8 *)(lVar9 + 0x578) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x578,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09210818;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x56 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x580) =
                                                                     0xdeabdeab;
                                                                *(undefined8 *)(lVar9 + 0x588) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x588,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09210fb0
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x57 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x590) =
                                                                       0xdeacdeac;
                                                                  *(undefined8 *)(lVar9 + 0x598) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x598,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092110d8;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x58 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x5a0) = 0xdeaddead;
                                                    *(undefined8 *)(lVar9 + 0x5a8) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x5a8,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar3;
                                                    thunk_FUN_03d1023c(&stack0x00000008);
                                                    if (0x59 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x5b0) = 0xdeaedeae;
                                                      *(undefined8 *)(lVar9 + 0x5b8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x5b8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_09210f68;
                                                      thunk_FUN_03d1023c(&stack0x00000008);
                                                      if (0x5a < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x5c0) = 0xdeafdeaf;
                                                        *(undefined8 *)(lVar9 + 0x5c8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_03d1023c(lVar9 + 0x5c8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_09210a18;
                                                        thunk_FUN_03d1023c(&stack0x00000008);
                                                        if (0x5b < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x5d0) =
                                                               0xdeb0deb0;
                                                          *(undefined8 *)(lVar9 + 0x5d8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_03d1023c(lVar9 + 0x5d8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_09211318;
                                                          thunk_FUN_03d1023c(&stack0x00000008);
                                                          if (0x5c < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x5e0) =
                                                                 0xdeb1deb1;
                                                            *(undefined8 *)(lVar9 + 0x5e8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_03d1023c(lVar9 + 0x5e8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_092107e8;
                                                            thunk_FUN_03d1023c(&stack0x00000008);
                                                            if (0x5d < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x5f0) =
                                                                   0xdeb2deb2;
                                                              *(undefined8 *)(lVar9 + 0x5f8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_03d1023c(lVar9 + 0x5f8,0);
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_09211158;
                                                              thunk_FUN_03d1023c(&stack0x00000008);
                                                              if (0x5e < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x600) =
                                                                     0xdeb3deb3;
                                                                *(undefined8 *)(lVar9 + 0x608) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_03d1023c(lVar9 + 0x608,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_09210c88
                                                                ;
                                                                thunk_FUN_03d1023c(&stack0x00000008)
                                                                ;
                                                                if (0x5f < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x610) =
                                                                       0x10104b0fde8;
                                                                  *(undefined8 *)(lVar9 + 0x618) =
                                                                       in_stack_00000008;
                                                                  thunk_FUN_03d1023c(lVar9 + 0x618,0
                                                                                    );
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_092110c0;
                                                                  thunk_FUN_03d1023c(&
                                                  stack0x00000008);
                                                  if (0x60 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x620) = 0x30304b0fde9;
                                                    *(undefined8 *)(lVar9 + 0x628) =
                                                         in_stack_00000008;
                                                    thunk_FUN_03d1023c(lVar9 + 0x628,0);
                                                    in_stack_00000008 = 0;
                                                    thunk_FUN_03d1023c(&stack0x00000008,0);
                                                    puVar3 = PTR_DAT_091a60f8;
                                                    if (0x61 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x630) = 0;
                                                      *(undefined8 *)(lVar9 + 0x638) =
                                                           in_stack_00000008;
                                                      thunk_FUN_03d1023c(lVar9 + 0x638,0);
                                                      plVar10 = (long *)(*(long *)(*(long *)puVar4 +
                                                                                  0xb8) + 8);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_03d1023c(plVar10,lVar9);
                                                      iVar8 = FUN_0712e544();
                                                      *(int *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                              0x10) = iVar8 + -1;
                                                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                                        thunk_FUN_03db619c();
                                                      }
                                                      if (DAT_09837923 == '\0') {
                                                        FUN_03d2d2b0(PTR_DAT_091a60f8);
                                                        DAT_09837923 = '\x01';
                                                      }
                                                      puVar6 = PTR_StringLiteral_52664_09210758;
                                                      puVar5 = PTR_DAT_09210750;
                                                      puVar2 = PTR_DAT_091a60d8;
                                                      puVar1 = PTR_DAT_091a60c8;
                                                      lVar9 = *(long *)puVar3;
                                                      if (*(int *)(lVar9 + 0xe0) == 0) {
                                                        thunk_FUN_03db619c();
                                                        lVar9 = *(long *)puVar3;
                                                      }
                                                      uVar12 = *(undefined8 *)
                                                                (*(long *)(lVar9 + 0xb8) + 0x18);
                                                      uVar11 = thunk_FUN_03d2ef40(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_06b62914(uVar11,uVar12,
                                                                   *(undefined8 *)puVar1);
                                                      puVar13 = (undefined8 *)
                                                                (*(long *)(*(long *)puVar4 + 0xb8) +
                                                                0x18);
                                                      *puVar13 = uVar11;
                                                      thunk_FUN_03d1023c(puVar13,uVar11);
                                                      uVar11 = thunk_FUN_03d2ef40(*(undefined8 *)
                                                                                   puVar6);
                                                      FUN_06a61a5c(uVar11,*(undefined8 *)puVar5);
                                                      puVar13 = (undefined8 *)
                                                                (*(long *)(*(long *)puVar4 + 0xb8) +
                                                                0x20);
                                                      *puVar13 = uVar11;
                                                      thunk_FUN_03d1023c(puVar13,uVar11);
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


