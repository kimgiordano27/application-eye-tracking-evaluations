/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SetNotificationShown
ENTRY_POINT: 07409bac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SetNotificationShown(void)

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
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  long lVar68;
  long lVar69;
  long *plVar70;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar71;
  ulong uVar72;
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
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08eb1b60);
  *(undefined1 *)(unaff_x19 + 0xa33) = 1;
  lVar68 = thunk_FUN_03cf5234(*unaff_x21);
  FUN_07409afc();
  lVar69 = FUN_03c8f97c(*unaff_x22,0x1a);
  uVar18 = DAT_018b0814;
  uVar1 = DAT_018b04d8;
  FUN_085e9668(DAT_018aff94,DAT_018b04d8,DAT_018b0814,0,0,0,0x3f800000,&stack0x00000e00,0);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if (lVar69 == 0) goto LAB_0740b730;
  *(undefined8 *)(unaff_x23 + 0x74) = *(undefined8 *)(unaff_x23 + 0x94);
  *(undefined8 *)(unaff_x23 + 0x6c) = *(undefined8 *)(unaff_x23 + 0x8c);
  if (*(int *)(lVar69 + 0x18) != 0) {
    *(undefined4 *)(lVar69 + 0x20) = 1;
    uVar71 = *(undefined8 *)(unaff_x23 + 0x6c);
    *(undefined8 *)(lVar69 + 0x38) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(lVar69 + 0x30) = uVar71;
    *(undefined8 *)(lVar69 + 0x2c) = 0;
    *(undefined8 *)(lVar69 + 0x24) = 0;
    FUN_085e9668(0,0,0,0,0,0,0x3f800000,&stack0x00000da0,0);
    *(undefined8 *)(unaff_x23 + 0x34) = *(undefined8 *)(unaff_x23 + 0x54);
    *(undefined8 *)(unaff_x23 + 0x2c) = *(undefined8 *)(unaff_x23 + 0x4c);
    if (1 < *(uint *)(lVar69 + 0x18)) {
      *(undefined4 *)(lVar69 + 0x40) = 0xffffffff;
      uVar71 = *(undefined8 *)(unaff_x23 + 0x2c);
      *(undefined8 *)(lVar69 + 0x58) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(lVar69 + 0x50) = uVar71;
      uVar23 = DAT_018b0fec;
      uVar59 = DAT_018b0ed4;
      uVar37 = DAT_018b09b8;
      uVar35 = DAT_018b0928;
      uVar11 = DAT_018b06ec;
      uVar13 = DAT_018b04dc;
      uVar2 = DAT_018b02a0;
      *(undefined8 *)(lVar69 + 0x4c) = 0;
      *(undefined8 *)(lVar69 + 0x44) = 0;
      FUN_085e9668(uVar11,uVar59,uVar35,uVar13,uVar2,uVar37,uVar23,&stack0x00000d60,0);
      uVar71 = *(undefined8 *)(unaff_x23 + 0x14);
      uVar72 = *(ulong *)(unaff_x23 + 0xc);
      if (2 < *(uint *)(lVar69 + 0x18)) {
        *(undefined4 *)(lVar69 + 0x60) = 1;
        *(undefined8 *)(lVar69 + 0x78) = uVar71;
        *(ulong *)(lVar69 + 0x70) = uVar72 & 0xffffffff00000000;
        uVar2 = DAT_018b0630;
        *(undefined8 *)(lVar69 + 0x6c) = 0;
        *(undefined8 *)(lVar69 + 100) = 0;
        FUN_085e9668(uVar2,DAT_018b0370,DAT_018b0ff0,DAT_018b0898,DAT_018b089c,DAT_018afee0,
                     DAT_018b0634,&stack0x00000d20,0);
        if (3 < *(uint *)(lVar69 + 0x18)) {
          *(undefined4 *)(lVar69 + 0x80) = 2;
          *(undefined8 *)(lVar69 + 0x98) = 0;
          *(undefined8 *)(lVar69 + 0x90) = 0;
          uVar2 = DAT_018afdc8;
          *(undefined8 *)(lVar69 + 0x8c) = 0;
          *(undefined8 *)(lVar69 + 0x84) = 0;
          FUN_085e9668(uVar2,DAT_018b0d04,DAT_018b0f64,DAT_018afd2c,DAT_018b01fc,DAT_018b0c38,
                       DAT_018b04e0,&stack0x00000ce0,0);
          if (4 < *(uint *)(lVar69 + 0x18)) {
            *(undefined4 *)(lVar69 + 0xa0) = 3;
            *(undefined8 *)(lVar69 + 0xb8) = 0;
            *(undefined8 *)(lVar69 + 0xb0) = 0;
            *(undefined8 *)(lVar69 + 0xac) = 0;
            *(undefined8 *)(lVar69 + 0xa4) = 0;
            uVar2 = DAT_018b0818;
            FUN_085e9668(DAT_018b0d08,DAT_018b0a6c,DAT_018b04e4,0x87000000,DAT_018b0818,0xa2800000,
                         0x3f800000,&stack0x00000ca0,0);
            if (5 < *(uint *)(lVar69 + 0x18)) {
              *(undefined4 *)(lVar69 + 0xc0) = 4;
              uVar37 = DAT_018b0ed8;
              uVar13 = DAT_018b0200;
              *(undefined8 *)(lVar69 + 0xd8) = 0;
              *(undefined8 *)(lVar69 + 0xd0) = 0;
              uVar11 = DAT_018b0638;
              *(undefined8 *)(lVar69 + 0xcc) = 0;
              *(undefined8 *)(lVar69 + 0xc4) = 0;
              FUN_085e9668(uVar11,uVar37,uVar13,0,0,0,0x3f800000,&stack0x00000c60,0);
              if (6 < *(uint *)(lVar69 + 0x18)) {
                *(undefined4 *)(lVar69 + 0xe0) = 1;
                *(undefined8 *)(lVar69 + 0xf8) = 0;
                *(undefined8 *)(lVar69 + 0xf0) = 0;
                uVar66 = DAT_018b1094;
                uVar30 = DAT_018b1090;
                uVar54 = DAT_018b0da8;
                uVar51 = DAT_018b0d0c;
                uVar47 = DAT_018b0ba8;
                uVar23 = DAT_018b04e8;
                uVar11 = DAT_018b0188;
                *(undefined8 *)(lVar69 + 0xec) = 0;
                *(undefined8 *)(lVar69 + 0xe4) = 0;
                FUN_085e9668(uVar30,uVar51,uVar47,uVar23,uVar54,uVar11,&stack0x00000c20,0);
                if (7 < *(uint *)(lVar69 + 0x18)) {
                  *(undefined4 *)(lVar69 + 0x100) = 6;
                  *(undefined8 *)(lVar69 + 0x118) = 0;
                  *(undefined8 *)(lVar69 + 0x110) = 0;
                  *(undefined8 *)(lVar69 + 0x10c) = 0;
                  *(undefined8 *)(lVar69 + 0x104) = 0;
                  uVar54 = DAT_018b1098;
                  uVar11 = DAT_018b08a0;
                  FUN_085e9668(DAT_018afd30,DAT_018aff98,DAT_018b0798,DAT_018b08a0,DAT_018b08a4,
                               DAT_018afee4,&stack0x00000be0,0);
                  if (8 < *(uint *)(lVar69 + 0x18)) {
                    *(undefined4 *)(lVar69 + 0x120) = 7;
                    *(undefined8 *)(lVar69 + 0x138) = 0;
                    *(undefined8 *)(lVar69 + 0x130) = 0;
                    *(undefined8 *)(lVar69 + 300) = 0;
                    *(undefined8 *)(lVar69 + 0x124) = 0;
                    uVar63 = DAT_018b0ff4;
                    uVar40 = DAT_018b0a70;
                    uVar38 = DAT_018b09bc;
                    uVar30 = DAT_018b06f4;
                    FUN_085e9668(DAT_018b079c,&stack0x00000ba0,0);
                    if (9 < *(uint *)(lVar69 + 0x18)) {
                      *(undefined4 *)(lVar69 + 0x140) = 8;
                      *(undefined8 *)(lVar69 + 0x158) = 0;
                      *(undefined8 *)(lVar69 + 0x150) = 0;
                      *(undefined8 *)(lVar69 + 0x14c) = 0;
                      *(undefined8 *)(lVar69 + 0x144) = 0;
                      FUN_085e9668(DAT_018b092c,DAT_018afdcc,DAT_018b0d10,0,DAT_018b0f68,0,
                                   0x3f800000,&stack0x00000b60,0);
                      if (10 < *(uint *)(lVar69 + 0x18)) {
                        *(undefined4 *)(lVar69 + 0x160) = 9;
                        *(undefined8 *)(lVar69 + 0x178) = 0;
                        *(undefined8 *)(lVar69 + 0x170) = 0;
                        *(undefined8 *)(lVar69 + 0x16c) = 0;
                        *(undefined8 *)(lVar69 + 0x164) = 0;
                        uVar19 = DAT_018b0430;
                        uVar3 = DAT_018afe48;
                        FUN_085e9668(DAT_018aff9c,DAT_018b0430,DAT_018afe48,0,0,0,0x3f800000,
                                     &stack0x00000b20,0);
                        if (0xb < *(uint *)(lVar69 + 0x18)) {
                          *(undefined4 *)(lVar69 + 0x180) = 1;
                          *(undefined8 *)(lVar69 + 0x198) = 0;
                          *(undefined8 *)(lVar69 + 400) = 0;
                          *(undefined8 *)(lVar69 + 0x18c) = 0;
                          *(undefined8 *)(lVar69 + 0x184) = 0;
                          uVar31 = DAT_018b06f8;
                          uVar24 = DAT_018b04ec;
                          uVar16 = DAT_018b0374;
                          uVar8 = DAT_018b004c;
                          FUN_085e9668(DAT_018b063c,&stack0x00000ae0,0);
                          if (0xc < *(uint *)(lVar69 + 0x18)) {
                            *(undefined4 *)(lVar69 + 0x1a0) = 0xb;
                            *(undefined8 *)(lVar69 + 0x1b8) = 0;
                            *(undefined8 *)(lVar69 + 0x1b0) = 0;
                            *(undefined8 *)(lVar69 + 0x1ac) = 0;
                            *(undefined8 *)(lVar69 + 0x1a4) = 0;
                            uVar33 = DAT_018b08a8;
                            uVar12 = DAT_018b018c;
                            uVar7 = DAT_018affa4;
                            uVar6 = DAT_018affa0;
                            FUN_085e9668(DAT_018b05a0,&stack0x00000aa0,0);
                            if (0xd < *(uint *)(lVar69 + 0x18)) {
                              *(undefined4 *)(lVar69 + 0x1c0) = 0xc;
                              *(undefined8 *)(lVar69 + 0x1d8) = 0;
                              *(undefined8 *)(lVar69 + 0x1d0) = 0;
                              *(undefined8 *)(lVar69 + 0x1cc) = 0;
                              *(undefined8 *)(lVar69 + 0x1c4) = 0;
                              uVar41 = DAT_018b0a74;
                              uVar39 = DAT_018b09c4;
                              uVar28 = DAT_018b0640;
                              uVar25 = DAT_018b04f0;
                              FUN_085e9668(DAT_018b02a4,&stack0x00000a60,0);
                              if (0xe < *(uint *)(lVar69 + 0x18)) {
                                *(undefined4 *)(lVar69 + 0x1e0) = 0xd;
                                *(undefined8 *)(lVar69 + 0x1f8) = 0;
                                *(undefined8 *)(lVar69 + 0x1f0) = 0;
                                *(undefined8 *)(lVar69 + 0x1ec) = 0;
                                *(undefined8 *)(lVar69 + 0x1e4) = 0;
                                uVar67 = DAT_018b10a4;
                                uVar55 = DAT_018b0dac;
                                uVar43 = DAT_018b0af4;
                                FUN_085e9668(DAT_018afe4c,DAT_018b0af4,DAT_018b10a4,DAT_018b0dac,
                                             0x22800000,0x23000000,0x3f800000,&stack0x00000a20,0);
                                if (0xf < *(uint *)(lVar69 + 0x18)) {
                                  *(undefined4 *)(lVar69 + 0x200) = 0xe;
                                  *(undefined8 *)(lVar69 + 0x218) = 0;
                                  *(undefined8 *)(lVar69 + 0x210) = 0;
                                  *(undefined8 *)(lVar69 + 0x20c) = 0;
                                  *(undefined8 *)(lVar69 + 0x204) = 0;
                                  uVar48 = DAT_018b0bac;
                                  uVar44 = DAT_018b0af8;
                                  FUN_085e9668(DAT_018afd34,DAT_018b0bac,DAT_018b0af8,0,0,0,
                                               0x3f800000,&stack0x000009e0,0);
                                  if (0x10 < *(uint *)(lVar69 + 0x18)) {
                                    *(undefined4 *)(lVar69 + 0x220) = 1;
                                    *(undefined8 *)(lVar69 + 0x238) = 0;
                                    *(undefined8 *)(lVar69 + 0x230) = 0;
                                    *(undefined8 *)(lVar69 + 0x22c) = 0;
                                    *(undefined8 *)(lVar69 + 0x224) = 0;
                                    uVar64 = DAT_018b0ff8;
                                    uVar26 = DAT_018b04f4;
                                    uVar20 = DAT_018b0434;
                                    uVar14 = DAT_018b0204;
                                    FUN_085e9668(DAT_018b0378,&stack0x000009a0,0);
                                    if (0x11 < *(uint *)(lVar69 + 0x18)) {
                                      *(undefined4 *)(lVar69 + 0x240) = 0x10;
                                      *(undefined8 *)(lVar69 + 600) = 0;
                                      *(undefined8 *)(lVar69 + 0x250) = 0;
                                      *(undefined8 *)(lVar69 + 0x24c) = 0;
                                      *(undefined8 *)(lVar69 + 0x244) = 0;
                                      uVar49 = DAT_018b0c40;
                                      uVar34 = DAT_018b08ac;
                                      uVar32 = DAT_018b07a0;
                                      uVar21 = DAT_018b043c;
                                      FUN_085e9668(DAT_018b0438,&stack0x00000960,0);
                                      if (0x12 < *(uint *)(lVar69 + 0x18)) {
                                        *(undefined4 *)(lVar69 + 0x260) = 0x11;
                                        *(undefined8 *)(lVar69 + 0x278) = 0;
                                        *(undefined8 *)(lVar69 + 0x270) = 0;
                                        *(undefined8 *)(lVar69 + 0x26c) = 0;
                                        *(undefined8 *)(lVar69 + 0x264) = 0;
                                        uVar42 = DAT_018b0a78;
                                        uVar9 = DAT_018b0050;
                                        FUN_085e9668(DAT_018afdd4,DAT_018b0050,DAT_018b0a78,
                                                     DAT_018b037c,DAT_018b08b0,DAT_018afd38,
                                                     DAT_018b0440,&stack0x00000920,0);
                                        if (0x13 < *(uint *)(lVar69 + 0x18)) {
                                          *(undefined4 *)(lVar69 + 0x280) = 0x12;
                                          *(undefined8 *)(lVar69 + 0x298) = 0;
                                          *(undefined8 *)(lVar69 + 0x290) = 0;
                                          *(undefined8 *)(lVar69 + 0x28c) = 0;
                                          *(undefined8 *)(lVar69 + 0x284) = 0;
                                          FUN_085e9668(DAT_018affa8,DAT_018b05a4,DAT_018afdd8,
                                                       DAT_018b0ffc,uVar2,DAT_018b05a8,0x3f800000,
                                                       &stack0x000008e0,0);
                                          if (0x14 < *(uint *)(lVar69 + 0x18)) {
                                            *(undefined4 *)(lVar69 + 0x2a0) = 0x13;
                                            *(undefined8 *)(lVar69 + 0x2b8) = 0;
                                            *(undefined8 *)(lVar69 + 0x2b0) = 0;
                                            *(undefined8 *)(lVar69 + 0x2ac) = 0;
                                            *(undefined8 *)(lVar69 + 0x2a4) = 0;
                                            uVar60 = DAT_018b0f6c;
                                            uVar57 = DAT_018b0e54;
                                            uVar27 = DAT_018b05ac;
                                            uVar15 = DAT_018b02a8;
                                            FUN_085e9668(DAT_018affac,&stack0x000008a0,0);
                                            if (0x15 < *(uint *)(lVar69 + 0x18)) {
                                              *(undefined4 *)(lVar69 + 0x2c0) = 1;
                                              *(undefined8 *)(lVar69 + 0x2d8) = 0;
                                              *(undefined8 *)(lVar69 + 0x2d0) = 0;
                                              *(undefined8 *)(lVar69 + 0x2cc) = 0;
                                              *(undefined8 *)(lVar69 + 0x2c4) = 0;
                                              uVar52 = DAT_018b0d18;
                                              uVar50 = DAT_018b0c44;
                                              uVar45 = DAT_018b0afc;
                                              uVar22 = DAT_018b0444;
                                              FUN_085e9668(DAT_018afd3c,&stack0x00000860,0);
                                              if (0x16 < *(uint *)(lVar69 + 0x18)) {
                                                *(undefined4 *)(lVar69 + 0x2e0) = 0x15;
                                                *(undefined8 *)(lVar69 + 0x2f8) = 0;
                                                *(undefined8 *)(lVar69 + 0x2f0) = 0;
                                                *(undefined8 *)(lVar69 + 0x2ec) = 0;
                                                *(undefined8 *)(lVar69 + 0x2e4) = 0;
                                                uVar56 = DAT_018b0db0;
                                                uVar53 = DAT_018b0d1c;
                                                uVar17 = DAT_018b0380;
                                                uVar4 = DAT_018afe50;
                                                FUN_085e9668(DAT_018b02ac,&stack0x00000820,0);
                                                if (0x17 < *(uint *)(lVar69 + 0x18)) {
                                                  *(undefined4 *)(lVar69 + 0x300) = 0x16;
                                                  *(undefined8 *)(lVar69 + 0x318) = 0;
                                                  *(undefined8 *)(lVar69 + 0x310) = 0;
                                                  *(undefined8 *)(lVar69 + 0x30c) = 0;
                                                  *(undefined8 *)(lVar69 + 0x304) = 0;
                                                  uVar65 = DAT_018b1000;
                                                  uVar61 = DAT_018b0f70;
                                                  uVar46 = DAT_018b0b08;
                                                  uVar5 = DAT_018afee8;
                                                  FUN_085e9668(DAT_018b09c8,&stack0x000007e0,0);
                                                  if (0x18 < *(uint *)(lVar69 + 0x18)) {
                                                    *(undefined4 *)(lVar69 + 800) = 0x17;
                                                    *(undefined8 *)(lVar69 + 0x338) = 0;
                                                    *(undefined8 *)(lVar69 + 0x330) = 0;
                                                    *(undefined8 *)(lVar69 + 0x32c) = 0;
                                                    *(undefined8 *)(lVar69 + 0x324) = 0;
                                                    uVar29 = DAT_018b0648;
                                                    uVar10 = DAT_018b00f4;
                                                    FUN_085e9668(DAT_018b0e5c,DAT_018b0648,
                                                                 DAT_018b00f4,uVar2,uVar55,
                                                                 DAT_018b00f8,0x3f800000,
                                                                 &stack0x000007a0,0);
                                                    if (0x19 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 0x340) = 0x18;
                                                      *(undefined8 *)(lVar69 + 0x358) = 0;
                                                      *(undefined8 *)(lVar69 + 0x350) = 0;
                                                      *(undefined8 *)(lVar69 + 0x34c) = 0;
                                                      *(undefined8 *)(lVar69 + 0x344) = 0;
                                                      if (lVar68 != 0) {
                                                        *(long *)(lVar68 + 0x10) = lVar69;
                                                        thunk_FUN_03d233cc((long *)(lVar68 + 0x10),
                                                                           lVar69);
                                                        **(long **)(*unaff_x21 + 0xb8) = lVar68;
                                                        thunk_FUN_03d233cc(*(undefined8 *)
                                                                            (*unaff_x21 + 0xb8),
                                                                           lVar68);
                                                        lVar68 = thunk_FUN_03cf5234(*unaff_x21);
                                                        FUN_07409afc();
                                                        lVar69 = FUN_03c8f97c(*unaff_x22,0x1a);
                                                        FUN_085e9668(DAT_018b0c48,uVar1,uVar18,0,0,0
                                                                     ,0x3f800000,&stack0x00000760,0)
                                                        ;
                                                        if (lVar69 != 0) {
                                                          if (*(int *)(lVar69 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar69 + 0x20) = 1;
                                                            *(undefined8 *)(lVar69 + 0x38) = 0;
                                                            *(undefined8 *)(lVar69 + 0x30) = 0;
                                                            *(undefined8 *)(lVar69 + 0x2c) = 0;
                                                            *(undefined8 *)(lVar69 + 0x24) = 0;
                                                            FUN_085e9668(0,0,0,0,0,0,0x3f800000,
                                                                         &stack0x00000700,0);
                                                            if (1 < *(uint *)(lVar69 + 0x18)) {
                                                              *(undefined4 *)(lVar69 + 0x40) =
                                                                   0xffffffff;
                                                              *(undefined8 *)(lVar69 + 0x58) = 0;
                                                              *(undefined8 *)(lVar69 + 0x50) = 0;
                                                              uVar62 = DAT_018b0f74;
                                                              uVar58 = DAT_018b0e60;
                                                              uVar36 = DAT_018b0930;
                                                              uVar18 = DAT_018b0384;
                                                              uVar1 = DAT_018b020c;
                                                              *(undefined8 *)(lVar69 + 0x4c) = 0;
                                                              *(undefined8 *)(lVar69 + 0x44) = 0;
                                                              FUN_085e9668(uVar1,uVar59,uVar35,
                                                                           uVar62,uVar18,uVar36,
                                                                           uVar58,&stack0x000006c0,0
                                                                          );
                                                              if (2 < *(uint *)(lVar69 + 0x18)) {
                                                                *(undefined4 *)(lVar69 + 0x60) = 1;
                                                                *(undefined8 *)(lVar69 + 0x78) = 0;
                                                                *(undefined8 *)(lVar69 + 0x70) = 0;
                                                                uVar1 = DAT_018b0448;
                                                                *(undefined8 *)(lVar69 + 0x6c) = 0;
                                                                *(undefined8 *)(lVar69 + 100) = 0;
                                                                FUN_085e9668(uVar1,DAT_018b044c,
                                                                             DAT_018b0f78,
                                                                             DAT_018b05b0,
                                                                             DAT_018b05b4,
                                                                             DAT_018afd44,
                                                                             DAT_018b02b0,
                                                                             &stack0x00000680,0);
                                                                if (3 < *(uint *)(lVar69 + 0x18)) {
                                                                  *(undefined4 *)(lVar69 + 0x80) = 2
                                                                  ;
                                                                  *(undefined8 *)(lVar69 + 0x98) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar69 + 0x90) = 0
                                                                  ;
                                                                  uVar1 = DAT_018b0b0c;
                                                                  *(undefined8 *)(lVar69 + 0x8c) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar69 + 0x84) = 0
                                                                  ;
                                                                  FUN_085e9668(uVar1,DAT_018b05b8,
                                                                               DAT_018b0f7c,
                                                                               DAT_018b081c,
                                                                               DAT_018b0edc,
                                                                               DAT_018b06fc,
                                                                               DAT_018b0e64,
                                                                               &stack0x00000640,0);
                                                                  if (4 < *(uint *)(lVar69 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar69 + 0xa0) =
                                                                         3;
                                                                    *(undefined8 *)(lVar69 + 0xb8) =
                                                                         0;
                                                                    *(undefined8 *)(lVar69 + 0xb0) =
                                                                         0;
                                                                    *(undefined8 *)(lVar69 + 0xac) =
                                                                         0;
                                                                    *(undefined8 *)(lVar69 + 0xa4) =
                                                                         0;
                                                                    FUN_085e9668(DAT_018b04fc,
                                                                                 DAT_018b07a4,
                                                                                 DAT_018b064c,
                                                                                 DAT_018b0934,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000600,0)
                                                                    ;
                                                                    if (5 < *(uint *)(lVar69 + 0x18)
                                                                       ) {
                                                                      *(undefined4 *)(lVar69 + 0xc0)
                                                                           = 4;
                                                                      *(undefined8 *)(lVar69 + 0xd8)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar69 + 0xd0)
                                                                           = 0;
                                                                      uVar1 = DAT_018afd48;
                                                                      *(undefined8 *)(lVar69 + 0xcc)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar69 + 0xc4)
                                                                           = 0;
                                                                      FUN_085e9668(uVar1,uVar37,
                                                                                   uVar13,0,0,0,
                                                                                   0x3f800000,
                                                                                   &stack0x000005c0,
                                                                                   0);
                                                                      if (6 < *(uint *)(lVar69 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar69 + 0xe0) = 1;
                                                    *(undefined8 *)(lVar69 + 0xf8) = 0;
                                                    *(undefined8 *)(lVar69 + 0xf0) = 0;
                                                    *(undefined8 *)(lVar69 + 0xec) = 0;
                                                    *(undefined8 *)(lVar69 + 0xe4) = 0;
                                                    FUN_085e9668(DAT_018b10ac,uVar51,uVar47,uVar23,
                                                                 DAT_018b0f80,DAT_018b0b10,uVar66,
                                                                 &stack0x00000580,0);
                                                    if (7 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 0x100) = 6;
                                                      *(undefined8 *)(lVar69 + 0x118) = 0;
                                                      *(undefined8 *)(lVar69 + 0x110) = 0;
                                                      *(undefined8 *)(lVar69 + 0x10c) = 0;
                                                      *(undefined8 *)(lVar69 + 0x104) = 0;
                                                      FUN_085e9668(DAT_018b05bc,DAT_018b0ee0,
                                                                   DAT_018b0210,uVar11,DAT_018b0500,
                                                                   DAT_018b0bb0,uVar54,
                                                                   &stack0x00000540,0);
                                                      if (8 < *(uint *)(lVar69 + 0x18)) {
                                                        *(undefined4 *)(lVar69 + 0x120) = 7;
                                                        *(undefined8 *)(lVar69 + 0x138) = 0;
                                                        *(undefined8 *)(lVar69 + 0x130) = 0;
                                                        *(undefined8 *)(lVar69 + 300) = 0;
                                                        *(undefined8 *)(lVar69 + 0x124) = 0;
                                                        FUN_085e9668(DAT_018b09cc,uVar38,uVar63,
                                                                     uVar40,DAT_018b0190,
                                                                     DAT_018b0214,uVar30,
                                                                     &stack0x00000500,0);
                                                        if (9 < *(uint *)(lVar69 + 0x18)) {
                                                          *(undefined4 *)(lVar69 + 0x140) = 8;
                                                          *(undefined8 *)(lVar69 + 0x158) = 0;
                                                          *(undefined8 *)(lVar69 + 0x150) = 0;
                                                          *(undefined8 *)(lVar69 + 0x14c) = 0;
                                                          *(undefined8 *)(lVar69 + 0x144) = 0;
                                                          FUN_085e9668(DAT_018b0450,DAT_018b05c0,
                                                                       DAT_018b0bb4,0,DAT_018b0504,0
                                                                       ,0x3f800000,&stack0x000004c0,
                                                                       0);
                                                          if (10 < *(uint *)(lVar69 + 0x18)) {
                                                            *(undefined4 *)(lVar69 + 0x160) = 9;
                                                            *(undefined8 *)(lVar69 + 0x178) = 0;
                                                            *(undefined8 *)(lVar69 + 0x170) = 0;
                                                            *(undefined8 *)(lVar69 + 0x16c) = 0;
                                                            *(undefined8 *)(lVar69 + 0x164) = 0;
                                                            FUN_085e9668(DAT_018b0b14,uVar19,uVar3,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000480,0);
                                                            if (0xb < *(uint *)(lVar69 + 0x18)) {
                                                              *(undefined4 *)(lVar69 + 0x180) = 1;
                                                              *(undefined8 *)(lVar69 + 0x198) = 0;
                                                              *(undefined8 *)(lVar69 + 400) = 0;
                                                              *(undefined8 *)(lVar69 + 0x18c) = 0;
                                                              *(undefined8 *)(lVar69 + 0x184) = 0;
                                                              FUN_085e9668(DAT_018b0bb8,uVar31,
                                                                           uVar24,uVar8,DAT_018b08b8
                                                                           ,DAT_018b0388,uVar16,
                                                                           &stack0x00000440,0);
                                                              if (0xc < *(uint *)(lVar69 + 0x18)) {
                                                                *(undefined4 *)(lVar69 + 0x1a0) =
                                                                     0xb;
                                                                *(undefined8 *)(lVar69 + 0x1b8) = 0;
                                                                *(undefined8 *)(lVar69 + 0x1b0) = 0;
                                                                *(undefined8 *)(lVar69 + 0x1ac) = 0;
                                                                *(undefined8 *)(lVar69 + 0x1a4) = 0;
                                                                FUN_085e9668(DAT_018b05c4,uVar12,
                                                                             uVar33,uVar6,
                                                                             DAT_018b0650,
                                                                             DAT_018b08bc,uVar7,
                                                                             &stack0x00000400,0);
                                                                if (0xd < *(uint *)(lVar69 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar69 + 0x1c0) =
                                                                       0xc;
                                                                  *(undefined8 *)(lVar69 + 0x1d8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar69 + 0x1d0) =
                                                                       0;
                                                                  *(undefined8 *)(lVar69 + 0x1cc) =
                                                                       0;
                                                                  *(undefined8 *)(lVar69 + 0x1c4) =
                                                                       0;
                                                                  FUN_085e9668(DAT_018afd4c,uVar41,
                                                                               uVar28,uVar25,
                                                                               DAT_018b08c0,
                                                                               DAT_018b0938,uVar39,
                                                                               &stack0x000003c0,0);
                                                                  if (0xe < *(uint *)(lVar69 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar69 + 0x1e0)
                                                                         = 0xd;
                                                                    *(undefined8 *)(lVar69 + 0x1f8)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar69 + 0x1f0)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar69 + 0x1ec)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar69 + 0x1e4)
                                                                         = 0;
                                                                    FUN_085e9668(DAT_018b0820,uVar43
                                                                                 ,uVar67,uVar55,
                                                                                 0xa2800000,
                                                                                 0xa3000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000380,0)
                                                                    ;
                                                                    if (0xf < *(uint *)(lVar69 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar69 + 0x200) = 0xe;
                                                    *(undefined8 *)(lVar69 + 0x218) = 0;
                                                    *(undefined8 *)(lVar69 + 0x210) = 0;
                                                    *(undefined8 *)(lVar69 + 0x20c) = 0;
                                                    *(undefined8 *)(lVar69 + 0x204) = 0;
                                                    FUN_085e9668(DAT_018afddc,uVar48,uVar44,0,0,0,
                                                                 0x3f800000,&stack0x00000340,0);
                                                    if (0x10 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 0x220) = 1;
                                                      *(undefined8 *)(lVar69 + 0x238) = 0;
                                                      *(undefined8 *)(lVar69 + 0x230) = 0;
                                                      *(undefined8 *)(lVar69 + 0x22c) = 0;
                                                      *(undefined8 *)(lVar69 + 0x224) = 0;
                                                      FUN_085e9668(DAT_018b038c,uVar26,uVar14,uVar20
                                                                   ,DAT_018b10b0,DAT_018b1004,uVar64
                                                                   ,&stack0x00000300,0);
                                                      if (0x11 < *(uint *)(lVar69 + 0x18)) {
                                                        *(undefined4 *)(lVar69 + 0x240) = 0x10;
                                                        *(undefined8 *)(lVar69 + 600) = 0;
                                                        *(undefined8 *)(lVar69 + 0x250) = 0;
                                                        *(undefined8 *)(lVar69 + 0x24c) = 0;
                                                        *(undefined8 *)(lVar69 + 0x244) = 0;
                                                        FUN_085e9668(DAT_018b0054,uVar32,uVar21,
                                                                     uVar34,DAT_018b0b18,
                                                                     DAT_018b0194,uVar49,
                                                                     &stack0x000002c0,0);
                                                        if (0x12 < *(uint *)(lVar69 + 0x18)) {
                                                          *(undefined4 *)(lVar69 + 0x260) = 0x11;
                                                          *(undefined8 *)(lVar69 + 0x278) = 0;
                                                          *(undefined8 *)(lVar69 + 0x270) = 0;
                                                          *(undefined8 *)(lVar69 + 0x26c) = 0;
                                                          *(undefined8 *)(lVar69 + 0x264) = 0;
                                                          FUN_085e9668(DAT_018b00fc,uVar9,uVar42,
                                                                       DAT_018b0a7c,DAT_018afeec,
                                                                       DAT_018b0100,DAT_018b08c4,
                                                                       &stack0x00000280,0);
                                                          if (0x13 < *(uint *)(lVar69 + 0x18)) {
                                                            *(undefined4 *)(lVar69 + 0x280) = 0x12;
                                                            *(undefined8 *)(lVar69 + 0x298) = 0;
                                                            *(undefined8 *)(lVar69 + 0x290) = 0;
                                                            *(undefined8 *)(lVar69 + 0x28c) = 0;
                                                            *(undefined8 *)(lVar69 + 0x284) = 0;
                                                            uVar1 = DAT_018afef0;
                                                            FUN_085e9668(DAT_018b0b1c,DAT_018b0c4c,
                                                                         DAT_018b0db4,uVar55,
                                                                         DAT_018afef0,0x88000000,
                                                                         0x3f800000,&stack0x00000240
                                                                         ,0);
                                                            if (0x14 < *(uint *)(lVar69 + 0x18)) {
                                                              *(undefined4 *)(lVar69 + 0x2a0) = 0x13
                                                              ;
                                                              *(undefined8 *)(lVar69 + 0x2b8) = 0;
                                                              *(undefined8 *)(lVar69 + 0x2b0) = 0;
                                                              *(undefined8 *)(lVar69 + 0x2ac) = 0;
                                                              *(undefined8 *)(lVar69 + 0x2a4) = 0;
                                                              FUN_085e9668(DAT_018b0ee4,uVar27,
                                                                           uVar60,uVar15,
                                                                           DAT_018b0e68,DAT_018b0db8
                                                                           ,uVar57,&stack0x00000200,
                                                                           0);
                                                              in_stack_000001e0 = 0;
                                                              uStack00000000000001e8 = 0;
                                                              uStack00000000000001ec = 0;
                                                              in_stack_000001f0 = 0;
                                                              if (0x15 < *(uint *)(lVar69 + 0x18)) {
                                                                *(undefined4 *)(lVar69 + 0x2c0) = 1;
                                                                *(undefined8 *)(lVar69 + 0x2d8) = 0;
                                                                *(undefined8 *)(lVar69 + 0x2d0) = 0;
                                                                *(undefined8 *)(lVar69 + 0x2cc) = 0;
                                                                *(undefined8 *)(lVar69 + 0x2c4) = 0;
                                                                in_stack_000001c0 = 0;
                                                                uStack00000000000001c8 = 0;
                                                                uStack00000000000001cc = 0;
                                                                in_stack_000001d8 = 0;
                                                                uStack00000000000001d0 = 0;
                                                                uStack00000000000001d4 = 0;
                                                                FUN_085e9668(DAT_018afef4,uVar50,
                                                                             uVar45,uVar22,
                                                                             DAT_018b0104,
                                                                             DAT_018afe54,uVar52,
                                                                             &stack0x000001c0,0);
                                                                uStack00000000000001b4 =
                                                                     CONCAT44(in_stack_000001d8,
                                                                              uStack00000000000001d4
                                                                             );
                                                                uStack00000000000001b0 =
                                                                     uStack00000000000001d0;
                                                                uStack00000000000001a8 =
                                                                     uStack00000000000001c8;
                                                                uStack00000000000001ac =
                                                                     uStack00000000000001cc;
                                                                in_stack_000001a0 =
                                                                     in_stack_000001c0;
                                                                if (0x16 < *(uint *)(lVar69 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar69 + 0x2e0) =
                                                                       0x15;
                                                                  *(undefined8 *)(lVar69 + 0x2f8) =
                                                                       uStack00000000000001b4;
                                                                  *(ulong *)(lVar69 + 0x2f0) =
                                                                       CONCAT44(
                                                  uStack00000000000001d0,uStack00000000000001cc);
                                                  *(ulong *)(lVar69 + 0x2ec) =
                                                       CONCAT44(uStack00000000000001cc,
                                                                uStack00000000000001c8);
                                                  *(undefined8 *)(lVar69 + 0x2e4) =
                                                       in_stack_000001c0;
                                                  in_stack_00000180 = 0;
                                                  uStack0000000000000188 = 0;
                                                  uStack000000000000018c = 0;
                                                  in_stack_00000198 = 0;
                                                  uStack0000000000000190 = 0;
                                                  uStack0000000000000194 = 0;
                                                  FUN_085e9668(DAT_018b0bbc,uVar4,uVar53,uVar17,
                                                               DAT_018b08c8,DAT_018afde0,uVar56,
                                                               &stack0x00000180,0);
                                                  uStack0000000000000174 =
                                                       CONCAT44(in_stack_00000198,
                                                                uStack0000000000000194);
                                                  uStack0000000000000170 = uStack0000000000000190;
                                                  uStack0000000000000168 = uStack0000000000000188;
                                                  uStack000000000000016c = uStack000000000000018c;
                                                  in_stack_00000160 = in_stack_00000180;
                                                  if (0x17 < *(uint *)(lVar69 + 0x18)) {
                                                    *(undefined4 *)(lVar69 + 0x300) = 0x16;
                                                    *(undefined8 *)(lVar69 + 0x318) =
                                                         uStack0000000000000174;
                                                    *(ulong *)(lVar69 + 0x310) =
                                                         CONCAT44(uStack0000000000000190,
                                                                  uStack000000000000018c);
                                                    *(ulong *)(lVar69 + 0x30c) =
                                                         CONCAT44(uStack000000000000018c,
                                                                  uStack0000000000000188);
                                                    *(undefined8 *)(lVar69 + 0x304) =
                                                         in_stack_00000180;
                                                    in_stack_00000140 = 0;
                                                    uStack0000000000000148 = 0;
                                                    uStack000000000000014c = 0;
                                                    in_stack_00000158 = 0;
                                                    uStack0000000000000150 = 0;
                                                    uStack0000000000000154 = 0;
                                                    FUN_085e9668(DAT_018b0ee8,uVar65,uVar61,uVar46,
                                                                 DAT_018b0b20,DAT_018b0454,uVar5,
                                                                 &stack0x00000140,0);
                                                    uStack0000000000000134 =
                                                         CONCAT44(in_stack_00000158,
                                                                  uStack0000000000000154);
                                                    uStack0000000000000130 = uStack0000000000000150;
                                                    uStack0000000000000128 = uStack0000000000000148;
                                                    uStack000000000000012c = uStack000000000000014c;
                                                    in_stack_00000120 = in_stack_00000140;
                                                    if (0x18 < *(uint *)(lVar69 + 0x18)) {
                                                      *(undefined4 *)(lVar69 + 800) = 0x17;
                                                      *(undefined8 *)(lVar69 + 0x338) =
                                                           uStack0000000000000134;
                                                      *(ulong *)(lVar69 + 0x330) =
                                                           CONCAT44(uStack0000000000000150,
                                                                    uStack000000000000014c);
                                                      *(ulong *)(lVar69 + 0x32c) =
                                                           CONCAT44(uStack000000000000014c,
                                                                    uStack0000000000000148);
                                                      *(undefined8 *)(lVar69 + 0x324) =
                                                           in_stack_00000140;
                                                      in_stack_00000100 = 0;
                                                      uStack0000000000000108 = 0;
                                                      uStack000000000000010c = 0;
                                                      in_stack_00000118 = 0;
                                                      uStack0000000000000110 = 0;
                                                      uStack0000000000000114 = 0;
                                                      FUN_085e9668(DAT_018b0824,uVar29,uVar10,uVar2,
                                                                   uVar2,uVar1,0x3f800000,
                                                                   &stack0x00000100,0);
                                                      if (0x19 < *(uint *)(lVar69 + 0x18)) {
                                                        *(undefined4 *)(lVar69 + 0x340) = 0x18;
                                                        *(ulong *)(lVar69 + 0x358) =
                                                             CONCAT44(in_stack_00000118,
                                                                      uStack0000000000000114);
                                                        *(ulong *)(lVar69 + 0x350) =
                                                             CONCAT44(uStack0000000000000110,
                                                                      uStack000000000000010c);
                                                        *(ulong *)(lVar69 + 0x34c) =
                                                             CONCAT44(uStack000000000000010c,
                                                                      uStack0000000000000108);
                                                        *(undefined8 *)(lVar69 + 0x344) =
                                                             in_stack_00000100;
                                                        if (lVar68 != 0) {
                                                          *(long *)(lVar68 + 0x10) = lVar69;
                                                          thunk_FUN_03d233cc((long *)(lVar68 + 0x10)
                                                                             ,lVar69);
                                                          plVar70 = (long *)(*(long *)(*unaff_x21 +
                                                                                      0xb8) + 8);
                                                          *plVar70 = lVar68;
                                                          thunk_FUN_03d233cc(plVar70,lVar68);
                                                          return;
                                                        }
                                                        goto LAB_0740b730;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_0740b72c;
                                                  }
                                                  }
LAB_0740b730:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03c8fb30();
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0740b72c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


