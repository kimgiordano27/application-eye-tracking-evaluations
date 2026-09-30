/*
FUNCTION_NAME: OVRPlugin.Media$$Shutdown
ENTRY_POINT: 090c2218
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__Shutdown(long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long lVar62;
  long lVar63;
  long *plVar64;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined4 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
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
  
  *(long *)(unaff_x20 + 0x6c) = param_2._8_8_;
  *(long *)(unaff_x20 + 100) = param_2._0_8_;
  uVar65 = *(undefined4 *)(param_1 + 0x72c);
  *(long *)(unaff_x20 + 0x78) = param_3._8_8_;
  *(long *)(unaff_x20 + 0x70) = param_3._0_8_;
  FUN_0a188128(uVar65,*(undefined4 *)(in_x9 + 0x54),DAT_01df4730,DAT_01df463c,DAT_01df48a8,
               DAT_01df4e08,DAT_01df4b40,&stack0x00000d00,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
  *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
  if ((uVar1 & 0xfffffffc) != 0) {
    uVar67 = *(undefined8 *)(unaff_x23 + 0x94);
    uVar66 = *(undefined8 *)(unaff_x23 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x80) = 2;
    *(undefined8 *)(unaff_x20 + 0x8c) = 0;
    *(undefined8 *)(unaff_x20 + 0x84) = 0;
    uVar65 = DAT_01df51a0;
    *(undefined8 *)(unaff_x20 + 0x98) = uVar67;
    *(undefined8 *)(unaff_x20 + 0x90) = uVar66;
    FUN_0a188128(uVar65,DAT_01df4770,DAT_01df51a4,DAT_01df5058,DAT_01df48ac,DAT_01df49b8,
                 DAT_01df4514,&stack0x00000cc0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
    *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
    if (4 < uVar1) {
      uVar67 = *(undefined8 *)(unaff_x23 + 0x54);
      uVar66 = *(undefined8 *)(unaff_x23 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0xa0) = 3;
      *(undefined8 *)(unaff_x20 + 0xac) = 0;
      *(undefined8 *)(unaff_x20 + 0xa4) = 0;
      uVar4 = DAT_01df4db4;
      uVar65 = DAT_01df49bc;
      uVar12 = DAT_01df47fc;
      *(undefined8 *)(unaff_x20 + 0xb8) = uVar67;
      *(undefined8 *)(unaff_x20 + 0xb0) = uVar66;
      FUN_0a188128(uVar65,DAT_01df4db0,uVar4,0x8700000087000000,uVar12,0xa2800000,0x3f800000,
                   &stack0x00000c80,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
      *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
      uVar4 = DAT_01df4f18;
      uVar65 = DAT_01df4774;
      if (5 < uVar1) {
        uVar67 = *(undefined8 *)(unaff_x23 + 0x14);
        uVar66 = *(undefined8 *)(unaff_x23 + 0xc);
        *(undefined8 *)(unaff_x20 + 0xcc) = 0;
        *(undefined8 *)(unaff_x20 + 0xc4) = 0;
        *(undefined8 *)(unaff_x20 + 0xd8) = uVar67;
        *(undefined8 *)(unaff_x20 + 0xd0) = uVar66;
        *(undefined4 *)(unaff_x20 + 0xc0) = 4;
        FUN_0a188128(DAT_01df4560,uVar65,uVar4,0,0,0,0x3f800000,&stack0x00000c40,0);
        uVar19 = DAT_01df49c0;
        if (6 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0xe0) = 1;
          *(undefined8 *)(unaff_x20 + 0xec) = 0;
          *(undefined8 *)(unaff_x20 + 0xe4) = 0;
          *(undefined8 *)(unaff_x20 + 0xf8) = 0;
          *(undefined8 *)(unaff_x20 + 0xf0) = 0;
          uVar43 = DAT_01df4fe4;
          uVar31 = DAT_01df4d38;
          uVar29 = DAT_01df4ccc;
          FUN_0a188128(DAT_01df48b0,uVar19,DAT_01df4d38,DAT_01df4fe4,DAT_01df4b98,DAT_01df4640,
                       &stack0x00000c00,0);
          if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
            *(undefined4 *)(unaff_x20 + 0x100) = 6;
            *(undefined8 *)(unaff_x20 + 0x118) = 0;
            *(undefined8 *)(unaff_x20 + 0x110) = 0;
            *(undefined8 *)(unaff_x20 + 0x10c) = 0;
            *(undefined8 *)(unaff_x20 + 0x104) = 0;
            uVar56 = DAT_01df5150;
            uVar10 = DAT_01df4778;
            FUN_0a188128(DAT_01df4b44,DAT_01df4800,DAT_01df4c08,DAT_01df4778,DAT_01df4cd0,
                         DAT_01df477c,&stack0x00000bc0,0);
            if (8 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x120) = 7;
              *(undefined8 *)(unaff_x20 + 0x138) = 0;
              *(undefined8 *)(unaff_x20 + 0x130) = 0;
              *(undefined8 *)(unaff_x20 + 300) = 0;
              *(undefined8 *)(unaff_x20 + 0x124) = 0;
              uVar59 = DAT_01df51ac;
              uVar57 = DAT_01df5154;
              uVar32 = DAT_01df4d3c;
              uVar16 = DAT_01df4938;
              FUN_0a188128(DAT_01df51a8,&stack0x00000b80,0);
              if (9 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x140) = 8;
                *(undefined8 *)(unaff_x20 + 0x158) = 0;
                *(undefined8 *)(unaff_x20 + 0x150) = 0;
                *(undefined8 *)(unaff_x20 + 0x14c) = 0;
                *(undefined8 *)(unaff_x20 + 0x144) = 0;
                FUN_0a188128(DAT_01df49fc,DAT_01df4518,DAT_01df51b0,0,DAT_01df4e50,0,0x3f800000,
                             &stack0x00000b40,0);
                if (10 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x160) = 9;
                  *(undefined8 *)(unaff_x20 + 0x178) = 0;
                  *(undefined8 *)(unaff_x20 + 0x170) = 0;
                  *(undefined8 *)(unaff_x20 + 0x16c) = 0;
                  *(undefined8 *)(unaff_x20 + 0x164) = 0;
                  uVar27 = DAT_01df4c64;
                  uVar25 = DAT_01df4c0c;
                  FUN_0a188128(DAT_01df4e0c,DAT_01df4c0c,DAT_01df4c64,0,0,0,0x3f800000,
                               &stack0x00000b00,0);
                  if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x180) = 1;
                    *(undefined8 *)(unaff_x20 + 0x198) = 0;
                    *(undefined8 *)(unaff_x20 + 400) = 0;
                    *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                    *(undefined8 *)(unaff_x20 + 0x184) = 0;
                    uVar53 = DAT_01df50ec;
                    uVar34 = DAT_01df4e10;
                    uVar11 = DAT_01df4780;
                    uVar5 = DAT_01df4644;
                    FUN_0a188128(DAT_01df51b4,&stack0x00000ac0,0);
                    if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                      *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                      uVar30 = DAT_01df4cd4;
                      uVar18 = DAT_01df4940;
                      uVar17 = DAT_01df493c;
                      uVar13 = DAT_01df4840;
                      FUN_0a188128(DAT_01df505c,&stack0x00000a80,0);
                      if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x1c0) = 0xc;
                        *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1cc) = 0;
                        *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                        uVar58 = DAT_01df5158;
                        uVar48 = DAT_01df5064;
                        uVar47 = DAT_01df5060;
                        uVar37 = DAT_01df4e54;
                        FUN_0a188128(DAT_01df50f0,&stack0x00000a40,0);
                        if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                          *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                          *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                          uVar45 = DAT_01df4ff0;
                          uVar44 = DAT_01df4fec;
                          uVar40 = DAT_01df4f1c;
                          FUN_0a188128(DAT_01df48b8,DAT_01df4fec,DAT_01df4ff0,DAT_01df4f1c,
                                       0x22800000,0x2300000023000000,0x3f800000,&stack0x00000a00,0);
                          if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                            *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                            *(undefined8 *)(unaff_x20 + 0x218) = 0;
                            *(undefined8 *)(unaff_x20 + 0x210) = 0;
                            *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x204) = 0;
                            uVar35 = DAT_01df4e14;
                            uVar6 = DAT_01df4648;
                            FUN_0a188128(DAT_01df4944,DAT_01df4e14,DAT_01df4648,0,0,0,0x3f800000,
                                         &stack0x000009c0,0);
                            if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x220) = 1;
                              *(undefined8 *)(unaff_x20 + 0x238) = 0;
                              *(undefined8 *)(unaff_x20 + 0x230) = 0;
                              *(undefined8 *)(unaff_x20 + 0x22c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x224) = 0;
                              uVar21 = DAT_01df4b4c;
                              uVar14 = DAT_01df48bc;
                              uVar8 = DAT_01df46bc;
                              uVar3 = DAT_01df45d0;
                              FUN_0a188128(DAT_01df4844,&stack0x00000980,0);
                              if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                                *(undefined8 *)(unaff_x20 + 600) = 0;
                                *(undefined8 *)(unaff_x20 + 0x250) = 0;
                                *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                                *(undefined8 *)(unaff_x20 + 0x244) = 0;
                                uVar60 = DAT_01df51b8;
                                uVar55 = DAT_01df50f8;
                                uVar54 = DAT_01df50f4;
                                uVar49 = DAT_01df5068;
                                FUN_0a188128(DAT_01df4e58,&stack0x00000940,0);
                                if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                                  *(undefined8 *)(unaff_x20 + 0x278) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x270) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x264) = 0;
                                  uVar50 = DAT_01df506c;
                                  uVar38 = DAT_01df4eb4;
                                  FUN_0a188128(DAT_01df4784,DAT_01df506c,DAT_01df4eb4,DAT_01df51bc,
                                               DAT_01df4ff4,DAT_01df4848,DAT_01df4d44,
                                               &stack0x00000900,0);
                                  if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                                    *(undefined8 *)(unaff_x20 + 0x298) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x290) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x284) = 0;
                                    FUN_0a188128(DAT_01df45d4,DAT_01df4db8,DAT_01df4788,DAT_01df45d8
                                                 ,uVar12,DAT_01df4b50,0x3f800000,&stack0x000008c0,0)
                                    ;
                                    if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                      *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                      uVar36 = DAT_01df4e18;
                                      uVar22 = DAT_01df4b54;
                                      uVar20 = DAT_01df4a08;
                                      uVar15 = DAT_01df48c0;
                                      FUN_0a188128(DAT_01df515c,&stack0x00000880,0);
                                      if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                        *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                        uVar61 = DAT_01df51c0;
                                        uVar42 = DAT_01df4f80;
                                        uVar39 = DAT_01df4eb8;
                                        uVar28 = DAT_01df4c70;
                                        FUN_0a188128(DAT_01df4c6c,&stack0x00000840,0);
                                        if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                          *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                          *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                          *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                          uVar51 = DAT_01df5074;
                                          uVar41 = DAT_01df4f24;
                                          uVar7 = DAT_01df464c;
                                          uVar2 = DAT_01df456c;
                                          FUN_0a188128(DAT_01df5070,&stack0x00000800,0);
                                          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                            *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                            *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                            *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                            *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                            *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                            uVar52 = DAT_01df5078;
                                            uVar46 = DAT_01df4ff8;
                                            uVar26 = DAT_01df4c18;
                                            uVar9 = DAT_01df4734;
                                            FUN_0a188128(DAT_01df4650,&stack0x000007c0,0);
                                            if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                              *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                              *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                              *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                              *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                              *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                              uVar24 = DAT_01df4ba0;
                                              uVar23 = DAT_01df4b58;
                                              FUN_0a188128(DAT_01df4a0c,DAT_01df4ba0,DAT_01df4b58,
                                                           uVar12,uVar40,DAT_01df45dc,0x3f800000,
                                                           &stack0x00000780,0);
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
                                                  thunk_FUN_049ee3d8(*(undefined8 *)
                                                                      (*unaff_x21 + 0xb8));
                                                  lVar62 = thunk_FUN_04983f60(*unaff_x21);
                                                  OVRPlugin_BodyJointLocation__get_OrientationValid
                                                            ();
                                                  lVar63 = FUN_04947fd0(*unaff_x22,0x1a);
                                                  FUN_0a188128(DAT_01df4cdc,unaff_s12,unaff_s13,0,0,
                                                               0,0x3f800000,&stack0x00000740,0);
                                                  if (lVar63 != 0) {
                                                    if (*(int *)(lVar63 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar63 + 0x2c) = 0;
                                                      *(undefined8 *)(lVar63 + 0x24) = 0;
                                                      *(undefined8 *)(lVar63 + 0x38) = 0;
                                                      *(undefined8 *)(lVar63 + 0x30) = 0;
                                                      *(undefined4 *)(lVar63 + 0x20) = 1;
                                                      FUN_0a188128(0,0,0,0,0,0,0x3f800000,
                                                                   &stack0x00000700,0);
                                                      if ((*(uint *)(lVar63 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined4 *)(lVar63 + 0x40) = 0xffffffff;
                                                        *(undefined8 *)(lVar63 + 0x4c) = 0;
                                                        *(undefined8 *)(lVar63 + 0x44) = 0;
                                                        uVar33 = DAT_01df4dbc;
                                                        *(undefined8 *)(lVar63 + 0x58) = 0;
                                                        *(undefined8 *)(lVar63 + 0x50) = 0;
                                                        FUN_0a188128(uVar33,unaff_s10,unaff_s11,
                                                                     DAT_01df4ba4,DAT_01df4a10,
                                                                     DAT_01df4850,DAT_01df4570,
                                                                     &stack0x000006c0,0);
                                                        if (2 < *(uint *)(lVar63 + 0x18)) {
                                                          *(undefined4 *)(lVar63 + 0x60) = 1;
                                                          *(undefined8 *)(lVar63 + 0x6c) = 0;
                                                          *(undefined8 *)(lVar63 + 100) = 0;
                                                          uVar33 = DAT_01df507c;
                                                          *(undefined8 *)(lVar63 + 0x78) = 0;
                                                          *(undefined8 *)(lVar63 + 0x70) = 0;
                                                          FUN_0a188128(uVar33,DAT_01df4d48,
                                                                       DAT_01df451c,DAT_01df5080,
                                                                       DAT_01df51c4,DAT_01df4a78,
                                                                       DAT_01df494c,&stack0x00000680
                                                                       ,0);
                                                          if ((*(uint *)(lVar63 + 0x18) & 0xfffffffc
                                                              ) != 0) {
                                                            *(undefined4 *)(lVar63 + 0x80) = 2;
                                                            *(undefined8 *)(lVar63 + 0x8c) = 0;
                                                            *(undefined8 *)(lVar63 + 0x84) = 0;
                                                            uVar33 = DAT_01df4d4c;
                                                            *(undefined8 *)(lVar63 + 0x98) = 0;
                                                            *(undefined8 *)(lVar63 + 0x90) = 0;
                                                            FUN_0a188128(uVar33,DAT_01df478c,
                                                                         DAT_01df4e5c,DAT_01df4654,
                                                                         DAT_01df4e1c,DAT_01df4c74,
                                                                         DAT_01df4dc0,
                                                                         &stack0x00000640,0);
                                                            if (4 < *(uint *)(lVar63 + 0x18)) {
                                                              *(undefined4 *)(lVar63 + 0xa0) = 3;
                                                              *(undefined8 *)(lVar63 + 0xac) = 0;
                                                              *(undefined8 *)(lVar63 + 0xa4) = 0;
                                                              *(undefined8 *)(lVar63 + 0xb8) = 0;
                                                              *(undefined8 *)(lVar63 + 0xb0) = 0;
                                                              FUN_0a188128(DAT_01df4854,DAT_01df4a14
                                                                           ,DAT_01df4950,
                                                                           DAT_01df4574,0,0,
                                                                           0x3f800000,
                                                                           &stack0x00000600,0);
                                                              if (5 < *(uint *)(lVar63 + 0x18)) {
                                                                *(undefined8 *)(lVar63 + 0xcc) = 0;
                                                                *(undefined8 *)(lVar63 + 0xc4) = 0;
                                                                *(undefined8 *)(lVar63 + 0xd8) = 0;
                                                                *(undefined8 *)(lVar63 + 0xd0) = 0;
                                                                *(undefined4 *)(lVar63 + 0xc0) = 4;
                                                                FUN_0a188128(DAT_01df4e60,uVar65,
                                                                             uVar4,0,0,0,0x3f800000,
                                                                             &stack0x000005c0,0);
                                                                if (6 < *(uint *)(lVar63 + 0x18)) {
                                                                  *(undefined4 *)(lVar63 + 0xe0) = 1
                                                                  ;
                                                                  *(undefined8 *)(lVar63 + 0xec) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar63 + 0xe4) = 0
                                                                  ;
                                                                  uVar65 = DAT_01df4a18;
                                                                  *(undefined8 *)(lVar63 + 0xf8) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar63 + 0xf0) = 0
                                                                  ;
                                                                  FUN_0a188128(uVar65,uVar19,uVar31,
                                                                               uVar43,DAT_01df4790,
                                                                               DAT_01df4c78,uVar29,
                                                                               &stack0x00000580,0);
                                                                  if ((*(uint *)(lVar63 + 0x18) &
                                                                      0xfffffff8) != 0) {
                                                                    *(undefined4 *)(lVar63 + 0x100)
                                                                         = 6;
                                                                    *(undefined8 *)(lVar63 + 0x118)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar63 + 0x110)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar63 + 0x10c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar63 + 0x104)
                                                                         = 0;
                                                                    FUN_0a188128(DAT_01df5084,
                                                                                 DAT_01df4658,
                                                                                 DAT_01df4954,uVar10
                                                                                 ,DAT_01df4ae4,
                                                                                 DAT_01df51c8,uVar56
                                                                                 ,&stack0x00000540,0
                                                                                );
                                                                    if (8 < *(uint *)(lVar63 + 0x18)
                                                                       ) {
                                                                      *(undefined4 *)
                                                                       (lVar63 + 0x120) = 7;
                                                                      *(undefined8 *)
                                                                       (lVar63 + 0x138) = 0;
                                                                      *(undefined8 *)
                                                                       (lVar63 + 0x130) = 0;
                                                                      uVar65 = DAT_01df5160;
                                                                      *(undefined8 *)(lVar63 + 300)
                                                                           = 0;
                                                                      *(undefined8 *)
                                                                       (lVar63 + 0x124) = 0;
                                                                      FUN_0a188128(DAT_01df4c1c,
                                                                                   uVar57,uVar32,
                                                                                   uVar16,uVar65,
                                                                                   DAT_01df4ae8,
                                                                                   uVar59,&
                                                  stack0x00000500,0);
                                                  if (9 < *(uint *)(lVar63 + 0x18)) {
                                                    *(undefined4 *)(lVar63 + 0x140) = 8;
                                                    *(undefined8 *)(lVar63 + 0x158) = 0;
                                                    *(undefined8 *)(lVar63 + 0x150) = 0;
                                                    *(undefined8 *)(lVar63 + 0x14c) = 0;
                                                    *(undefined8 *)(lVar63 + 0x144) = 0;
                                                    FUN_0a188128(DAT_01df4a7c,DAT_01df51cc,
                                                                 DAT_01df465c,0,DAT_01df4ba8,0,
                                                                 0x3f800000,&stack0x000004c0,0);
                                                    if (10 < *(uint *)(lVar63 + 0x18)) {
                                                      *(undefined4 *)(lVar63 + 0x160) = 9;
                                                      *(undefined8 *)(lVar63 + 0x178) = 0;
                                                      *(undefined8 *)(lVar63 + 0x170) = 0;
                                                      *(undefined8 *)(lVar63 + 0x16c) = 0;
                                                      *(undefined8 *)(lVar63 + 0x164) = 0;
                                                      FUN_0a188128(DAT_01df4958,uVar25,uVar27,0,0,0,
                                                                   0x3f800000,&stack0x00000480,0);
                                                      if (0xb < *(uint *)(lVar63 + 0x18)) {
                                                        *(undefined4 *)(lVar63 + 0x180) = 1;
                                                        *(undefined8 *)(lVar63 + 0x198) = 0;
                                                        *(undefined8 *)(lVar63 + 400) = 0;
                                                        uVar65 = DAT_01df4ebc;
                                                        *(undefined8 *)(lVar63 + 0x18c) = 0;
                                                        *(undefined8 *)(lVar63 + 0x184) = 0;
                                                        FUN_0a188128(DAT_01df4520,uVar11,uVar5,
                                                                     uVar34,uVar65,DAT_01df50fc,
                                                                     uVar53,&stack0x00000440,0);
                                                        if (0xc < *(uint *)(lVar63 + 0x18)) {
                                                          *(undefined4 *)(lVar63 + 0x1a0) = 0xb;
                                                          *(undefined8 *)(lVar63 + 0x1b8) = 0;
                                                          *(undefined8 *)(lVar63 + 0x1b0) = 0;
                                                          uVar65 = DAT_01df45e0;
                                                          *(undefined8 *)(lVar63 + 0x1ac) = 0;
                                                          *(undefined8 *)(lVar63 + 0x1a4) = 0;
                                                          FUN_0a188128(DAT_01df495c,uVar13,uVar17,
                                                                       uVar30,uVar65,DAT_01df5100,
                                                                       uVar18,&stack0x00000400,0);
                                                          if (0xd < *(uint *)(lVar63 + 0x18)) {
                                                            *(undefined4 *)(lVar63 + 0x1c0) = 0xc;
                                                            *(undefined8 *)(lVar63 + 0x1d8) = 0;
                                                            *(undefined8 *)(lVar63 + 0x1d0) = 0;
                                                            uVar65 = DAT_01df4ffc;
                                                            *(undefined8 *)(lVar63 + 0x1cc) = 0;
                                                            *(undefined8 *)(lVar63 + 0x1c4) = 0;
                                                            FUN_0a188128(DAT_01df4794,uVar37,uVar58,
                                                                         uVar47,uVar65,DAT_01df4660,
                                                                         uVar48,&stack0x000003c0,0);
                                                            if (0xe < *(uint *)(lVar63 + 0x18)) {
                                                              *(undefined4 *)(lVar63 + 0x1e0) = 0xd;
                                                              *(undefined8 *)(lVar63 + 0x1f8) = 0;
                                                              *(undefined8 *)(lVar63 + 0x1f0) = 0;
                                                              *(undefined8 *)(lVar63 + 0x1ec) = 0;
                                                              *(undefined8 *)(lVar63 + 0x1e4) = 0;
                                                              FUN_0a188128(DAT_01df4ec0,uVar44,
                                                                           uVar45,uVar40,0xa2800000,
                                                                           0xa3000000a3000000,
                                                                           0x3f800000,
                                                                           &stack0x00000380,0);
                                                              if ((*(uint *)(lVar63 + 0x18) &
                                                                  0xfffffff0) != 0) {
                                                                *(undefined4 *)(lVar63 + 0x200) =
                                                                     0xe;
                                                                *(undefined8 *)(lVar63 + 0x218) = 0;
                                                                *(undefined8 *)(lVar63 + 0x210) = 0;
                                                                *(undefined8 *)(lVar63 + 0x20c) = 0;
                                                                *(undefined8 *)(lVar63 + 0x204) = 0;
                                                                FUN_0a188128(DAT_01df4f28,uVar35,
                                                                             uVar6,0,0,0,0x3f800000,
                                                                             &stack0x00000340,0);
                                                                if (0x10 < *(uint *)(lVar63 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar63 + 0x220) =
                                                                       1;
                                                                  *(undefined8 *)(lVar63 + 0x238) =
                                                                       0;
                                                                  *(undefined8 *)(lVar63 + 0x230) =
                                                                       0;
                                                                  uVar65 = DAT_01df4e20;
                                                                  *(undefined8 *)(lVar63 + 0x22c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar63 + 0x224) =
                                                                       0;
                                                                  FUN_0a188128(DAT_01df4d50,uVar14,
                                                                               uVar8,uVar21,uVar65,
                                                                               DAT_01df49c4,uVar3,
                                                                               &stack0x00000300,0);
                                                                  if (0x11 < *(uint *)(lVar63 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar63 + 0x240)
                                                                         = 0x10;
                                                                    *(undefined8 *)(lVar63 + 600) =
                                                                         0;
                                                                    *(undefined8 *)(lVar63 + 0x250)
                                                                         = 0;
                                                                    uVar65 = DAT_01df4804;
                                                                    *(undefined8 *)(lVar63 + 0x24c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar63 + 0x244)
                                                                         = 0;
                                                                    FUN_0a188128(DAT_01df4dc4,uVar54
                                                                                 ,uVar60,uVar55,
                                                                                 uVar65,DAT_01df5000
                                                                                 ,uVar49,&
                                                  stack0x000002c0,0);
                                                  if (0x12 < *(uint *)(lVar63 + 0x18)) {
                                                    *(undefined4 *)(lVar63 + 0x260) = 0x11;
                                                    *(undefined8 *)(lVar63 + 0x278) = 0;
                                                    *(undefined8 *)(lVar63 + 0x270) = 0;
                                                    uVar65 = DAT_01df4dc8;
                                                    *(undefined8 *)(lVar63 + 0x26c) = 0;
                                                    *(undefined8 *)(lVar63 + 0x264) = 0;
                                                    FUN_0a188128(DAT_01df4a1c,uVar50,uVar38,uVar65,
                                                                 DAT_01df4e24,DAT_01df4f8c,
                                                                 DAT_01df5004,&stack0x00000280,0);
                                                    if (0x13 < *(uint *)(lVar63 + 0x18)) {
                                                      *(undefined4 *)(lVar63 + 0x280) = 0x12;
                                                      *(undefined8 *)(lVar63 + 0x298) = 0;
                                                      *(undefined8 *)(lVar63 + 0x290) = 0;
                                                      *(undefined8 *)(lVar63 + 0x28c) = 0;
                                                      *(undefined8 *)(lVar63 + 0x284) = 0;
                                                      uVar65 = DAT_01df508c;
                                                      FUN_0a188128(DAT_01df4bac,DAT_01df5088,
                                                                   DAT_01df51d0,uVar40,DAT_01df508c,
                                                                   0x8800000088000000,0x3f800000,
                                                                   &stack0x00000240,0);
                                                      if (0x14 < *(uint *)(lVar63 + 0x18)) {
                                                        *(undefined4 *)(lVar63 + 0x2a0) = 0x13;
                                                        *(undefined8 *)(lVar63 + 0x2b8) = 0;
                                                        *(undefined8 *)(lVar63 + 0x2b0) = 0;
                                                        uVar4 = DAT_01df4e64;
                                                        *(undefined8 *)(lVar63 + 0x2ac) = 0;
                                                        *(undefined8 *)(lVar63 + 0x2a4) = 0;
                                                        FUN_0a188128(DAT_01df4798,uVar15,uVar20,
                                                                     uVar22,uVar4,DAT_01df4578,
                                                                     uVar36,&stack0x00000200,0);
                                                        in_stack_000001e0 = 0;
                                                        uStack00000000000001e8 = 0;
                                                        uStack00000000000001ec = 0;
                                                        in_stack_000001f0 = 0;
                                                        if (0x15 < *(uint *)(lVar63 + 0x18)) {
                                                          *(undefined4 *)(lVar63 + 0x2c0) = 1;
                                                          *(undefined8 *)(lVar63 + 0x2d8) = 0;
                                                          *(undefined8 *)(lVar63 + 0x2d0) = 0;
                                                          uVar4 = DAT_01df4d54;
                                                          *(undefined8 *)(lVar63 + 0x2cc) = 0;
                                                          *(undefined8 *)(lVar63 + 0x2c4) = 0;
                                                          in_stack_000001c0 = 0;
                                                          uStack00000000000001c8 = 0;
                                                          uStack00000000000001cc = 0;
                                                          in_stack_000001d8 = 0;
                                                          uStack00000000000001d0 = 0;
                                                          uStack00000000000001d4 = 0;
                                                          FUN_0a188128(DAT_01df4b5c,uVar28,uVar42,
                                                                       uVar39,uVar4,DAT_01df4bb0,
                                                                       uVar61,&stack0x000001c0,0);
                                                          uStack00000000000001b4 =
                                                               CONCAT44(in_stack_000001d8,
                                                                        uStack00000000000001d4);
                                                          uStack00000000000001a8 =
                                                               uStack00000000000001c8;
                                                          in_stack_000001a0 = in_stack_000001c0;
                                                          uStack00000000000001ac =
                                                               uStack00000000000001cc;
                                                          uStack00000000000001b0 =
                                                               uStack00000000000001d0;
                                                          if (0x16 < *(uint *)(lVar63 + 0x18)) {
                                                            *(undefined4 *)(lVar63 + 0x2e0) = 0x15;
                                                            *(undefined8 *)(lVar63 + 0x2f8) =
                                                                 uStack00000000000001b4;
                                                            *(ulong *)(lVar63 + 0x2f0) =
                                                                 CONCAT44(uStack00000000000001d0,
                                                                          uStack00000000000001cc);
                                                            uVar4 = DAT_01df4e68;
                                                            *(ulong *)(lVar63 + 0x2ec) =
                                                                 CONCAT44(uStack00000000000001cc,
                                                                          uStack00000000000001c8);
                                                            *(undefined8 *)(lVar63 + 0x2e4) =
                                                                 in_stack_000001c0;
                                                            in_stack_00000180 = 0;
                                                            uStack0000000000000188 = 0;
                                                            uStack000000000000018c = 0;
                                                            in_stack_00000198 = 0;
                                                            uStack0000000000000190 = 0;
                                                            uStack0000000000000194 = 0;
                                                            FUN_0a188128(DAT_01df51d4,uVar7,uVar2,
                                                                         uVar41,uVar4,DAT_01df5090,
                                                                         uVar51,&stack0x00000180,0);
                                                            uStack0000000000000174 =
                                                                 CONCAT44(in_stack_00000198,
                                                                          uStack0000000000000194);
                                                            uStack0000000000000168 =
                                                                 uStack0000000000000188;
                                                            in_stack_00000160 = in_stack_00000180;
                                                            uStack000000000000016c =
                                                                 uStack000000000000018c;
                                                            uStack0000000000000170 =
                                                                 uStack0000000000000190;
                                                            if (0x17 < *(uint *)(lVar63 + 0x18)) {
                                                              *(undefined4 *)(lVar63 + 0x300) = 0x16
                                                              ;
                                                              *(undefined8 *)(lVar63 + 0x318) =
                                                                   uStack0000000000000174;
                                                              *(ulong *)(lVar63 + 0x310) =
                                                                   CONCAT44(uStack0000000000000190,
                                                                            uStack000000000000018c);
                                                              uVar4 = DAT_01df45e4;
                                                              *(ulong *)(lVar63 + 0x30c) =
                                                                   CONCAT44(uStack000000000000018c,
                                                                            uStack0000000000000188);
                                                              *(undefined8 *)(lVar63 + 0x304) =
                                                                   in_stack_00000180;
                                                              in_stack_00000140 = 0;
                                                              uStack0000000000000148 = 0;
                                                              uStack000000000000014c = 0;
                                                              in_stack_00000158 = 0;
                                                              uStack0000000000000150 = 0;
                                                              uStack0000000000000154 = 0;
                                                              FUN_0a188128(DAT_01df4c7c,uVar26,uVar9
                                                                           ,uVar46,uVar4,
                                                                           DAT_01df4664,uVar52,
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
                                                              if (0x18 < *(uint *)(lVar63 + 0x18)) {
                                                                *(undefined4 *)(lVar63 + 800) = 0x17
                                                                ;
                                                                *(undefined8 *)(lVar63 + 0x338) =
                                                                     uStack0000000000000134;
                                                                *(ulong *)(lVar63 + 0x330) =
                                                                     CONCAT44(uStack0000000000000150
                                                                              ,
                                                  uStack000000000000014c);
                                                  *(ulong *)(lVar63 + 0x32c) =
                                                       CONCAT44(uStack000000000000014c,
                                                                uStack0000000000000148);
                                                  *(undefined8 *)(lVar63 + 0x324) =
                                                       in_stack_00000140;
                                                  in_stack_00000100 = 0;
                                                  uStack0000000000000108 = 0;
                                                  uStack000000000000010c = 0;
                                                  in_stack_00000118 = 0;
                                                  uStack0000000000000110 = 0;
                                                  uStack0000000000000114 = 0;
                                                  FUN_0a188128(DAT_01df4aec,uVar24,uVar23,uVar12,
                                                               uVar12,uVar65,0x3f800000,
                                                               &stack0x00000100,0);
                                                  if (0x19 < *(uint *)(lVar63 + 0x18)) {
                                                    *(undefined4 *)(lVar63 + 0x340) = 0x18;
                                                    *(ulong *)(lVar63 + 0x358) =
                                                         CONCAT44(in_stack_00000118,
                                                                  uStack0000000000000114);
                                                    *(ulong *)(lVar63 + 0x350) =
                                                         CONCAT44(uStack0000000000000110,
                                                                  uStack000000000000010c);
                                                    *(ulong *)(lVar63 + 0x34c) =
                                                         CONCAT44(uStack000000000000010c,
                                                                  uStack0000000000000108);
                                                    *(undefined8 *)(lVar63 + 0x344) =
                                                         in_stack_00000100;
                                                    if (lVar62 != 0) {
                                                      *(long *)(lVar62 + 0x10) = lVar63;
                                                      thunk_FUN_049ee3d8((long *)(lVar62 + 0x10),
                                                                         lVar63);
                                                      plVar64 = (long *)(*(long *)(*unaff_x21 + 0xb8
                                                                                  ) + 8);
                                                      *plVar64 = lVar62;
                                                      thunk_FUN_049ee3d8(plVar64,lVar62);
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


