/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcActivationMode
ENTRY_POINT: 090c25b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__GetMrcActivationMode(void)

{
  uint uVar1;
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
  long lVar50;
  long lVar51;
  long *plVar52;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined4 in_s3;
  undefined4 in_s6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
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
  undefined8 in_stack_00000b80;
  undefined8 in_stack_00000b88;
  undefined4 in_stack_00000e28;
  undefined4 in_stack_00000e2c;
  
  uStack00000000000000c4 = in_s6;
  FUN_0a188128();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
  *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
  if (9 < uVar1) {
    uVar54 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar53 = *(undefined8 *)(unaff_x23 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x140) = 8;
    *(undefined8 *)(unaff_x20 + 0x158) = uVar54;
    *(undefined8 *)(unaff_x20 + 0x150) = uVar53;
    *(undefined8 *)(unaff_x20 + 0x14c) = in_stack_00000b88;
    *(undefined8 *)(unaff_x20 + 0x144) = in_stack_00000b80;
    FUN_0a188128(DAT_01df49fc,DAT_01df4518,DAT_01df51b0,0,DAT_01df4e50,0,0x3f800000,&stack0x00000b40
                 ,0);
    if (10 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x160) = 9;
      *(undefined8 *)(unaff_x20 + 0x178) = 0;
      *(undefined8 *)(unaff_x20 + 0x170) = 0;
      *(undefined8 *)(unaff_x20 + 0x16c) = 0;
      *(undefined8 *)(unaff_x20 + 0x164) = 0;
      uVar5 = DAT_01df4c64;
      uVar4 = DAT_01df4c0c;
      FUN_0a188128(DAT_01df4e0c,DAT_01df4c0c,DAT_01df4c64,0,0,0,0x3f800000,&stack0x00000b00,0);
      if (0xb < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x180) = 1;
        *(undefined8 *)(unaff_x20 + 0x198) = 0;
        *(undefined8 *)(unaff_x20 + 400) = 0;
        *(undefined8 *)(unaff_x20 + 0x18c) = 0;
        *(undefined8 *)(unaff_x20 + 0x184) = 0;
        uVar44 = DAT_01df50ec;
        uVar26 = DAT_01df4e10;
        uVar11 = DAT_01df4780;
        uVar6 = DAT_01df4644;
        FUN_0a188128(DAT_01df51b4,&stack0x00000ac0,0);
        if (0xc < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
          *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
          *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
          *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
          *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
          uVar25 = DAT_01df4cd4;
          uVar16 = DAT_01df4940;
          uVar15 = DAT_01df493c;
          uVar12 = DAT_01df4840;
          FUN_0a188128(DAT_01df505c,&stack0x00000a80,0);
          if (0xd < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
            *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
            *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
            *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
            *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
            uVar47 = DAT_01df5158;
            uVar39 = DAT_01df5064;
            uVar38 = DAT_01df5060;
            uVar29 = DAT_01df4e54;
            FUN_0a188128(DAT_01df50f0,&stack0x00000a40,0);
            if (0xe < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
              *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
              *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
              *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
              *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
              uVar36 = DAT_01df4ff0;
              uVar35 = DAT_01df4fec;
              uVar32 = DAT_01df4f1c;
              FUN_0a188128(DAT_01df48b8,DAT_01df4fec,DAT_01df4ff0,DAT_01df4f1c,0x22800000,
                           0x2300000023000000,0x3f800000,&stack0x00000a00,0);
              if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                *(undefined8 *)(unaff_x20 + 0x218) = 0;
                *(undefined8 *)(unaff_x20 + 0x210) = 0;
                *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                *(undefined8 *)(unaff_x20 + 0x204) = 0;
                uVar27 = DAT_01df4e14;
                uVar7 = DAT_01df4648;
                FUN_0a188128(DAT_01df4944,DAT_01df4e14,DAT_01df4648,0,0,0,0x3f800000,
                             &stack0x000009c0,0);
                if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x220) = 1;
                  *(undefined8 *)(unaff_x20 + 0x238) = 0;
                  *(undefined8 *)(unaff_x20 + 0x230) = 0;
                  *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x224) = 0;
                  uVar19 = DAT_01df4b4c;
                  uVar13 = DAT_01df48bc;
                  uVar9 = DAT_01df46bc;
                  uVar3 = DAT_01df45d0;
                  FUN_0a188128(DAT_01df4844,&stack0x00000980,0);
                  if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                    *(undefined8 *)(unaff_x20 + 600) = 0;
                    *(undefined8 *)(unaff_x20 + 0x250) = 0;
                    *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x244) = 0;
                    uVar48 = DAT_01df51b8;
                    uVar46 = DAT_01df50f8;
                    uVar45 = DAT_01df50f4;
                    uVar40 = DAT_01df5068;
                    FUN_0a188128(DAT_01df4e58,&stack0x00000940,0);
                    if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                      *(undefined8 *)(unaff_x20 + 0x278) = 0;
                      *(undefined8 *)(unaff_x20 + 0x270) = 0;
                      *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x264) = 0;
                      uVar41 = DAT_01df506c;
                      uVar30 = DAT_01df4eb4;
                      FUN_0a188128(DAT_01df4784,DAT_01df506c,DAT_01df4eb4,DAT_01df51bc,DAT_01df4ff4,
                                   DAT_01df4848,DAT_01df4d44,&stack0x00000900,0);
                      if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                        *(undefined8 *)(unaff_x20 + 0x298) = 0;
                        *(undefined8 *)(unaff_x20 + 0x290) = 0;
                        *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                        *(undefined8 *)(unaff_x20 + 0x284) = 0;
                        FUN_0a188128(DAT_01df45d4,DAT_01df4db8,DAT_01df4788,DAT_01df45d8,unaff_s8,
                                     DAT_01df4b50,0x3f800000,&stack0x000008c0,0);
                        if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                          *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                          *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                          *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                          *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                          uVar28 = DAT_01df4e18;
                          uVar20 = DAT_01df4b54;
                          uVar17 = DAT_01df4a08;
                          uVar14 = DAT_01df48c0;
                          FUN_0a188128(DAT_01df515c,&stack0x00000880,0);
                          if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                            *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                            *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                            *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                            *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                            uVar49 = DAT_01df51c0;
                            uVar34 = DAT_01df4f80;
                            uVar31 = DAT_01df4eb8;
                            uVar24 = DAT_01df4c70;
                            FUN_0a188128(DAT_01df4c6c,&stack0x00000840,0);
                            if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                              *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                              *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                              uVar42 = DAT_01df5074;
                              uVar33 = DAT_01df4f24;
                              uVar8 = DAT_01df464c;
                              uVar2 = DAT_01df456c;
                              FUN_0a188128(DAT_01df5070,&stack0x00000800,0);
                              if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                uVar43 = DAT_01df5078;
                                uVar37 = DAT_01df4ff8;
                                uVar23 = DAT_01df4c18;
                                uVar10 = DAT_01df4734;
                                FUN_0a188128(DAT_01df4650,&stack0x000007c0,0);
                                if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                  *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                  uVar22 = DAT_01df4ba0;
                                  uVar21 = DAT_01df4b58;
                                  FUN_0a188128(DAT_01df4a0c,DAT_01df4ba0,DAT_01df4b58,unaff_s8,
                                               uVar32,DAT_01df45dc,0x3f800000,&stack0x00000780,0);
                                  if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
                                    *(undefined8 *)(unaff_x20 + 0x358) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x350) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x34c) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x344) = 0;
                                    if (unaff_x19 != 0) {
                                      *(long *)(unaff_x19 + 0x10) = unaff_x20;
                                      thunk_FUN_049ee3d8();
                                      **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
                                      thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x21 + 0xb8));
                                      lVar50 = thunk_FUN_04983f60(*unaff_x21);
                                      OVRPlugin_BodyJointLocation__get_OrientationValid();
                                      lVar51 = FUN_04947fd0(*unaff_x22,0x1a);
                                      FUN_0a188128(DAT_01df4cdc,unaff_s12,unaff_s13,0,0,0,0x3f800000
                                                   ,&stack0x00000740,0);
                                      if (lVar51 != 0) {
                                        if (*(int *)(lVar51 + 0x18) != 0) {
                                          *(undefined8 *)(lVar51 + 0x2c) = 0;
                                          *(undefined8 *)(lVar51 + 0x24) = 0;
                                          *(undefined8 *)(lVar51 + 0x38) = 0;
                                          *(undefined8 *)(lVar51 + 0x30) = 0;
                                          *(undefined4 *)(lVar51 + 0x20) = 1;
                                          FUN_0a188128(0,0,0,0,0,0,0x3f800000,&stack0x00000700,0);
                                          if ((*(uint *)(lVar51 + 0x18) & 0xfffffffe) != 0) {
                                            *(undefined4 *)(lVar51 + 0x40) = 0xffffffff;
                                            *(undefined8 *)(lVar51 + 0x4c) = 0;
                                            *(undefined8 *)(lVar51 + 0x44) = 0;
                                            uVar18 = DAT_01df4dbc;
                                            *(undefined8 *)(lVar51 + 0x58) = 0;
                                            *(undefined8 *)(lVar51 + 0x50) = 0;
                                            FUN_0a188128(uVar18,unaff_s10,unaff_s11,DAT_01df4ba4,
                                                         DAT_01df4a10,DAT_01df4850,DAT_01df4570,
                                                         &stack0x000006c0,0);
                                            if (2 < *(uint *)(lVar51 + 0x18)) {
                                              *(undefined4 *)(lVar51 + 0x60) = 1;
                                              *(undefined8 *)(lVar51 + 0x6c) = 0;
                                              *(undefined8 *)(lVar51 + 100) = 0;
                                              uVar18 = DAT_01df507c;
                                              *(undefined8 *)(lVar51 + 0x78) = 0;
                                              *(undefined8 *)(lVar51 + 0x70) = 0;
                                              FUN_0a188128(uVar18,DAT_01df4d48,DAT_01df451c,
                                                           DAT_01df5080,DAT_01df51c4,DAT_01df4a78,
                                                           DAT_01df494c,&stack0x00000680,0);
                                              if ((*(uint *)(lVar51 + 0x18) & 0xfffffffc) != 0) {
                                                *(undefined4 *)(lVar51 + 0x80) = 2;
                                                *(undefined8 *)(lVar51 + 0x8c) = 0;
                                                *(undefined8 *)(lVar51 + 0x84) = 0;
                                                uVar18 = DAT_01df4d4c;
                                                *(undefined8 *)(lVar51 + 0x98) = 0;
                                                *(undefined8 *)(lVar51 + 0x90) = 0;
                                                FUN_0a188128(uVar18,DAT_01df478c,DAT_01df4e5c,
                                                             DAT_01df4654,DAT_01df4e1c,DAT_01df4c74,
                                                             DAT_01df4dc0,&stack0x00000640,0);
                                                if (4 < *(uint *)(lVar51 + 0x18)) {
                                                  *(undefined4 *)(lVar51 + 0xa0) = 3;
                                                  *(undefined8 *)(lVar51 + 0xac) = 0;
                                                  *(undefined8 *)(lVar51 + 0xa4) = 0;
                                                  *(undefined8 *)(lVar51 + 0xb8) = 0;
                                                  *(undefined8 *)(lVar51 + 0xb0) = 0;
                                                  FUN_0a188128(DAT_01df4854,DAT_01df4a14,
                                                               DAT_01df4950,DAT_01df4574,0,0,
                                                               0x3f800000,&stack0x00000600,0);
                                                  if (5 < *(uint *)(lVar51 + 0x18)) {
                                                    *(undefined8 *)(lVar51 + 0xcc) = 0;
                                                    *(undefined8 *)(lVar51 + 0xc4) = 0;
                                                    *(undefined8 *)(lVar51 + 0xd8) = 0;
                                                    *(undefined8 *)(lVar51 + 0xd0) = 0;
                                                    *(undefined4 *)(lVar51 + 0xc0) = 4;
                                                    FUN_0a188128(DAT_01df4e60,unaff_s14,unaff_s15,0,
                                                                 0,0,0x3f800000,&stack0x000005c0,0);
                                                    if (6 < *(uint *)(lVar51 + 0x18)) {
                                                      *(undefined4 *)(lVar51 + 0xe0) = 1;
                                                      *(undefined8 *)(lVar51 + 0xec) = 0;
                                                      *(undefined8 *)(lVar51 + 0xe4) = 0;
                                                      uVar18 = DAT_01df4a18;
                                                      *(undefined8 *)(lVar51 + 0xf8) = 0;
                                                      *(undefined8 *)(lVar51 + 0xf0) = 0;
                                                      FUN_0a188128(uVar18,unaff_s9,in_stack_00000e2c
                                                                   ,in_stack_00000e28,DAT_01df4790,
                                                                   DAT_01df4c78,
                                                                   uStack00000000000000dc,
                                                                   &stack0x00000580,0);
                                                      if ((*(uint *)(lVar51 + 0x18) & 0xfffffff8) !=
                                                          0) {
                                                        *(undefined4 *)(lVar51 + 0x100) = 6;
                                                        *(undefined8 *)(lVar51 + 0x118) = 0;
                                                        *(undefined8 *)(lVar51 + 0x110) = 0;
                                                        *(undefined8 *)(lVar51 + 0x10c) = 0;
                                                        *(undefined8 *)(lVar51 + 0x104) = 0;
                                                        FUN_0a188128(DAT_01df5084,DAT_01df4658,
                                                                     DAT_01df4954,
                                                                     uStack00000000000000d8,
                                                                     DAT_01df4ae4,DAT_01df51c8,
                                                                     uStack00000000000000d4,
                                                                     &stack0x00000540,0);
                                                        if (8 < *(uint *)(lVar51 + 0x18)) {
                                                          *(undefined4 *)(lVar51 + 0x120) = 7;
                                                          *(undefined8 *)(lVar51 + 0x138) = 0;
                                                          *(undefined8 *)(lVar51 + 0x130) = 0;
                                                          uVar18 = DAT_01df5160;
                                                          *(undefined8 *)(lVar51 + 300) = 0;
                                                          *(undefined8 *)(lVar51 + 0x124) = 0;
                                                          FUN_0a188128(DAT_01df4c1c,
                                                                       uStack00000000000000d0,
                                                                       in_stack_000000c8._4_4_,in_s3
                                                                       ,uVar18,DAT_01df4ae8,
                                                                       uStack00000000000000c4,
                                                                       &stack0x00000500,0);
                                                          if (9 < *(uint *)(lVar51 + 0x18)) {
                                                            *(undefined4 *)(lVar51 + 0x140) = 8;
                                                            *(undefined8 *)(lVar51 + 0x158) = 0;
                                                            *(undefined8 *)(lVar51 + 0x150) = 0;
                                                            *(undefined8 *)(lVar51 + 0x14c) = 0;
                                                            *(undefined8 *)(lVar51 + 0x144) = 0;
                                                            FUN_0a188128(DAT_01df4a7c,DAT_01df51cc,
                                                                         DAT_01df465c,0,DAT_01df4ba8
                                                                         ,0,0x3f800000,
                                                                         &stack0x000004c0,0);
                                                            if (10 < *(uint *)(lVar51 + 0x18)) {
                                                              *(undefined4 *)(lVar51 + 0x160) = 9;
                                                              *(undefined8 *)(lVar51 + 0x178) = 0;
                                                              *(undefined8 *)(lVar51 + 0x170) = 0;
                                                              *(undefined8 *)(lVar51 + 0x16c) = 0;
                                                              *(undefined8 *)(lVar51 + 0x164) = 0;
                                                              FUN_0a188128(DAT_01df4958,uVar4,uVar5,
                                                                           0,0,0,0x3f800000,
                                                                           &stack0x00000480,0);
                                                              if (0xb < *(uint *)(lVar51 + 0x18)) {
                                                                *(undefined4 *)(lVar51 + 0x180) = 1;
                                                                *(undefined8 *)(lVar51 + 0x198) = 0;
                                                                *(undefined8 *)(lVar51 + 400) = 0;
                                                                uVar4 = DAT_01df4ebc;
                                                                *(undefined8 *)(lVar51 + 0x18c) = 0;
                                                                *(undefined8 *)(lVar51 + 0x184) = 0;
                                                                FUN_0a188128(DAT_01df4520,uVar11,
                                                                             uVar6,uVar26,uVar4,
                                                                             DAT_01df50fc,uVar44,
                                                                             &stack0x00000440,0);
                                                                if (0xc < *(uint *)(lVar51 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar51 + 0x1a0) =
                                                                       0xb;
                                                                  *(undefined8 *)(lVar51 + 0x1b8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar51 + 0x1b0) =
                                                                       0;
                                                                  uVar4 = DAT_01df45e0;
                                                                  *(undefined8 *)(lVar51 + 0x1ac) =
                                                                       0;
                                                                  *(undefined8 *)(lVar51 + 0x1a4) =
                                                                       0;
                                                                  FUN_0a188128(DAT_01df495c,uVar12,
                                                                               uVar15,uVar25,uVar4,
                                                                               DAT_01df5100,uVar16,
                                                                               &stack0x00000400,0);
                                                                  if (0xd < *(uint *)(lVar51 + 0x18)
                                                                     ) {
                                                                    *(undefined4 *)(lVar51 + 0x1c0)
                                                                         = 0xc;
                                                                    *(undefined8 *)(lVar51 + 0x1d8)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar51 + 0x1d0)
                                                                         = 0;
                                                                    uVar4 = DAT_01df4ffc;
                                                                    *(undefined8 *)(lVar51 + 0x1cc)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar51 + 0x1c4)
                                                                         = 0;
                                                                    FUN_0a188128(DAT_01df4794,uVar29
                                                                                 ,uVar47,uVar38,
                                                                                 uVar4,DAT_01df4660,
                                                                                 uVar39,&
                                                  stack0x000003c0,0);
                                                  if (0xe < *(uint *)(lVar51 + 0x18)) {
                                                    *(undefined4 *)(lVar51 + 0x1e0) = 0xd;
                                                    *(undefined8 *)(lVar51 + 0x1f8) = 0;
                                                    *(undefined8 *)(lVar51 + 0x1f0) = 0;
                                                    *(undefined8 *)(lVar51 + 0x1ec) = 0;
                                                    *(undefined8 *)(lVar51 + 0x1e4) = 0;
                                                    FUN_0a188128(DAT_01df4ec0,uVar35,uVar36,uVar32,
                                                                 0xa2800000,0xa3000000a3000000,
                                                                 0x3f800000,&stack0x00000380,0);
                                                    if ((*(uint *)(lVar51 + 0x18) & 0xfffffff0) != 0
                                                       ) {
                                                      *(undefined4 *)(lVar51 + 0x200) = 0xe;
                                                      *(undefined8 *)(lVar51 + 0x218) = 0;
                                                      *(undefined8 *)(lVar51 + 0x210) = 0;
                                                      *(undefined8 *)(lVar51 + 0x20c) = 0;
                                                      *(undefined8 *)(lVar51 + 0x204) = 0;
                                                      FUN_0a188128(DAT_01df4f28,uVar27,uVar7,0,0,0,
                                                                   0x3f800000,&stack0x00000340,0);
                                                      if (0x10 < *(uint *)(lVar51 + 0x18)) {
                                                        *(undefined4 *)(lVar51 + 0x220) = 1;
                                                        *(undefined8 *)(lVar51 + 0x238) = 0;
                                                        *(undefined8 *)(lVar51 + 0x230) = 0;
                                                        uVar4 = DAT_01df4e20;
                                                        *(undefined8 *)(lVar51 + 0x22c) = 0;
                                                        *(undefined8 *)(lVar51 + 0x224) = 0;
                                                        FUN_0a188128(DAT_01df4d50,uVar13,uVar9,
                                                                     uVar19,uVar4,DAT_01df49c4,uVar3
                                                                     ,&stack0x00000300,0);
                                                        if (0x11 < *(uint *)(lVar51 + 0x18)) {
                                                          *(undefined4 *)(lVar51 + 0x240) = 0x10;
                                                          *(undefined8 *)(lVar51 + 600) = 0;
                                                          *(undefined8 *)(lVar51 + 0x250) = 0;
                                                          uVar4 = DAT_01df4804;
                                                          *(undefined8 *)(lVar51 + 0x24c) = 0;
                                                          *(undefined8 *)(lVar51 + 0x244) = 0;
                                                          FUN_0a188128(DAT_01df4dc4,uVar45,uVar48,
                                                                       uVar46,uVar4,DAT_01df5000,
                                                                       uVar40,&stack0x000002c0,0);
                                                          if (0x12 < *(uint *)(lVar51 + 0x18)) {
                                                            *(undefined4 *)(lVar51 + 0x260) = 0x11;
                                                            *(undefined8 *)(lVar51 + 0x278) = 0;
                                                            *(undefined8 *)(lVar51 + 0x270) = 0;
                                                            uVar4 = DAT_01df4dc8;
                                                            *(undefined8 *)(lVar51 + 0x26c) = 0;
                                                            *(undefined8 *)(lVar51 + 0x264) = 0;
                                                            FUN_0a188128(DAT_01df4a1c,uVar41,uVar30,
                                                                         uVar4,DAT_01df4e24,
                                                                         DAT_01df4f8c,DAT_01df5004,
                                                                         &stack0x00000280,0);
                                                            if (0x13 < *(uint *)(lVar51 + 0x18)) {
                                                              *(undefined4 *)(lVar51 + 0x280) = 0x12
                                                              ;
                                                              *(undefined8 *)(lVar51 + 0x298) = 0;
                                                              *(undefined8 *)(lVar51 + 0x290) = 0;
                                                              *(undefined8 *)(lVar51 + 0x28c) = 0;
                                                              *(undefined8 *)(lVar51 + 0x284) = 0;
                                                              uVar4 = DAT_01df508c;
                                                              FUN_0a188128(DAT_01df4bac,DAT_01df5088
                                                                           ,DAT_01df51d0,uVar32,
                                                                           DAT_01df508c,
                                                                           0x8800000088000000,
                                                                           0x3f800000,
                                                                           &stack0x00000240,0);
                                                              if (0x14 < *(uint *)(lVar51 + 0x18)) {
                                                                *(undefined4 *)(lVar51 + 0x2a0) =
                                                                     0x13;
                                                                *(undefined8 *)(lVar51 + 0x2b8) = 0;
                                                                *(undefined8 *)(lVar51 + 0x2b0) = 0;
                                                                uVar5 = DAT_01df4e64;
                                                                *(undefined8 *)(lVar51 + 0x2ac) = 0;
                                                                *(undefined8 *)(lVar51 + 0x2a4) = 0;
                                                                FUN_0a188128(DAT_01df4798,uVar14,
                                                                             uVar17,uVar20,uVar5,
                                                                             DAT_01df4578,uVar28,
                                                                             &stack0x00000200,0);
                                                                in_stack_000001e0 = 0;
                                                                uStack00000000000001e8 = 0;
                                                                uStack00000000000001ec = 0;
                                                                in_stack_000001f0 = 0;
                                                                if (0x15 < *(uint *)(lVar51 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar51 + 0x2c0) =
                                                                       1;
                                                                  *(undefined8 *)(lVar51 + 0x2d8) =
                                                                       0;
                                                                  *(undefined8 *)(lVar51 + 0x2d0) =
                                                                       0;
                                                                  uVar5 = DAT_01df4d54;
                                                                  *(undefined8 *)(lVar51 + 0x2cc) =
                                                                       0;
                                                                  *(undefined8 *)(lVar51 + 0x2c4) =
                                                                       0;
                                                                  in_stack_000001c0 = 0;
                                                                  uStack00000000000001c8 = 0;
                                                                  uStack00000000000001cc = 0;
                                                                  in_stack_000001d8 = 0;
                                                                  uStack00000000000001d0 = 0;
                                                                  uStack00000000000001d4 = 0;
                                                                  FUN_0a188128(DAT_01df4b5c,uVar24,
                                                                               uVar34,uVar31,uVar5,
                                                                               DAT_01df4bb0,uVar49,
                                                                               &stack0x000001c0,0);
                                                                  uStack00000000000001b4 =
                                                                       CONCAT44(in_stack_000001d8,
                                                                                                                                                                
                                                  uStack00000000000001d4);
                                                  uStack00000000000001a8 = uStack00000000000001c8;
                                                  in_stack_000001a0 = in_stack_000001c0;
                                                  uStack00000000000001ac = uStack00000000000001cc;
                                                  uStack00000000000001b0 = uStack00000000000001d0;
                                                  if (0x16 < *(uint *)(lVar51 + 0x18)) {
                                                    *(undefined4 *)(lVar51 + 0x2e0) = 0x15;
                                                    *(undefined8 *)(lVar51 + 0x2f8) =
                                                         uStack00000000000001b4;
                                                    *(ulong *)(lVar51 + 0x2f0) =
                                                         CONCAT44(uStack00000000000001d0,
                                                                  uStack00000000000001cc);
                                                    uVar5 = DAT_01df4e68;
                                                    *(ulong *)(lVar51 + 0x2ec) =
                                                         CONCAT44(uStack00000000000001cc,
                                                                  uStack00000000000001c8);
                                                    *(undefined8 *)(lVar51 + 0x2e4) =
                                                         in_stack_000001c0;
                                                    in_stack_00000180 = 0;
                                                    uStack0000000000000188 = 0;
                                                    uStack000000000000018c = 0;
                                                    in_stack_00000198 = 0;
                                                    uStack0000000000000190 = 0;
                                                    uStack0000000000000194 = 0;
                                                    FUN_0a188128(DAT_01df51d4,uVar8,uVar2,uVar33,
                                                                 uVar5,DAT_01df5090,uVar42,
                                                                 &stack0x00000180,0);
                                                    uStack0000000000000174 =
                                                         CONCAT44(in_stack_00000198,
                                                                  uStack0000000000000194);
                                                    uStack0000000000000168 = uStack0000000000000188;
                                                    in_stack_00000160 = in_stack_00000180;
                                                    uStack000000000000016c = uStack000000000000018c;
                                                    uStack0000000000000170 = uStack0000000000000190;
                                                    if (0x17 < *(uint *)(lVar51 + 0x18)) {
                                                      *(undefined4 *)(lVar51 + 0x300) = 0x16;
                                                      *(undefined8 *)(lVar51 + 0x318) =
                                                           uStack0000000000000174;
                                                      *(ulong *)(lVar51 + 0x310) =
                                                           CONCAT44(uStack0000000000000190,
                                                                    uStack000000000000018c);
                                                      uVar5 = DAT_01df45e4;
                                                      *(ulong *)(lVar51 + 0x30c) =
                                                           CONCAT44(uStack000000000000018c,
                                                                    uStack0000000000000188);
                                                      *(undefined8 *)(lVar51 + 0x304) =
                                                           in_stack_00000180;
                                                      in_stack_00000140 = 0;
                                                      uStack0000000000000148 = 0;
                                                      uStack000000000000014c = 0;
                                                      in_stack_00000158 = 0;
                                                      uStack0000000000000150 = 0;
                                                      uStack0000000000000154 = 0;
                                                      FUN_0a188128(DAT_01df4c7c,uVar23,uVar10,uVar37
                                                                   ,uVar5,DAT_01df4664,uVar43,
                                                                   &stack0x00000140,0);
                                                      uStack0000000000000134 =
                                                           CONCAT44(in_stack_00000158,
                                                                    uStack0000000000000154);
                                                      uStack0000000000000128 =
                                                           uStack0000000000000148;
                                                      in_stack_00000120 = in_stack_00000140;
                                                      uStack000000000000012c =
                                                           uStack000000000000014c;
                                                      uStack0000000000000130 =
                                                           uStack0000000000000150;
                                                      if (0x18 < *(uint *)(lVar51 + 0x18)) {
                                                        *(undefined4 *)(lVar51 + 800) = 0x17;
                                                        *(undefined8 *)(lVar51 + 0x338) =
                                                             uStack0000000000000134;
                                                        *(ulong *)(lVar51 + 0x330) =
                                                             CONCAT44(uStack0000000000000150,
                                                                      uStack000000000000014c);
                                                        *(ulong *)(lVar51 + 0x32c) =
                                                             CONCAT44(uStack000000000000014c,
                                                                      uStack0000000000000148);
                                                        *(undefined8 *)(lVar51 + 0x324) =
                                                             in_stack_00000140;
                                                        in_stack_00000100 = 0;
                                                        uStack0000000000000108 = 0;
                                                        uStack000000000000010c = 0;
                                                        in_stack_00000118 = 0;
                                                        uStack0000000000000110 = 0;
                                                        uStack0000000000000114 = 0;
                                                        FUN_0a188128(DAT_01df4aec,uVar22,uVar21,
                                                                     unaff_s8,unaff_s8,uVar4,
                                                                     0x3f800000,&stack0x00000100,0);
                                                        if (0x19 < *(uint *)(lVar51 + 0x18)) {
                                                          *(undefined4 *)(lVar51 + 0x340) = 0x18;
                                                          *(ulong *)(lVar51 + 0x358) =
                                                               CONCAT44(in_stack_00000118,
                                                                        uStack0000000000000114);
                                                          *(ulong *)(lVar51 + 0x350) =
                                                               CONCAT44(uStack0000000000000110,
                                                                        uStack000000000000010c);
                                                          *(ulong *)(lVar51 + 0x34c) =
                                                               CONCAT44(uStack000000000000010c,
                                                                        uStack0000000000000108);
                                                          *(undefined8 *)(lVar51 + 0x344) =
                                                               in_stack_00000100;
                                                          if (lVar50 != 0) {
                                                            *(long *)(lVar50 + 0x10) = lVar51;
                                                            thunk_FUN_049ee3d8((long *)(lVar50 + 
                                                  0x10),lVar51);
                                                  plVar52 = (long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                    8);
                                                  *plVar52 = lVar50;
                                                  thunk_FUN_049ee3d8(plVar52,lVar50);
                                                  return;
                                                  }
                                                  goto LAB_090c3bbc;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_090c3bb8;
                                      }
                                    }
LAB_090c3bbc:
                    /* WARNING: Subroutine does not return */
                                    FUN_0494818c();
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_090c3bb8:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


