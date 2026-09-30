/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 01f3ef1c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool in_ZR;
  bool in_CY;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x19 + 0x210) = in_stack_00000000;
    *(undefined8 *)(unaff_x19 + 0x218) = in_stack_00000008;
    thunk_FUN_01286abc(unaff_x19 + 0x218,0);
    in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf980;
    thunk_FUN_01286abc();
    if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x220) = 0x4e40478;
      *(undefined8 *)(unaff_x19 + 0x228) = in_stack_00000008;
      thunk_FUN_01286abc(unaff_x19 + 0x228,0);
      in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf280;
      thunk_FUN_01286abc(&stack0x00000008);
      if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x230) = 0x4e40479;
        *(undefined8 *)(unaff_x19 + 0x238) = in_stack_00000008;
        thunk_FUN_01286abc(unaff_x19 + 0x238,0);
        in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf380;
        thunk_FUN_01286abc(&stack0x00000008);
        if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x240) = 0x4e4047a;
          *(undefined8 *)(unaff_x19 + 0x248) = in_stack_00000008;
          thunk_FUN_01286abc(unaff_x19 + 0x248,0);
          in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf820;
          thunk_FUN_01286abc(&stack0x00000008);
          if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x250) = 0x4e4047b;
            *(undefined8 *)(unaff_x19 + 600) = in_stack_00000008;
            thunk_FUN_01286abc(unaff_x19 + 600,0);
            in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf798;
            thunk_FUN_01286abc(&stack0x00000008);
            if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x260) = 0x4e4047c;
              *(undefined8 *)(unaff_x19 + 0x268) = in_stack_00000008;
              thunk_FUN_01286abc(unaff_x19 + 0x268,0);
              in_stack_00000008 = *(undefined8 *)PTR_DAT_027bfc60;
              thunk_FUN_01286abc(&stack0x00000008);
              if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x270) = 0x4e4047d;
                *(undefined8 *)(unaff_x19 + 0x278) = in_stack_00000008;
                thunk_FUN_01286abc(unaff_x19 + 0x278,0);
                in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf298;
                thunk_FUN_01286abc(&stack0x00000008);
                puVar1 = PTR_DAT_027bf9e8;
                if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x280) = 0x20004b004b0;
                  *(undefined8 *)(unaff_x19 + 0x288) = in_stack_00000008;
                  thunk_FUN_01286abc(unaff_x19 + 0x288,0);
                  in_stack_00000008 = *(undefined8 *)puVar1;
                  thunk_FUN_01286abc(&stack0x00000008);
                  puVar1 = PTR_DAT_027bf6b8;
                  if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x290) = 0x4b004b1;
                    *(undefined8 *)(unaff_x19 + 0x298) = in_stack_00000008;
                    thunk_FUN_01286abc(unaff_x19 + 0x298,0);
                    in_stack_00000008 = *(undefined8 *)puVar1;
                    thunk_FUN_01286abc(&stack0x00000008);
                    puVar1 = PTR_DAT_027bfcd8;
                    if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x2a0) = 0x30304e204e2;
                      *(undefined8 *)(unaff_x19 + 0x2a8) = in_stack_00000008;
                      thunk_FUN_01286abc(unaff_x19 + 0x2a8,0);
                      in_stack_00000008 = *(undefined8 *)puVar1;
                      thunk_FUN_01286abc(&stack0x00000008);
                      puVar1 = PTR_DAT_027bf2b8;
                      if (0x29 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x2b0) = 0x30304e304e3;
                        *(undefined8 *)(unaff_x19 + 0x2b8) = in_stack_00000008;
                        thunk_FUN_01286abc(unaff_x19 + 0x2b8,0);
                        in_stack_00000008 = *(undefined8 *)puVar1;
                        thunk_FUN_01286abc(&stack0x00000008);
                        puVar1 = PTR_DAT_027bf128;
                        if (0x2a < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x2c0) = 0x30304e404e4;
                          *(undefined8 *)(unaff_x19 + 0x2c8) = in_stack_00000008;
                          thunk_FUN_01286abc(unaff_x19 + 0x2c8,0);
                          in_stack_00000008 = *(undefined8 *)puVar1;
                          thunk_FUN_01286abc(&stack0x00000008);
                          puVar1 = PTR_DAT_027bfa38;
                          if (0x2b < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x2d0) = 0x30304e504e5;
                            *(undefined8 *)(unaff_x19 + 0x2d8) = in_stack_00000008;
                            thunk_FUN_01286abc(unaff_x19 + 0x2d8,0);
                            in_stack_00000008 = *(undefined8 *)puVar1;
                            thunk_FUN_01286abc(&stack0x00000008);
                            if (0x2c < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x2e0) = 0x30304e604e6;
                              *(undefined8 *)(unaff_x19 + 0x2e8) = in_stack_00000008;
                              thunk_FUN_01286abc(unaff_x19 + 0x2e8,0);
                              in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf3d0;
                              thunk_FUN_01286abc(&stack0x00000008);
                              if (0x2d < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x2f0) = 0x30304e704e7;
                                *(undefined8 *)(unaff_x19 + 0x2f8) = in_stack_00000008;
                                thunk_FUN_01286abc(unaff_x19 + 0x2f8,0);
                                in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf5c8;
                                thunk_FUN_01286abc(&stack0x00000008);
                                if (0x2e < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x300) = 0x30304e804e8;
                                  *(undefined8 *)(unaff_x19 + 0x308) = in_stack_00000008;
                                  thunk_FUN_01286abc(unaff_x19 + 0x308,0);
                                  in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf588;
                                  thunk_FUN_01286abc(&stack0x00000008);
                                  if (0x2f < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x310) = 0x30304e904e9;
                                    *(undefined8 *)(unaff_x19 + 0x318) = in_stack_00000008;
                                    thunk_FUN_01286abc(unaff_x19 + 0x318,0);
                                    in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf030;
                                    thunk_FUN_01286abc(&stack0x00000008);
                                    if (0x30 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 800) = 0x30304ea04ea;
                                      *(undefined8 *)(unaff_x19 + 0x328) = in_stack_00000008;
                                      thunk_FUN_01286abc(unaff_x19 + 0x328,0);
                                      in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf7c8;
                                      thunk_FUN_01286abc(&stack0x00000008);
                                      if (0x31 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x330) = 0x4e42710;
                                        *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000008;
                                        thunk_FUN_01286abc(unaff_x19 + 0x338,0);
                                        in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf660;
                                        thunk_FUN_01286abc(&stack0x00000008);
                                        if (0x32 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x340) = 0x4e4275f;
                                          *(undefined8 *)(unaff_x19 + 0x348) = in_stack_00000008;
                                          thunk_FUN_01286abc(unaff_x19 + 0x348,0);
                                          in_stack_00000008 = *unaff_x24;
                                          thunk_FUN_01286abc(&stack0x00000008);
                                          puVar3 = PTR_DAT_027bfb88;
                                          puVar2 = PTR_DAT_027bf738;
                                          puVar1 = PTR_DAT_027bf188;
                                          if (0x33 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x350) = 0x4b02ee0;
                                            *(undefined8 *)(unaff_x19 + 0x358) = in_stack_00000008;
                                            thunk_FUN_01286abc(unaff_x19 + 0x358,0);
                                            in_stack_00000008 = *(undefined8 *)puVar2;
                                            thunk_FUN_01286abc(&stack0x00000008);
                                            if (0x34 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x360) = 0x4b02ee1;
                                              *(undefined8 *)(unaff_x19 + 0x368) = in_stack_00000008
                                              ;
                                              thunk_FUN_01286abc(unaff_x19 + 0x368,0);
                                              in_stack_00000008 = *unaff_x22;
                                              thunk_FUN_01286abc(&stack0x00000008);
                                              if (0x35 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x370) = 0x10104e44e9f;
                                                *(undefined8 *)(unaff_x19 + 0x378) =
                                                     in_stack_00000008;
                                                thunk_FUN_01286abc(unaff_x19 + 0x378,0);
                                                in_stack_00000008 = *(undefined8 *)PTR_DAT_027bf288;
                                                thunk_FUN_01286abc(&stack0x00000008);
                                                if (0x36 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x380) = 0x4e44f31;
                                                  *(undefined8 *)(unaff_x19 + 0x388) =
                                                       in_stack_00000008;
                                                  thunk_FUN_01286abc(unaff_x19 + 0x388,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar3;
                                                  thunk_FUN_01286abc(&stack0x00000008);
                                                  if (0x37 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x390) = 0x4e44f35;
                                                    *(undefined8 *)(unaff_x19 + 0x398) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x398,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_027bf2d0;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    puVar5 = PTR_DAT_027bf878;
                                                    puVar4 = PTR_DAT_027bf390;
                                                    puVar3 = PTR_DAT_027bf230;
                                                    puVar2 = PTR_DAT_027bf180;
                                                    if (0x38 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x3a0) = 0x4e44f36
                                                      ;
                                                      *(undefined8 *)(unaff_x19 + 0x3a8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x3a8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar5;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x39 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x3b0) =
                                                             0x4e44f38;
                                                        *(undefined8 *)(unaff_x19 + 0x3b8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x3b8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar3;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x3a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x3c0) =
                                                               0x4e44f3c;
                                                          *(undefined8 *)(unaff_x19 + 0x3c8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x3c8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar4;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x3b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x3d0) =
                                                                 0x4e44f3d;
                                                            *(undefined8 *)(unaff_x19 + 0x3d8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x3d8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar2;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x3c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x3e0) =
                                                                   0x3a44f42;
                                                              *(undefined8 *)(unaff_x19 + 1000) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 1000,0)
                                                              ;
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_027bf200;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              puVar4 = PTR_DAT_027bfc68;
                                                              puVar3 = PTR_DAT_027bf348;
                                                              puVar2 = PTR_DAT_027bf138;
                                                              if (0x3d < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x3f0) =
                                                                     0x4e44f49;
                                                                *(undefined8 *)(unaff_x19 + 0x3f8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x3f8
                                                                                   ,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)puVar3;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x3e < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x400)
                                                                       = 0x4e84fc4;
                                                                  *(undefined8 *)(unaff_x19 + 0x408)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x408,0);
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf698;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x3f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x410) = 0x4e74fc8;
                                                    *(undefined8 *)(unaff_x19 + 0x418) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x418,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_027bfbd0;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x40 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x420) =
                                                           0x30304e35182;
                                                      *(undefined8 *)(unaff_x19 + 0x428) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x428,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar2;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x41 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x430) =
                                                             0x4e45187;
                                                        *(undefined8 *)(unaff_x19 + 0x438) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x438,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_027bf690;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x42 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x440) =
                                                               0x4e35221;
                                                          *(undefined8 *)(unaff_x19 + 0x448) =
                                                               in_stack_00000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x448,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_027bf170;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x43 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x450) =
                                                                 0x30304e3556a;
                                                            *(undefined8 *)(unaff_x19 + 0x458) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x458,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_027bfca0;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x44 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x460) =
                                                                   0x30304e46faf;
                                                              *(undefined8 *)(unaff_x19 + 0x468) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x468,0
                                                                                );
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_027bf948;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x45 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x470) =
                                                                     0x30304e26fb0;
                                                                *(undefined8 *)(unaff_x19 + 0x478) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x478
                                                                                   ,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf7e8
                                                                ;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x46 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x480)
                                                                       = 0x10104e66fb1;
                                                                  *(undefined8 *)(unaff_x19 + 0x488)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x488,0);
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf9c0;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x47 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x490) =
                                                         0x30304e96fb2;
                                                    *(undefined8 *)(unaff_x19 + 0x498) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x498,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_027bfa18;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x48 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x4a0) =
                                                           0x30304e36fb3;
                                                      *(undefined8 *)(unaff_x19 + 0x4a8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x4a8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_027bf028;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x49 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x4b0) =
                                                             0x30304e86fb4;
                                                        *(undefined8 *)(unaff_x19 + 0x4b8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x4b8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_027bf148;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x4a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x4c0) =
                                                               0x30304e56fb5;
                                                          *(undefined8 *)(unaff_x19 + 0x4c8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x4c8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_027bf9f0;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x4b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x4d0) =
                                                                 0x20204e76fb6;
                                                            *(undefined8 *)(unaff_x19 + 0x4d8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x4d8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_027bf3b0;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x4c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x4e0) =
                                                                   0x30304e66fb7;
                                                              *(undefined8 *)(unaff_x19 + 0x4e8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x4e8,0
                                                                                );
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_027bfcb8;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x4d < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x4f0) =
                                                                     0x30104e46fbd;
                                                                *(undefined8 *)(unaff_x19 + 0x4f8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x4f8
                                                                                   ,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf458
                                                                ;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x4e < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x500)
                                                                       = 0x30304e796c6;
                                                                  *(undefined8 *)(unaff_x19 + 0x508)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x508,0);
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)puVar4;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  puVar2 = PTR_DAT_027bfcd0;
                                                  if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x510) =
                                                         0x10103a4c42c;
                                                    *(undefined8 *)(unaff_x19 + 0x518) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x518,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar2;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x520) =
                                                           0x30103a4c42d;
                                                      *(undefined8 *)(unaff_x19 + 0x528) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x528,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar4;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x530) =
                                                             0x3a4c42e;
                                                        *(undefined8 *)(unaff_x19 + 0x538) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x538,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar1;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x540) =
                                                               0x30303a4cadc;
                                                          *(undefined8 *)(unaff_x19 + 0x548) =
                                                               in_stack_00000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x548,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_027bfbf0;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          puVar1 = PTR_DAT_027bf060;
                                                          if (0x53 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x550) =
                                                                 0x10103b5caed;
                                                            *(undefined8 *)(unaff_x19 + 0x558) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x558,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar1;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x54 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x560) =
                                                                   0x30303a8d698;
                                                              *(undefined8 *)(unaff_x19 + 0x568) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x568,0
                                                                                );
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_027bf5d0;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              puVar1 = PTR_DAT_027bf370;
                                                              if (0x55 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x570) =
                                                                     0xdeaadeaa;
                                                                *(undefined8 *)(unaff_x19 + 0x578) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x578
                                                                                   ,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf070
                                                                ;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x56 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x580)
                                                                       = 0xdeabdeab;
                                                                  *(undefined8 *)(unaff_x19 + 0x588)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x588,0);
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf808;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x57 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x590) = 0xdeacdeac;
                                                    *(undefined8 *)(unaff_x19 + 0x598) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x598,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_027bf930;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x58 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x5a0) =
                                                           0xdeaddead;
                                                      *(undefined8 *)(unaff_x19 + 0x5a8) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x5a8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x59 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x5b0) =
                                                             0xdeaedeae;
                                                        *(undefined8 *)(unaff_x19 + 0x5b8) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x5b8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_027bf7c0;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x5c0) =
                                                               0xdeafdeaf;
                                                          *(undefined8 *)(unaff_x19 + 0x5c8) =
                                                               in_stack_00000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x5c8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_027bf270;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x5d0) =
                                                                 0xdeb0deb0;
                                                            *(undefined8 *)(unaff_x19 + 0x5d8) =
                                                                 in_stack_00000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x5d8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_027bfb70;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x5c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x5e0) =
                                                                   0xdeb1deb1;
                                                              *(undefined8 *)(unaff_x19 + 0x5e8) =
                                                                   in_stack_00000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x5e8,0
                                                                                );
                                                              in_stack_00000008 =
                                                                   *(undefined8 *)PTR_DAT_027bf040;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x5d < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x5f0) =
                                                                     0xdeb2deb2;
                                                                *(undefined8 *)(unaff_x19 + 0x5f8) =
                                                                     in_stack_00000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x5f8
                                                                                   ,0);
                                                                in_stack_00000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf9b0
                                                                ;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x5e < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x600)
                                                                       = 0xdeb3deb3;
                                                                  *(undefined8 *)(unaff_x19 + 0x608)
                                                                       = in_stack_00000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x608,0);
                                                                  in_stack_00000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf4e0;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x610) =
                                                         0x10104b0fde8;
                                                    *(undefined8 *)(unaff_x19 + 0x618) =
                                                         in_stack_00000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x618,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_027bf918;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x620) =
                                                           0x30304b0fde9;
                                                      *(undefined8 *)(unaff_x19 + 0x628) =
                                                           in_stack_00000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x628,0);
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_01286abc(&stack0x00000008,0);
                                                      puVar1 = PTR_DAT_027ba318;
                                                      if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x630) = 0;
                                                        *(undefined8 *)(unaff_x19 + 0x638) =
                                                             in_stack_00000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x638,0);
                                                        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8)
                                                             = unaff_x19;
                                                        thunk_FUN_01286abc();
                                                        iVar6 = FUN_01f36368();
                                                        *(int *)(*(long *)(*unaff_x23 + 0xb8) + 0x10
                                                                ) = iVar6 + -1;
                                                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                          thunk_FUN_01220628();
                                                        }
                                                        if (DAT_0293d603 == '\0') {
                                                          thunk_FUN_01279b34(PTR_DAT_027ba318);
                                                          DAT_0293d603 = '\x01';
                                                        }
                                                        puVar5 = PTR_DAT_027befb0;
                                                        puVar4 = PTR_DAT_027befa8;
                                                        puVar3 = PTR_DAT_027befa0;
                                                        puVar2 = PTR_DAT_027bbb40;
                                                        lVar7 = *(long *)puVar1;
                                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                                          thunk_FUN_01220628();
                                                          lVar7 = *(long *)puVar1;
                                                        }
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(lVar7 + 0xb8) + 0x18);
                                                        uVar8 = thunk_FUN_0124bba8(*(undefined8 *)
                                                                                    puVar2);
                                                                                                                
                                                  System_Collections_Generic_EqualityComparer<TempAllocator_Page<ushort>>__get_Default
                                                            (uVar8,uVar10,*(undefined8 *)puVar3);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x18);
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_01286abc(puVar9,uVar8);
                                                  uVar8 = thunk_FUN_0124bba8(*(undefined8 *)puVar5);
                                                  FUN_01626f58(uVar8,*(undefined8 *)puVar4);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x20);
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_01286abc(puVar9,uVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


