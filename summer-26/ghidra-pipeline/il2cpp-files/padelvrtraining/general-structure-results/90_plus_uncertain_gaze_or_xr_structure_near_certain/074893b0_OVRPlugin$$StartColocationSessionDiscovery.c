/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 074893b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5 [16],undefined1 param_6 [16],undefined4 param_7,undefined8 param_8
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  long lVar43;
  long lVar44;
  long *plVar45;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 uVar46;
  ulong uVar47;
  undefined4 unaff_s9;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined8 uStack0000000000000134;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined8 uStack00000000000001b4;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  
  uStack00000000000000a0 = param_7;
  uStack00000000000000a4 = param_4;
  uStack00000000000000a8 = param_3;
  uStack00000000000000ac = param_2;
  FUN_08a5b7d0(param_8,0);
  *(undefined8 *)(unaff_x24 + 0x74) = *(undefined8 *)(unaff_x24 + 0x94);
  *(undefined8 *)(unaff_x24 + 0x6c) = *(undefined8 *)(unaff_x24 + 0x8c);
  if (0xc < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
    uVar46 = *(undefined8 *)(unaff_x24 + 0x6c);
    *(undefined8 *)(unaff_x20 + 0x1b8) = *(undefined8 *)(unaff_x24 + 0x74);
    *(undefined8 *)(unaff_x20 + 0x1b0) = uVar46;
    *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
    *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
    uVar21 = DAT_01914a88;
    uVar8 = DAT_01914414;
    uVar5 = DAT_01914228;
    uVar4 = DAT_01914224;
    FUN_08a5b7d0(DAT_019147b4,&stack0x00000aa0,0);
    *(undefined8 *)(unaff_x24 + 0x34) = *(undefined8 *)(unaff_x24 + 0x54);
    *(undefined8 *)(unaff_x24 + 0x2c) = *(undefined8 *)(unaff_x24 + 0x4c);
    if (0xd < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
      uVar46 = *(undefined8 *)(unaff_x24 + 0x2c);
      *(undefined8 *)(unaff_x20 + 0x1d8) = *(undefined8 *)(unaff_x24 + 0x34);
      *(undefined8 *)(unaff_x20 + 0x1d0) = uVar46;
      *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
      *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
      uVar24 = DAT_01914c68;
      uVar23 = DAT_01914bd4;
      uVar18 = DAT_01914858;
      uVar15 = DAT_01914714;
      FUN_08a5b7d0(DAT_0191450c,&stack0x00000a60,0);
      uVar46 = *(undefined8 *)(unaff_x24 + 0x14);
      uVar47 = *(ulong *)(unaff_x24 + 0xc);
      if (0xe < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
        *(undefined8 *)(unaff_x20 + 0x1f8) = uVar46;
        *(ulong *)(unaff_x20 + 0x1f0) = uVar47 & 0xffffffff00000000;
        *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
        *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
        uVar42 = DAT_01915274;
        uVar35 = DAT_01914f5c;
        uVar26 = DAT_01914cf0;
        FUN_08a5b7d0(DAT_019140b4,DAT_01914cf0,DAT_01915274,DAT_01914f5c,0x22800000,0x23000000,
                     0x3f800000,&stack0x00000a20,0);
        if (0xf < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
          *(undefined8 *)(unaff_x20 + 0x218) = 0;
          *(undefined8 *)(unaff_x20 + 0x210) = 0;
          *(undefined8 *)(unaff_x20 + 0x20c) = 0;
          *(undefined8 *)(unaff_x20 + 0x204) = 0;
          uVar30 = DAT_01914d9c;
          uVar27 = DAT_01914cf4;
          FUN_08a5b7d0(DAT_01913f70,DAT_01914d9c,DAT_01914cf4,0,0,0,0x3f800000,&stack0x000009e0,0);
          if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x220) = 1;
            *(undefined8 *)(unaff_x20 + 0x238) = 0;
            *(undefined8 *)(unaff_x20 + 0x230) = 0;
            *(undefined8 *)(unaff_x20 + 0x22c) = 0;
            *(undefined8 *)(unaff_x20 + 0x224) = 0;
            uVar40 = DAT_019151d4;
            uVar16 = DAT_01914718;
            uVar12 = DAT_01914674;
            uVar9 = DAT_01914474;
            FUN_08a5b7d0(DAT_019145d4,&stack0x000009a0,0);
            if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
              *(undefined8 *)(unaff_x20 + 600) = 0;
              *(undefined8 *)(unaff_x20 + 0x250) = 0;
              *(undefined8 *)(unaff_x20 + 0x24c) = 0;
              *(undefined8 *)(unaff_x20 + 0x244) = 0;
              uVar31 = DAT_01914e38;
              uVar22 = DAT_01914a8c;
              uVar20 = DAT_01914980;
              uVar13 = DAT_0191467c;
              FUN_08a5b7d0(DAT_01914678,&stack0x00000960,0);
              if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                *(undefined8 *)(unaff_x20 + 0x278) = 0;
                *(undefined8 *)(unaff_x20 + 0x270) = 0;
                *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                *(undefined8 *)(unaff_x20 + 0x264) = 0;
                uVar25 = DAT_01914c6c;
                uVar6 = DAT_019142c4;
                FUN_08a5b7d0(DAT_01914018,DAT_019142c4,DAT_01914c6c,DAT_019145d8,DAT_01914a90,
                             DAT_01913f74,DAT_01914680,&stack0x00000920,0);
                if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                  *(undefined8 *)(unaff_x20 + 0x298) = 0;
                  *(undefined8 *)(unaff_x20 + 0x290) = 0;
                  *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x284) = 0;
                  FUN_08a5b7d0(DAT_0191422c,DAT_019147b8,DAT_0191401c,DAT_019151d8,&stack0x000008e0,
                               0);
                  if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                    *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                    *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                    uVar38 = DAT_01915128;
                    uVar37 = DAT_01914ff4;
                    uVar17 = DAT_019147c0;
                    uVar10 = DAT_01914510;
                    FUN_08a5b7d0(DAT_01914230,&stack0x000008a0,0);
                    if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                      *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                      *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                      uVar33 = DAT_01914eec;
                      uVar32 = DAT_01914e3c;
                      uVar28 = DAT_01914cf8;
                      uVar14 = DAT_01914684;
                      FUN_08a5b7d0(DAT_01913f78,&stack0x00000860,0);
                      if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                        *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                        *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                        uVar36 = DAT_01914f60;
                        uVar34 = DAT_01914ef0;
                        uVar11 = DAT_019145dc;
                        uVar2 = DAT_019140b8;
                        FUN_08a5b7d0(DAT_01914514,&stack0x00000820,0);
                        if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                          *(undefined8 *)(unaff_x20 + 0x318) = 0;
                          *(undefined8 *)(unaff_x20 + 0x310) = 0;
                          *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x304) = 0;
                          uVar41 = DAT_019151dc;
                          uVar39 = DAT_0191512c;
                          uVar29 = DAT_01914d04;
                          uVar3 = DAT_01914164;
                          FUN_08a5b7d0(DAT_01914bd8,&stack0x000007e0,0);
                          if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 800) = 0x17;
                            *(undefined8 *)(unaff_x20 + 0x338) = 0;
                            *(undefined8 *)(unaff_x20 + 0x330) = 0;
                            *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x324) = 0;
                            uVar19 = DAT_01914860;
                            uVar7 = DAT_01914368;
                            FUN_08a5b7d0(DAT_01914ffc,&stack0x000007a0,0);
                            if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                              *(undefined8 *)(unaff_x20 + 0x358) = 0;
                              *(undefined8 *)(unaff_x20 + 0x350) = 0;
                              *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x344) = 0;
                              if (unaff_x19 != 0) {
                                *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                thunk_FUN_03d1023c();
                                **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                                thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x21 + 0xb8));
                                lVar43 = thunk_FUN_03d2ef40(*unaff_x21);
                                FUN_07488c20();
                                lVar44 = FUN_03d2d394(*unaff_x22,0x1a);
                                FUN_08a5b7d0(DAT_01914e40,&stack0x00000760,0);
                                if (lVar44 != 0) {
                                  if (*(int *)(lVar44 + 0x18) != 0) {
                                    *(undefined4 *)(lVar44 + 0x20) = 1;
                                    *(undefined8 *)(lVar44 + 0x38) = 0;
                                    *(undefined8 *)(lVar44 + 0x30) = 0;
                                    *(undefined8 *)(lVar44 + 0x2c) = 0;
                                    *(undefined8 *)(lVar44 + 0x24) = 0;
                                    FUN_08a5b7d0(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                                    if (1 < *(uint *)(lVar44 + 0x18)) {
                                      *(undefined4 *)(lVar44 + 0x40) = 0xffffffff;
                                      *(undefined8 *)(lVar44 + 0x58) = 0;
                                      *(undefined8 *)(lVar44 + 0x50) = 0;
                                      uVar1 = DAT_0191447c;
                                      *(undefined8 *)(lVar44 + 0x4c) = 0;
                                      *(undefined8 *)(lVar44 + 0x44) = 0;
                                      FUN_08a5b7d0(uVar1,&stack0x000006c0,0);
                                      if (2 < *(uint *)(lVar44 + 0x18)) {
                                        *(undefined4 *)(lVar44 + 0x60) = 1;
                                        *(undefined8 *)(lVar44 + 0x78) = 0;
                                        *(undefined8 *)(lVar44 + 0x70) = 0;
                                        uVar1 = DAT_01914688;
                                        *(undefined8 *)(lVar44 + 0x6c) = 0;
                                        *(undefined8 *)(lVar44 + 100) = 0;
                                        FUN_08a5b7d0(uVar1,DAT_0191468c,DAT_01915134,DAT_019147c4,
                                                     DAT_019147c8,DAT_01913f80,DAT_01914518,
                                                     &stack0x00000680,0);
                                        if (3 < *(uint *)(lVar44 + 0x18)) {
                                          *(undefined4 *)(lVar44 + 0x80) = 2;
                                          *(undefined8 *)(lVar44 + 0x98) = 0;
                                          *(undefined8 *)(lVar44 + 0x90) = 0;
                                          uVar1 = DAT_01914d08;
                                          *(undefined8 *)(lVar44 + 0x8c) = 0;
                                          *(undefined8 *)(lVar44 + 0x84) = 0;
                                          FUN_08a5b7d0(uVar1,DAT_019147cc,DAT_01915138,DAT_01914a1c,
                                                       DAT_01915094,DAT_019148fc,DAT_01915004,
                                                       &stack0x00000640,0);
                                          if (4 < *(uint *)(lVar44 + 0x18)) {
                                            *(undefined4 *)(lVar44 + 0xa0) = 3;
                                            *(undefined8 *)(lVar44 + 0xb8) = 0;
                                            *(undefined8 *)(lVar44 + 0xb0) = 0;
                                            *(undefined8 *)(lVar44 + 0xac) = 0;
                                            *(undefined8 *)(lVar44 + 0xa4) = 0;
                                            FUN_08a5b7d0(DAT_01914720,DAT_01914984,DAT_01914864,
                                                         DAT_01914b24,0,0,0x3f800000,
                                                         &stack0x00000600,0);
                                            if (5 < *(uint *)(lVar44 + 0x18)) {
                                              *(undefined4 *)(lVar44 + 0xc0) = 4;
                                              *(undefined8 *)(lVar44 + 0xd8) = 0;
                                              *(undefined8 *)(lVar44 + 0xd0) = 0;
                                              uVar1 = DAT_01913f84;
                                              *(undefined8 *)(lVar44 + 0xcc) = 0;
                                              *(undefined8 *)(lVar44 + 0xc4) = 0;
                                              FUN_08a5b7d0(uVar1,&stack0x000005c0,0);
                                              if (6 < *(uint *)(lVar44 + 0x18)) {
                                                *(undefined4 *)(lVar44 + 0xe0) = 1;
                                                *(undefined8 *)(lVar44 + 0xf8) = 0;
                                                *(undefined8 *)(lVar44 + 0xf0) = 0;
                                                *(undefined8 *)(lVar44 + 0xec) = 0;
                                                *(undefined8 *)(lVar44 + 0xe4) = 0;
                                                FUN_08a5b7d0(DAT_0191527c,unaff_s9,
                                                             uStack00000000000000dc,
                                                             uStack00000000000000d8,DAT_0191513c,
                                                             DAT_01914d0c,uStack00000000000000d4,
                                                             &stack0x00000580,0);
                                                if (7 < *(uint *)(lVar44 + 0x18)) {
                                                  *(undefined4 *)(lVar44 + 0x100) = 6;
                                                  *(undefined8 *)(lVar44 + 0x118) = 0;
                                                  *(undefined8 *)(lVar44 + 0x110) = 0;
                                                  *(undefined8 *)(lVar44 + 0x10c) = 0;
                                                  *(undefined8 *)(lVar44 + 0x104) = 0;
                                                  FUN_08a5b7d0(DAT_019147d0,DAT_01915098,
                                                               DAT_01914480,uStack00000000000000d0,
                                                               DAT_01914724,DAT_01914da0,
                                                               uStack00000000000000cc,
                                                               &stack0x00000540,0);
                                                  if (8 < *(uint *)(lVar44 + 0x18)) {
                                                    *(undefined4 *)(lVar44 + 0x120) = 7;
                                                    *(undefined8 *)(lVar44 + 0x138) = 0;
                                                    *(undefined8 *)(lVar44 + 0x130) = 0;
                                                    *(undefined8 *)(lVar44 + 300) = 0;
                                                    *(undefined8 *)(lVar44 + 0x124) = 0;
                                                    FUN_08a5b7d0(DAT_01914bdc,uStack00000000000000c8
                                                                 ,uStack00000000000000c4,
                                                                 uStack00000000000000c0,DAT_01914418
                                                                 ,DAT_01914484,
                                                                 in_stack_000000b8._4_4_,
                                                                 &stack0x00000500,0);
                                                    if (9 < *(uint *)(lVar44 + 0x18)) {
                                                      *(undefined4 *)(lVar44 + 0x140) = 8;
                                                      *(undefined8 *)(lVar44 + 0x158) = 0;
                                                      *(undefined8 *)(lVar44 + 0x150) = 0;
                                                      *(undefined8 *)(lVar44 + 0x14c) = 0;
                                                      *(undefined8 *)(lVar44 + 0x144) = 0;
                                                      FUN_08a5b7d0(DAT_01914690,DAT_019147d4,
                                                                   DAT_01914da4,0,DAT_01914728,0,
                                                                   0x3f800000,&stack0x000004c0,0);
                                                      if (10 < *(uint *)(lVar44 + 0x18)) {
                                                        *(undefined4 *)(lVar44 + 0x160) = 9;
                                                        *(undefined8 *)(lVar44 + 0x178) = 0;
                                                        *(undefined8 *)(lVar44 + 0x170) = 0;
                                                        *(undefined8 *)(lVar44 + 0x16c) = 0;
                                                        *(undefined8 *)(lVar44 + 0x164) = 0;
                                                        FUN_08a5b7d0(DAT_01914d10,
                                                                     uStack00000000000000b4,
                                                                     uStack00000000000000b0,0,0,0,
                                                                     0x3f800000,&stack0x00000480,0);
                                                        if (0xb < *(uint *)(lVar44 + 0x18)) {
                                                          *(undefined4 *)(lVar44 + 0x180) = 1;
                                                          *(undefined8 *)(lVar44 + 0x198) = 0;
                                                          *(undefined8 *)(lVar44 + 400) = 0;
                                                          *(undefined8 *)(lVar44 + 0x18c) = 0;
                                                          *(undefined8 *)(lVar44 + 0x184) = 0;
                                                          FUN_08a5b7d0(DAT_01914da8,
                                                                       uStack00000000000000ac,
                                                                       uStack00000000000000a8,
                                                                       uStack00000000000000a4,
                                                                       DAT_01914a98,DAT_019145e4,
                                                                       uStack00000000000000a0,
                                                                       &stack0x00000440,0);
                                                          if (0xc < *(uint *)(lVar44 + 0x18)) {
                                                            *(undefined4 *)(lVar44 + 0x1a0) = 0xb;
                                                            *(undefined8 *)(lVar44 + 0x1b8) = 0;
                                                            *(undefined8 *)(lVar44 + 0x1b0) = 0;
                                                            *(undefined8 *)(lVar44 + 0x1ac) = 0;
                                                            *(undefined8 *)(lVar44 + 0x1a4) = 0;
                                                            FUN_08a5b7d0(DAT_019147d8,uVar8,uVar21,
                                                                         uVar4,DAT_01914868,
                                                                         DAT_01914a9c,uVar5,
                                                                         &stack0x00000400,0);
                                                            if (0xd < *(uint *)(lVar44 + 0x18)) {
                                                              *(undefined4 *)(lVar44 + 0x1c0) = 0xc;
                                                              *(undefined8 *)(lVar44 + 0x1d8) = 0;
                                                              *(undefined8 *)(lVar44 + 0x1d0) = 0;
                                                              *(undefined8 *)(lVar44 + 0x1cc) = 0;
                                                              *(undefined8 *)(lVar44 + 0x1c4) = 0;
                                                              FUN_08a5b7d0(DAT_01913f88,uVar24,
                                                                           uVar18,uVar15,
                                                                           DAT_01914aa0,DAT_01914b28
                                                                           ,uVar23,&stack0x000003c0,
                                                                           0);
                                                              if (0xe < *(uint *)(lVar44 + 0x18)) {
                                                                *(undefined4 *)(lVar44 + 0x1e0) =
                                                                     0xd;
                                                                *(undefined8 *)(lVar44 + 0x1f8) = 0;
                                                                *(undefined8 *)(lVar44 + 0x1f0) = 0;
                                                                *(undefined8 *)(lVar44 + 0x1ec) = 0;
                                                                *(undefined8 *)(lVar44 + 0x1e4) = 0;
                                                                FUN_08a5b7d0(DAT_01914a20,uVar26,
                                                                             uVar42,uVar35,
                                                                             0xa2800000,0xa3000000,
                                                                             0x3f800000,
                                                                             &stack0x00000380,0);
                                                                if (0xf < *(uint *)(lVar44 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar44 + 0x200) =
                                                                       0xe;
                                                                  *(undefined8 *)(lVar44 + 0x218) =
                                                                       0;
                                                                  *(undefined8 *)(lVar44 + 0x210) =
                                                                       0;
                                                                  *(undefined8 *)(lVar44 + 0x20c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar44 + 0x204) =
                                                                       0;
                                                                  FUN_08a5b7d0(DAT_01914020,uVar30,
                                                                               uVar27,0,0,0,
                                                                               0x3f800000,
                                                                               &stack0x00000340,0);
                                                                  if (0x10 < *(uint *)(lVar44 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar44 + 0x220)
                                                                         = 1;
                                                                    *(undefined8 *)(lVar44 + 0x238)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar44 + 0x230)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar44 + 0x22c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar44 + 0x224)
                                                                         = 0;
                                                                    FUN_08a5b7d0(DAT_019145e8,uVar16
                                                                                 ,uVar9,uVar12,
                                                                                 DAT_01915280,
                                                                                 DAT_019151e0,uVar40
                                                                                 ,&stack0x00000300,0
                                                                                );
                                                                    if (0x11 < *(uint *)(lVar44 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar44 + 0x240) = 0x10;
                                                    *(undefined8 *)(lVar44 + 600) = 0;
                                                    *(undefined8 *)(lVar44 + 0x250) = 0;
                                                    *(undefined8 *)(lVar44 + 0x24c) = 0;
                                                    *(undefined8 *)(lVar44 + 0x244) = 0;
                                                    FUN_08a5b7d0(DAT_019142c8,uVar20,uVar13,uVar22,
                                                                 DAT_01914d14,DAT_0191441c,uVar31,
                                                                 &stack0x000002c0,0);
                                                    if (0x12 < *(uint *)(lVar44 + 0x18)) {
                                                      *(undefined4 *)(lVar44 + 0x260) = 0x11;
                                                      *(undefined8 *)(lVar44 + 0x278) = 0;
                                                      *(undefined8 *)(lVar44 + 0x270) = 0;
                                                      *(undefined8 *)(lVar44 + 0x26c) = 0;
                                                      *(undefined8 *)(lVar44 + 0x264) = 0;
                                                      FUN_08a5b7d0(DAT_01914370,uVar6,uVar25,
                                                                   DAT_01914c70,DAT_01914168,
                                                                   DAT_01914374,DAT_01914aa4,
                                                                   &stack0x00000280,0);
                                                      if (0x13 < *(uint *)(lVar44 + 0x18)) {
                                                        *(undefined4 *)(lVar44 + 0x280) = 0x12;
                                                        *(undefined8 *)(lVar44 + 0x298) = 0;
                                                        *(undefined8 *)(lVar44 + 0x290) = 0;
                                                        *(undefined8 *)(lVar44 + 0x28c) = 0;
                                                        *(undefined8 *)(lVar44 + 0x284) = 0;
                                                        FUN_08a5b7d0(DAT_01914d18,DAT_01914e44,
                                                                     DAT_01914f64,uVar35,
                                                                     DAT_0191416c,0x88000000,
                                                                     0x3f800000,&stack0x00000240,0);
                                                        if (0x14 < *(uint *)(lVar44 + 0x18)) {
                                                          *(undefined4 *)(lVar44 + 0x2a0) = 0x13;
                                                          *(undefined8 *)(lVar44 + 0x2b8) = 0;
                                                          *(undefined8 *)(lVar44 + 0x2b0) = 0;
                                                          *(undefined8 *)(lVar44 + 0x2ac) = 0;
                                                          *(undefined8 *)(lVar44 + 0x2a4) = 0;
                                                          FUN_08a5b7d0(DAT_0191509c,uVar17,uVar38,
                                                                       uVar10,DAT_01915008,
                                                                       DAT_01914f68,uVar37,
                                                                       &stack0x00000200,0);
                                                          in_stack_000001e0 = 0;
                                                          uStack00000000000001e8 = 0;
                                                          uStack00000000000001ec = 0;
                                                          in_stack_000001f0 = 0;
                                                          if (0x15 < *(uint *)(lVar44 + 0x18)) {
                                                            *(undefined4 *)(lVar44 + 0x2c0) = 1;
                                                            *(undefined8 *)(lVar44 + 0x2d8) = 0;
                                                            *(undefined8 *)(lVar44 + 0x2d0) = 0;
                                                            *(undefined8 *)(lVar44 + 0x2cc) = 0;
                                                            *(undefined8 *)(lVar44 + 0x2c4) = 0;
                                                            in_stack_000001c0 = 0;
                                                            uStack00000000000001c8 = 0;
                                                            uStack00000000000001cc = 0;
                                                            in_stack_000001d8 = 0;
                                                            uStack00000000000001d0 = 0;
                                                            uStack00000000000001d4 = 0;
                                                            FUN_08a5b7d0(DAT_01914170,uVar32,uVar28,
                                                                         uVar14,DAT_01914378,
                                                                         DAT_019140bc,uVar33,
                                                                         &stack0x000001c0,0);
                                                            uStack00000000000001b4 =
                                                                 CONCAT44(in_stack_000001d8,
                                                                          uStack00000000000001d4);
                                                            uStack00000000000001b0 =
                                                                 uStack00000000000001d0;
                                                            uStack00000000000001a8 =
                                                                 uStack00000000000001c8;
                                                            uStack00000000000001ac =
                                                                 uStack00000000000001cc;
                                                            in_stack_000001a0 = in_stack_000001c0;
                                                            if (0x16 < *(uint *)(lVar44 + 0x18)) {
                                                              *(undefined4 *)(lVar44 + 0x2e0) = 0x15
                                                              ;
                                                              *(undefined8 *)(lVar44 + 0x2f8) =
                                                                   uStack00000000000001b4;
                                                              *(ulong *)(lVar44 + 0x2f0) =
                                                                   CONCAT44(uStack00000000000001d0,
                                                                            uStack00000000000001cc);
                                                              *(ulong *)(lVar44 + 0x2ec) =
                                                                   CONCAT44(uStack00000000000001cc,
                                                                            uStack00000000000001c8);
                                                              *(undefined8 *)(lVar44 + 0x2e4) =
                                                                   in_stack_000001c0;
                                                              in_stack_00000180 = 0;
                                                              uStack0000000000000188 = 0;
                                                              uStack000000000000018c = 0;
                                                              in_stack_00000198 = 0;
                                                              uStack0000000000000190 = 0;
                                                              uStack0000000000000194 = 0;
                                                              FUN_08a5b7d0(DAT_01914dac,uVar2,uVar34
                                                                           ,uVar11,DAT_01914aa8,
                                                                           DAT_01914024,uVar36,
                                                                           &stack0x00000180,0);
                                                              uStack0000000000000174 =
                                                                   CONCAT44(in_stack_00000198,
                                                                            uStack0000000000000194);
                                                              uStack0000000000000170 =
                                                                   uStack0000000000000190;
                                                              uStack0000000000000168 =
                                                                   uStack0000000000000188;
                                                              uStack000000000000016c =
                                                                   uStack000000000000018c;
                                                              in_stack_00000160 = in_stack_00000180;
                                                              if (0x17 < *(uint *)(lVar44 + 0x18)) {
                                                                *(undefined4 *)(lVar44 + 0x300) =
                                                                     0x16;
                                                                *(undefined8 *)(lVar44 + 0x318) =
                                                                     uStack0000000000000174;
                                                                *(ulong *)(lVar44 + 0x310) =
                                                                     CONCAT44(uStack0000000000000190
                                                                              ,
                                                  uStack000000000000018c);
                                                  *(ulong *)(lVar44 + 0x30c) =
                                                       CONCAT44(uStack000000000000018c,
                                                                uStack0000000000000188);
                                                  *(undefined8 *)(lVar44 + 0x304) =
                                                       in_stack_00000180;
                                                  in_stack_00000140 = 0;
                                                  uStack0000000000000148 = 0;
                                                  uStack000000000000014c = 0;
                                                  in_stack_00000158 = 0;
                                                  uStack0000000000000150 = 0;
                                                  uStack0000000000000154 = 0;
                                                  FUN_08a5b7d0(DAT_019150a0,uVar41,uVar39,uVar29,
                                                               DAT_01914d1c,DAT_01914694,uVar3,
                                                               &stack0x00000140,0);
                                                  uStack0000000000000134 =
                                                       CONCAT44(in_stack_00000158,
                                                                uStack0000000000000154);
                                                  uStack0000000000000130 = uStack0000000000000150;
                                                  uStack0000000000000128 = uStack0000000000000148;
                                                  uStack000000000000012c = uStack000000000000014c;
                                                  in_stack_00000120 = in_stack_00000140;
                                                  if (0x18 < *(uint *)(lVar44 + 0x18)) {
                                                    *(undefined4 *)(lVar44 + 800) = 0x17;
                                                    *(undefined8 *)(lVar44 + 0x338) =
                                                         uStack0000000000000134;
                                                    *(ulong *)(lVar44 + 0x330) =
                                                         CONCAT44(uStack0000000000000150,
                                                                  uStack000000000000014c);
                                                    *(ulong *)(lVar44 + 0x32c) =
                                                         CONCAT44(uStack000000000000014c,
                                                                  uStack0000000000000148);
                                                    *(undefined8 *)(lVar44 + 0x324) =
                                                         in_stack_00000140;
                                                    in_stack_00000100 = 0;
                                                    uStack0000000000000108 = 0;
                                                    uStack000000000000010c = 0;
                                                    in_stack_00000118 = 0;
                                                    uStack0000000000000110 = 0;
                                                    uStack0000000000000114 = 0;
                                                    FUN_08a5b7d0(DAT_01914a24,uVar19,uVar7,
                                                                 &stack0x00000100,0);
                                                    if (0x19 < *(uint *)(lVar44 + 0x18)) {
                                                      *(undefined4 *)(lVar44 + 0x340) = 0x18;
                                                      *(ulong *)(lVar44 + 0x358) =
                                                           CONCAT44(in_stack_00000118,
                                                                    uStack0000000000000114);
                                                      *(ulong *)(lVar44 + 0x350) =
                                                           CONCAT44(uStack0000000000000110,
                                                                    uStack000000000000010c);
                                                      *(ulong *)(lVar44 + 0x34c) =
                                                           CONCAT44(uStack000000000000010c,
                                                                    uStack0000000000000108);
                                                      *(undefined8 *)(lVar44 + 0x344) =
                                                           in_stack_00000100;
                                                      if (lVar43 != 0) {
                                                        *(long *)(lVar43 + 0x10) = lVar44;
                                                        thunk_FUN_03d1023c((long *)(lVar43 + 0x10),
                                                                           lVar44);
                                                        plVar45 = (long *)(*(long *)(*unaff_x21 +
                                                                                    0xb8) + 8);
                                                        *plVar45 = lVar43;
                                                        thunk_FUN_03d1023c(plVar45,lVar43);
                                                        return;
                                                      }
                                                      goto LAB_0748a854;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_0748a850;
                                }
                              }
LAB_0748a854:
                    /* WARNING: Subroutine does not return */
                              FUN_03d2d548();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0748a850:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


