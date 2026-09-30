/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 01f3ec90
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000008 = param_3;
  thunk_FUN_01286abc();
  puVar1 = PTR_DAT_027bf5b0;
  if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x180) = uStack0000000000000000;
    *(undefined8 *)(unaff_x19 + 0x188) = uStack0000000000000008;
    thunk_FUN_01286abc(unaff_x19 + 0x188,0);
    uStack0000000000000008 = *(undefined8 *)puVar1;
    uStack0000000000000000 = 0x30303a803a8;
    thunk_FUN_01286abc(&stack0x00000008);
    if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 400) = uStack0000000000000000;
      *(undefined8 *)(unaff_x19 + 0x198) = uStack0000000000000008;
      thunk_FUN_01286abc(unaff_x19 + 0x198,0);
      uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf1d0;
      uStack0000000000000000 = 0x30303b503b5;
      thunk_FUN_01286abc(&stack0x00000008);
      puVar1 = PTR_DAT_027bf468;
      if (0x18 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x1a0) = uStack0000000000000000;
        *(undefined8 *)(unaff_x19 + 0x1a8) = uStack0000000000000008;
        thunk_FUN_01286abc(unaff_x19 + 0x1a8,0);
        uStack0000000000000008 = *(undefined8 *)puVar1;
        uStack0000000000000000 = 0x30303b603b6;
        thunk_FUN_01286abc(&stack0x00000008);
        if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x1b0) = uStack0000000000000000;
          *(undefined8 *)(unaff_x19 + 0x1b8) = uStack0000000000000008;
          thunk_FUN_01286abc(unaff_x19 + 0x1b8,0);
          uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf768;
          uStack0000000000000000 = 0x4e60402;
          thunk_FUN_01286abc(&stack0x00000008);
          if (0x1a < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x1c0) = uStack0000000000000000;
            *(undefined8 *)(unaff_x19 + 0x1c8) = uStack0000000000000008;
            thunk_FUN_01286abc(unaff_x19 + 0x1c8,0);
            uStack0000000000000008 = *(undefined8 *)PTR_DAT_027befc0;
            uStack0000000000000000 = 0x4e40417;
            thunk_FUN_01286abc(&stack0x00000008);
            if (0x1b < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x1d0) = uStack0000000000000000;
              *(undefined8 *)(unaff_x19 + 0x1d8) = uStack0000000000000008;
              thunk_FUN_01286abc(unaff_x19 + 0x1d8,0);
              uStack0000000000000008 = *unaff_x25;
              uStack0000000000000000 = 0x4e40474;
              thunk_FUN_01286abc(&stack0x00000008);
              if (0x1c < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x1e0) = uStack0000000000000000;
                *(undefined8 *)(unaff_x19 + 0x1e8) = uStack0000000000000008;
                thunk_FUN_01286abc(unaff_x19 + 0x1e8,0);
                uStack0000000000000008 = *unaff_x22;
                uStack0000000000000000 = 0x4e40475;
                thunk_FUN_01286abc(&stack0x00000008);
                if (0x1d < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x1f0) = uStack0000000000000000;
                  *(undefined8 *)(unaff_x19 + 0x1f8) = uStack0000000000000008;
                  thunk_FUN_01286abc(unaff_x19 + 0x1f8,0);
                  uStack0000000000000008 = *(undefined8 *)PTR_DAT_027befe8;
                  uStack0000000000000000 = 0x4e40476;
                  thunk_FUN_01286abc(&stack0x00000008);
                  puVar1 = PTR_DAT_027bf848;
                  if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x200) = uStack0000000000000000;
                    *(undefined8 *)(unaff_x19 + 0x208) = uStack0000000000000008;
                    thunk_FUN_01286abc(unaff_x19 + 0x208,0);
                    uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf8d8;
                    uStack0000000000000000 = 0x4e40477;
                    thunk_FUN_01286abc(&stack0x00000008);
                    puVar2 = PTR_DAT_027bfac0;
                    if (0x1f < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x210) = uStack0000000000000000;
                      *(undefined8 *)(unaff_x19 + 0x218) = uStack0000000000000008;
                      thunk_FUN_01286abc(unaff_x19 + 0x218,0);
                      uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf980;
                      uStack0000000000000000 = 0x4e40478;
                      thunk_FUN_01286abc(&stack0x00000008);
                      if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x220) = uStack0000000000000000;
                        *(undefined8 *)(unaff_x19 + 0x228) = uStack0000000000000008;
                        thunk_FUN_01286abc(unaff_x19 + 0x228,0);
                        uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf280;
                        uStack0000000000000000 = 0x4e40479;
                        thunk_FUN_01286abc(&stack0x00000008);
                        if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x230) = uStack0000000000000000;
                          *(undefined8 *)(unaff_x19 + 0x238) = uStack0000000000000008;
                          thunk_FUN_01286abc(unaff_x19 + 0x238,0);
                          uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf380;
                          uStack0000000000000000 = 0x4e4047a;
                          thunk_FUN_01286abc(&stack0x00000008);
                          if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x240) = uStack0000000000000000;
                            *(undefined8 *)(unaff_x19 + 0x248) = uStack0000000000000008;
                            thunk_FUN_01286abc(unaff_x19 + 0x248,0);
                            uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf820;
                            uStack0000000000000000 = 0x4e4047b;
                            thunk_FUN_01286abc(&stack0x00000008);
                            if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x250) = uStack0000000000000000;
                              *(undefined8 *)(unaff_x19 + 600) = uStack0000000000000008;
                              thunk_FUN_01286abc(unaff_x19 + 600,0);
                              uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf798;
                              uStack0000000000000000 = 0x4e4047c;
                              thunk_FUN_01286abc(&stack0x00000008);
                              if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x260) = uStack0000000000000000;
                                *(undefined8 *)(unaff_x19 + 0x268) = uStack0000000000000008;
                                thunk_FUN_01286abc(unaff_x19 + 0x268,0);
                                uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bfc60;
                                uStack0000000000000000 = 0x4e4047d;
                                thunk_FUN_01286abc(&stack0x00000008);
                                if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x270) = uStack0000000000000000;
                                  *(undefined8 *)(unaff_x19 + 0x278) = uStack0000000000000008;
                                  thunk_FUN_01286abc(unaff_x19 + 0x278,0);
                                  uStack0000000000000008 = *(undefined8 *)PTR_DAT_027bf298;
                                  uStack0000000000000000 = 0x20004b004b0;
                                  thunk_FUN_01286abc(&stack0x00000008);
                                  puVar3 = PTR_DAT_027bf9e8;
                                  if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x280) = uStack0000000000000000;
                                    *(undefined8 *)(unaff_x19 + 0x288) = uStack0000000000000008;
                                    thunk_FUN_01286abc(unaff_x19 + 0x288,0);
                                    uStack0000000000000008 = *(undefined8 *)puVar3;
                                    uStack0000000000000000 = 0x4b004b1;
                                    thunk_FUN_01286abc(&stack0x00000008);
                                    puVar3 = PTR_DAT_027bf6b8;
                                    if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x290) = uStack0000000000000000;
                                      *(undefined8 *)(unaff_x19 + 0x298) = uStack0000000000000008;
                                      thunk_FUN_01286abc(unaff_x19 + 0x298,0);
                                      uStack0000000000000008 = *(undefined8 *)puVar3;
                                      uStack0000000000000000 = 0x30304e204e2;
                                      thunk_FUN_01286abc(&stack0x00000008);
                                      puVar3 = PTR_DAT_027bfcd8;
                                      if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x2a0) = uStack0000000000000000;
                                        *(undefined8 *)(unaff_x19 + 0x2a8) = uStack0000000000000008;
                                        thunk_FUN_01286abc(unaff_x19 + 0x2a8,0);
                                        uStack0000000000000008 = *(undefined8 *)puVar3;
                                        uStack0000000000000000 = 0x30304e304e3;
                                        thunk_FUN_01286abc(&stack0x00000008);
                                        puVar3 = PTR_DAT_027bf2b8;
                                        if (0x29 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x2b0) =
                                               uStack0000000000000000;
                                          *(undefined8 *)(unaff_x19 + 0x2b8) =
                                               uStack0000000000000008;
                                          thunk_FUN_01286abc(unaff_x19 + 0x2b8,0);
                                          uStack0000000000000008 = *(undefined8 *)puVar3;
                                          uStack0000000000000000 = 0x30304e404e4;
                                          thunk_FUN_01286abc(&stack0x00000008);
                                          puVar3 = PTR_DAT_027bf128;
                                          if (0x2a < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x2c0) =
                                                 uStack0000000000000000;
                                            *(undefined8 *)(unaff_x19 + 0x2c8) =
                                                 uStack0000000000000008;
                                            thunk_FUN_01286abc(unaff_x19 + 0x2c8,0);
                                            uStack0000000000000008 = *(undefined8 *)puVar3;
                                            uStack0000000000000000 = 0x30304e504e5;
                                            thunk_FUN_01286abc(&stack0x00000008);
                                            puVar3 = PTR_DAT_027bfa38;
                                            if (0x2b < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x2d0) =
                                                   uStack0000000000000000;
                                              *(undefined8 *)(unaff_x19 + 0x2d8) =
                                                   uStack0000000000000008;
                                              thunk_FUN_01286abc(unaff_x19 + 0x2d8,0);
                                              uStack0000000000000008 = *(undefined8 *)puVar3;
                                              uStack0000000000000000 = 0x30304e604e6;
                                              thunk_FUN_01286abc(&stack0x00000008);
                                              if (0x2c < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x2e0) =
                                                     uStack0000000000000000;
                                                *(undefined8 *)(unaff_x19 + 0x2e8) =
                                                     uStack0000000000000008;
                                                thunk_FUN_01286abc(unaff_x19 + 0x2e8,0);
                                                uStack0000000000000008 =
                                                     *(undefined8 *)PTR_DAT_027bf3d0;
                                                uStack0000000000000000 = 0x30304e704e7;
                                                thunk_FUN_01286abc(&stack0x00000008);
                                                if (0x2d < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x2f0) =
                                                       uStack0000000000000000;
                                                  *(undefined8 *)(unaff_x19 + 0x2f8) =
                                                       uStack0000000000000008;
                                                  thunk_FUN_01286abc(unaff_x19 + 0x2f8,0);
                                                  uStack0000000000000008 =
                                                       *(undefined8 *)PTR_DAT_027bf5c8;
                                                  uStack0000000000000000 = 0x30304e804e8;
                                                  thunk_FUN_01286abc(&stack0x00000008);
                                                  if (0x2e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x300) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x308) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x308,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_027bf588;
                                                    uStack0000000000000000 = 0x30304e904e9;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x2f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x310) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x318) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x318,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_027bf030;
                                                      uStack0000000000000000 = 0x30304ea04ea;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x30 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 800) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x328) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x328,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_027bf7c8;
                                                        uStack0000000000000000 = 0x4e42710;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x31 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x330) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x338) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x338,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_027bf660;
                                                          uStack0000000000000000 = 0x4e4275f;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x32 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x340) =
                                                                 uStack0000000000000000;
                                                            *(undefined8 *)(unaff_x19 + 0x348) =
                                                                 uStack0000000000000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x348,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x4b02ee0;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            puVar4 = PTR_DAT_027bfb88;
                                                            puVar3 = PTR_DAT_027bf738;
                                                            puVar2 = PTR_DAT_027bf188;
                                                            if (0x33 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x350) =
                                                                   uStack0000000000000000;
                                                              *(undefined8 *)(unaff_x19 + 0x358) =
                                                                   uStack0000000000000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x358,0
                                                                                );
                                                              uStack0000000000000008 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000000 = 0x4b02ee1;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x34 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x360) =
                                                                     uStack0000000000000000;
                                                                *(undefined8 *)(unaff_x19 + 0x368) =
                                                                     uStack0000000000000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x368
                                                                                   ,0);
                                                                uStack0000000000000008 =
                                                                     *(undefined8 *)puVar1;
                                                                uStack0000000000000000 =
                                                                     0x10104e44e9f;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x35 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x370)
                                                                       = uStack0000000000000000;
                                                                  *(undefined8 *)(unaff_x19 + 0x378)
                                                                       = uStack0000000000000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x378,0);
                                                                  uStack0000000000000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf288;
                                                                  uStack0000000000000000 = 0x4e44f31
                                                                  ;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x36 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x380) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x388) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x388,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    uStack0000000000000000 = 0x4e44f35;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x37 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x390) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x398) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x398,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_027bf2d0;
                                                      uStack0000000000000000 = 0x4e44f36;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      puVar5 = PTR_DAT_027bf878;
                                                      puVar4 = PTR_DAT_027bf390;
                                                      puVar3 = PTR_DAT_027bf230;
                                                      puVar1 = PTR_DAT_027bf180;
                                                      if (0x38 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x3a0) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x3a8) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x3a8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar5;
                                                        uStack0000000000000000 = 0x4e44f38;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x39 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x3b0) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x3b8) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x3b8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000000 = 0x4e44f3c;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x3a < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x3c0) =
                                                                 uStack0000000000000000;
                                                            *(undefined8 *)(unaff_x19 + 0x3c8) =
                                                                 uStack0000000000000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x3c8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar4;
                                                            uStack0000000000000000 = 0x4e44f3d;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x3b < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x3d0) =
                                                                   uStack0000000000000000;
                                                              *(undefined8 *)(unaff_x19 + 0x3d8) =
                                                                   uStack0000000000000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x3d8,0
                                                                                );
                                                              uStack0000000000000008 =
                                                                   *(undefined8 *)puVar1;
                                                              uStack0000000000000000 = 0x3a44f42;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x3c < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x3e0) =
                                                                     uStack0000000000000000;
                                                                *(undefined8 *)(unaff_x19 + 1000) =
                                                                     uStack0000000000000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 1000,
                                                                                   0);
                                                                uStack0000000000000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf200
                                                                ;
                                                                uStack0000000000000000 = 0x4e44f49;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                puVar4 = PTR_DAT_027bfc68;
                                                                puVar3 = PTR_DAT_027bf348;
                                                                puVar1 = PTR_DAT_027bf138;
                                                                if (0x3d < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x3f0)
                                                                       = uStack0000000000000000;
                                                                  *(undefined8 *)(unaff_x19 + 0x3f8)
                                                                       = uStack0000000000000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x3f8,0);
                                                                  uStack0000000000000008 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000000 = 0x4e84fc4
                                                                  ;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x3e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x400) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x408) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x408,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_027bf698;
                                                    uStack0000000000000000 = 0x4e74fc8;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x3f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x410) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x418) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x418,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_027bfbd0;
                                                      uStack0000000000000000 = 0x30304e35182;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x40 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x420) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x428) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x428,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar1;
                                                        uStack0000000000000000 = 0x4e45187;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x41 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x430) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x438) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x438,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_027bf690;
                                                          uStack0000000000000000 = 0x4e35221;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x42 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x440) =
                                                                 uStack0000000000000000;
                                                            *(undefined8 *)(unaff_x19 + 0x448) =
                                                                 uStack0000000000000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x448,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_027bf170;
                                                            uStack0000000000000000 = 0x30304e3556a;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x43 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x450) =
                                                                   uStack0000000000000000;
                                                              *(undefined8 *)(unaff_x19 + 0x458) =
                                                                   uStack0000000000000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x458,0
                                                                                );
                                                              uStack0000000000000008 =
                                                                   *(undefined8 *)PTR_DAT_027bfca0;
                                                              uStack0000000000000000 = 0x30304e46faf
                                                              ;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x44 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x460) =
                                                                     uStack0000000000000000;
                                                                *(undefined8 *)(unaff_x19 + 0x468) =
                                                                     uStack0000000000000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x468
                                                                                   ,0);
                                                                uStack0000000000000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf948
                                                                ;
                                                                uStack0000000000000000 =
                                                                     0x30304e26fb0;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x45 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x470)
                                                                       = uStack0000000000000000;
                                                                  *(undefined8 *)(unaff_x19 + 0x478)
                                                                       = uStack0000000000000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x478,0);
                                                                  uStack0000000000000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf7e8;
                                                                  uStack0000000000000000 =
                                                                       0x10104e66fb1;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x46 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x480) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x488) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x488,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_027bf9c0;
                                                    uStack0000000000000000 = 0x30304e96fb2;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x47 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x490) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x498) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x498,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_027bfa18;
                                                      uStack0000000000000000 = 0x30304e36fb3;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x48 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x4a0) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x4a8) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x4a8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_027bf028;
                                                        uStack0000000000000000 = 0x30304e86fb4;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x49 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x4b0) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x4b8) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x4b8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_027bf148;
                                                          uStack0000000000000000 = 0x30304e56fb5;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x4a < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x4c0) =
                                                                 uStack0000000000000000;
                                                            *(undefined8 *)(unaff_x19 + 0x4c8) =
                                                                 uStack0000000000000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x4c8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_027bf9f0;
                                                            uStack0000000000000000 = 0x20204e76fb6;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x4b < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x4d0) =
                                                                   uStack0000000000000000;
                                                              *(undefined8 *)(unaff_x19 + 0x4d8) =
                                                                   uStack0000000000000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x4d8,0
                                                                                );
                                                              uStack0000000000000008 =
                                                                   *(undefined8 *)PTR_DAT_027bf3b0;
                                                              uStack0000000000000000 = 0x30304e66fb7
                                                              ;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x4c < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x4e0) =
                                                                     uStack0000000000000000;
                                                                *(undefined8 *)(unaff_x19 + 0x4e8) =
                                                                     uStack0000000000000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x4e8
                                                                                   ,0);
                                                                uStack0000000000000008 =
                                                                     *(undefined8 *)PTR_DAT_027bfcb8
                                                                ;
                                                                uStack0000000000000000 =
                                                                     0x30104e46fbd;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x4d < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x4f0)
                                                                       = uStack0000000000000000;
                                                                  *(undefined8 *)(unaff_x19 + 0x4f8)
                                                                       = uStack0000000000000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x4f8,0);
                                                                  uStack0000000000000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf458;
                                                                  uStack0000000000000000 =
                                                                       0x30304e796c6;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x4e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x500) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x508) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x508,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    uStack0000000000000000 = 0x10103a4c42c;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    puVar1 = PTR_DAT_027bfcd0;
                                                    if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x510) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x518) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x518,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar1
                                                      ;
                                                      uStack0000000000000000 = 0x30103a4c42d;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x520) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x528) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x528,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar4;
                                                        uStack0000000000000000 = 0x3a4c42e;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x530) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x538) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x538,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          uStack0000000000000000 = 0x30303a4cadc;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x540) =
                                                                 uStack0000000000000000;
                                                            *(undefined8 *)(unaff_x19 + 0x548) =
                                                                 uStack0000000000000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x548,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_027bfbf0;
                                                            uStack0000000000000000 = 0x10103b5caed;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            puVar1 = PTR_DAT_027bf060;
                                                            if (0x53 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x550) =
                                                                   uStack0000000000000000;
                                                              *(undefined8 *)(unaff_x19 + 0x558) =
                                                                   uStack0000000000000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x558,0
                                                                                );
                                                              uStack0000000000000008 =
                                                                   *(undefined8 *)puVar1;
                                                              uStack0000000000000000 = 0x30303a8d698
                                                              ;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x54 < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x560) =
                                                                     uStack0000000000000000;
                                                                *(undefined8 *)(unaff_x19 + 0x568) =
                                                                     uStack0000000000000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x568
                                                                                   ,0);
                                                                uStack0000000000000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf5d0
                                                                ;
                                                                uStack0000000000000000 = 0xdeaadeaa;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                puVar1 = PTR_DAT_027bf370;
                                                                if (0x55 < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x570)
                                                                       = uStack0000000000000000;
                                                                  *(undefined8 *)(unaff_x19 + 0x578)
                                                                       = uStack0000000000000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x578,0);
                                                                  uStack0000000000000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf070;
                                                                  uStack0000000000000000 =
                                                                       0xdeabdeab;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x56 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x580) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x588) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x588,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_027bf808;
                                                    uStack0000000000000000 = 0xdeacdeac;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x57 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x590) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x598) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x598,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_027bf930;
                                                      uStack0000000000000000 = 0xdeaddead;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x58 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x5a0) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x5a8) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x5a8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar1;
                                                        uStack0000000000000000 = 0xdeaedeae;
                                                        thunk_FUN_01286abc(&stack0x00000008);
                                                        if (0x59 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x5b0) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x5b8) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x5b8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_027bf7c0;
                                                          uStack0000000000000000 = 0xdeafdeaf;
                                                          thunk_FUN_01286abc(&stack0x00000008);
                                                          if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x5c0) =
                                                                 uStack0000000000000000;
                                                            *(undefined8 *)(unaff_x19 + 0x5c8) =
                                                                 uStack0000000000000008;
                                                            thunk_FUN_01286abc(unaff_x19 + 0x5c8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_027bf270;
                                                            uStack0000000000000000 = 0xdeb0deb0;
                                                            thunk_FUN_01286abc(&stack0x00000008);
                                                            if (0x5b < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x5d0) =
                                                                   uStack0000000000000000;
                                                              *(undefined8 *)(unaff_x19 + 0x5d8) =
                                                                   uStack0000000000000008;
                                                              thunk_FUN_01286abc(unaff_x19 + 0x5d8,0
                                                                                );
                                                              uStack0000000000000008 =
                                                                   *(undefined8 *)PTR_DAT_027bfb70;
                                                              uStack0000000000000000 = 0xdeb1deb1;
                                                              thunk_FUN_01286abc(&stack0x00000008);
                                                              if (0x5c < *(uint *)(unaff_x19 + 0x18)
                                                                 ) {
                                                                *(undefined8 *)(unaff_x19 + 0x5e0) =
                                                                     uStack0000000000000000;
                                                                *(undefined8 *)(unaff_x19 + 0x5e8) =
                                                                     uStack0000000000000008;
                                                                thunk_FUN_01286abc(unaff_x19 + 0x5e8
                                                                                   ,0);
                                                                uStack0000000000000008 =
                                                                     *(undefined8 *)PTR_DAT_027bf040
                                                                ;
                                                                uStack0000000000000000 = 0xdeb2deb2;
                                                                thunk_FUN_01286abc(&stack0x00000008)
                                                                ;
                                                                if (0x5d < *(uint *)(unaff_x19 +
                                                                                    0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 0x5f0)
                                                                       = uStack0000000000000000;
                                                                  *(undefined8 *)(unaff_x19 + 0x5f8)
                                                                       = uStack0000000000000008;
                                                                  thunk_FUN_01286abc(unaff_x19 +
                                                                                     0x5f8,0);
                                                                  uStack0000000000000008 =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_027bf9b0;
                                                                  uStack0000000000000000 =
                                                                       0xdeb3deb3;
                                                                  thunk_FUN_01286abc(&
                                                  stack0x00000008);
                                                  if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x600) =
                                                         uStack0000000000000000;
                                                    *(undefined8 *)(unaff_x19 + 0x608) =
                                                         uStack0000000000000008;
                                                    thunk_FUN_01286abc(unaff_x19 + 0x608,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_027bf4e0;
                                                    uStack0000000000000000 = 0x10104b0fde8;
                                                    thunk_FUN_01286abc(&stack0x00000008);
                                                    if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x610) =
                                                           uStack0000000000000000;
                                                      *(undefined8 *)(unaff_x19 + 0x618) =
                                                           uStack0000000000000008;
                                                      thunk_FUN_01286abc(unaff_x19 + 0x618,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_027bf918;
                                                      uStack0000000000000000 = 0x30304b0fde9;
                                                      thunk_FUN_01286abc(&stack0x00000008);
                                                      if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x620) =
                                                             uStack0000000000000000;
                                                        *(undefined8 *)(unaff_x19 + 0x628) =
                                                             uStack0000000000000008;
                                                        thunk_FUN_01286abc(unaff_x19 + 0x628,0);
                                                        uStack0000000000000000 = 0;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_01286abc(&stack0x00000008,0);
                                                        puVar1 = PTR_DAT_027ba318;
                                                        if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x630) =
                                                               uStack0000000000000000;
                                                          *(undefined8 *)(unaff_x19 + 0x638) =
                                                               uStack0000000000000008;
                                                          thunk_FUN_01286abc(unaff_x19 + 0x638,0);
                                                          *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8
                                                                   ) = unaff_x19;
                                                          thunk_FUN_01286abc();
                                                          iVar6 = FUN_01f36368();
                                                          *(int *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                  0x10) = iVar6 + -1;
                                                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0)
                                                          {
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
                                                                    (*(long *)(lVar7 + 0xb8) + 0x18)
                                                          ;
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


