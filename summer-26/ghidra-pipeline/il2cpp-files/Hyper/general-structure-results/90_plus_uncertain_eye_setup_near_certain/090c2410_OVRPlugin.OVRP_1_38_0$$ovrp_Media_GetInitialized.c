/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetInitialized
ENTRY_POINT: 090c2410
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetInitialized
               (undefined1 param_1 [16],undefined1 param_2 [16])

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
  bool in_ZR;
  bool in_CY;
  long lVar60;
  long lVar61;
  long *plVar62;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
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
  undefined8 in_stack_00000c20;
  undefined8 in_stack_00000c28;
  
  *(long *)(unaff_x23 + 0xd4) = param_2._8_8_;
  *(long *)(unaff_x23 + 0xcc) = param_2._0_8_;
  uVar4 = DAT_01df49c0;
  if (in_CY && !in_ZR) {
    uVar64 = *(undefined8 *)(unaff_x23 + 0xd4);
    uVar63 = *(undefined8 *)(unaff_x23 + 0xcc);
    *(undefined4 *)(unaff_x20 + 0xe0) = 1;
    *(undefined8 *)(unaff_x20 + 0xec) = in_stack_00000c28;
    *(undefined8 *)(unaff_x20 + 0xe4) = in_stack_00000c20;
    *(undefined8 *)(unaff_x20 + 0xf8) = uVar64;
    *(undefined8 *)(unaff_x20 + 0xf0) = uVar63;
    uVar41 = DAT_01df4fe4;
    uVar30 = DAT_01df4d38;
    uVar5 = DAT_01df4ccc;
    FUN_0a188128(DAT_01df48b0,uVar4,DAT_01df4d38,DAT_01df4fe4,DAT_01df4b98,DAT_01df4640,
                 &stack0x00000c00,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0xb4);
    *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0xac);
    if ((uVar1 & 0xfffffff8) != 0) {
      uVar64 = *(undefined8 *)(unaff_x23 + 0x94);
      uVar63 = *(undefined8 *)(unaff_x23 + 0x8c);
      *(undefined4 *)(unaff_x20 + 0x100) = 6;
      *(undefined8 *)(unaff_x20 + 0x118) = uVar64;
      *(undefined8 *)(unaff_x20 + 0x110) = uVar63;
      *(undefined8 *)(unaff_x20 + 0x10c) = 0;
      *(undefined8 *)(unaff_x20 + 0x104) = 0;
      uVar54 = DAT_01df5150;
      uVar11 = DAT_01df4778;
      FUN_0a188128(DAT_01df4b44,DAT_01df4800,DAT_01df4c08,DAT_01df4778,DAT_01df4cd0,DAT_01df477c,
                   &stack0x00000bc0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x23 + 0x54) = *(undefined8 *)(unaff_x23 + 0x74);
      *(undefined8 *)(unaff_x23 + 0x4c) = *(undefined8 *)(unaff_x23 + 0x6c);
      if (8 < uVar1) {
        uVar64 = *(undefined8 *)(unaff_x23 + 0x54);
        uVar63 = *(undefined8 *)(unaff_x23 + 0x4c);
        *(undefined4 *)(unaff_x20 + 0x120) = 7;
        *(undefined8 *)(unaff_x20 + 0x138) = uVar64;
        *(undefined8 *)(unaff_x20 + 0x130) = uVar63;
        *(undefined8 *)(unaff_x20 + 300) = 0;
        *(undefined8 *)(unaff_x20 + 0x124) = 0;
        uVar57 = DAT_01df51ac;
        uVar55 = DAT_01df5154;
        uVar31 = DAT_01df4d3c;
        uVar16 = DAT_01df4938;
        FUN_0a188128(DAT_01df51a8,&stack0x00000b80,0);
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        *(undefined8 *)(unaff_x23 + 0x14) = *(undefined8 *)(unaff_x23 + 0x34);
        *(undefined8 *)(unaff_x23 + 0xc) = *(undefined8 *)(unaff_x23 + 0x2c);
        if (9 < uVar1) {
          uVar64 = *(undefined8 *)(unaff_x23 + 0x14);
          uVar63 = *(undefined8 *)(unaff_x23 + 0xc);
          *(undefined4 *)(unaff_x20 + 0x140) = 8;
          *(undefined8 *)(unaff_x20 + 0x158) = uVar64;
          *(undefined8 *)(unaff_x20 + 0x150) = uVar63;
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
            FUN_0a188128(DAT_01df4e0c,DAT_01df4c0c,DAT_01df4c64,0,0,0,0x3f800000,&stack0x00000b00,0)
            ;
            if (0xb < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x180) = 1;
              *(undefined8 *)(unaff_x20 + 0x198) = 0;
              *(undefined8 *)(unaff_x20 + 400) = 0;
              *(undefined8 *)(unaff_x20 + 0x18c) = 0;
              *(undefined8 *)(unaff_x20 + 0x184) = 0;
              uVar51 = DAT_01df50ec;
              uVar32 = DAT_01df4e10;
              uVar12 = DAT_01df4780;
              uVar6 = DAT_01df4644;
              FUN_0a188128(DAT_01df51b4,&stack0x00000ac0,0);
              if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x1a0) = 0xb;
                *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                *(undefined8 *)(unaff_x20 + 0x1ac) = 0;
                *(undefined8 *)(unaff_x20 + 0x1a4) = 0;
                uVar29 = DAT_01df4cd4;
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
                  uVar56 = DAT_01df5158;
                  uVar46 = DAT_01df5064;
                  uVar45 = DAT_01df5060;
                  uVar35 = DAT_01df4e54;
                  FUN_0a188128(DAT_01df50f0,&stack0x00000a40,0);
                  if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined4 *)(unaff_x20 + 0x1e0) = 0xd;
                    *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1ec) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1e4) = 0;
                    uVar43 = DAT_01df4ff0;
                    uVar42 = DAT_01df4fec;
                    uVar38 = DAT_01df4f1c;
                    FUN_0a188128(DAT_01df48b8,DAT_01df4fec,DAT_01df4ff0,DAT_01df4f1c,0x22800000,
                                 0x2300000023000000,0x3f800000,&stack0x00000a00,0);
                    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                      *(undefined4 *)(unaff_x20 + 0x200) = 0xe;
                      *(undefined8 *)(unaff_x20 + 0x218) = 0;
                      *(undefined8 *)(unaff_x20 + 0x210) = 0;
                      *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x204) = 0;
                      uVar33 = DAT_01df4e14;
                      uVar7 = DAT_01df4648;
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
                        uVar9 = DAT_01df46bc;
                        uVar3 = DAT_01df45d0;
                        FUN_0a188128(DAT_01df4844,&stack0x00000980,0);
                        if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined4 *)(unaff_x20 + 0x240) = 0x10;
                          *(undefined8 *)(unaff_x20 + 600) = 0;
                          *(undefined8 *)(unaff_x20 + 0x250) = 0;
                          *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                          *(undefined8 *)(unaff_x20 + 0x244) = 0;
                          uVar58 = DAT_01df51b8;
                          uVar53 = DAT_01df50f8;
                          uVar52 = DAT_01df50f4;
                          uVar47 = DAT_01df5068;
                          FUN_0a188128(DAT_01df4e58,&stack0x00000940,0);
                          if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x260) = 0x11;
                            *(undefined8 *)(unaff_x20 + 0x278) = 0;
                            *(undefined8 *)(unaff_x20 + 0x270) = 0;
                            *(undefined8 *)(unaff_x20 + 0x26c) = 0;
                            *(undefined8 *)(unaff_x20 + 0x264) = 0;
                            uVar48 = DAT_01df506c;
                            uVar36 = DAT_01df4eb4;
                            FUN_0a188128(DAT_01df4784,DAT_01df506c,DAT_01df4eb4,DAT_01df51bc,
                                         DAT_01df4ff4,DAT_01df4848,DAT_01df4d44,&stack0x00000900,0);
                            if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined4 *)(unaff_x20 + 0x280) = 0x12;
                              *(undefined8 *)(unaff_x20 + 0x298) = 0;
                              *(undefined8 *)(unaff_x20 + 0x290) = 0;
                              *(undefined8 *)(unaff_x20 + 0x28c) = 0;
                              *(undefined8 *)(unaff_x20 + 0x284) = 0;
                              FUN_0a188128(DAT_01df45d4,DAT_01df4db8,DAT_01df4788,DAT_01df45d8,
                                           unaff_s8,DAT_01df4b50,0x3f800000,&stack0x000008c0,0);
                              if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined4 *)(unaff_x20 + 0x2a0) = 0x13;
                                *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2ac) = 0;
                                *(undefined8 *)(unaff_x20 + 0x2a4) = 0;
                                uVar34 = DAT_01df4e18;
                                uVar22 = DAT_01df4b54;
                                uVar19 = DAT_01df4a08;
                                uVar15 = DAT_01df48c0;
                                FUN_0a188128(DAT_01df515c,&stack0x00000880,0);
                                if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined4 *)(unaff_x20 + 0x2c0) = 1;
                                  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2cc) = 0;
                                  *(undefined8 *)(unaff_x20 + 0x2c4) = 0;
                                  uVar59 = DAT_01df51c0;
                                  uVar40 = DAT_01df4f80;
                                  uVar37 = DAT_01df4eb8;
                                  uVar28 = DAT_01df4c70;
                                  FUN_0a188128(DAT_01df4c6c,&stack0x00000840,0);
                                  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
                                    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
                                    *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2ec) = 0;
                                    *(undefined8 *)(unaff_x20 + 0x2e4) = 0;
                                    uVar49 = DAT_01df5074;
                                    uVar39 = DAT_01df4f24;
                                    uVar8 = DAT_01df464c;
                                    uVar2 = DAT_01df456c;
                                    FUN_0a188128(DAT_01df5070,&stack0x00000800,0);
                                    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
                                      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
                                      *(undefined8 *)(unaff_x20 + 0x318) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x310) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x30c) = 0;
                                      *(undefined8 *)(unaff_x20 + 0x304) = 0;
                                      uVar50 = DAT_01df5078;
                                      uVar44 = DAT_01df4ff8;
                                      uVar26 = DAT_01df4c18;
                                      uVar10 = DAT_01df4734;
                                      FUN_0a188128(DAT_01df4650,&stack0x000007c0,0);
                                      if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
                                        *(undefined4 *)(unaff_x20 + 800) = 0x17;
                                        *(undefined8 *)(unaff_x20 + 0x338) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x330) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x32c) = 0;
                                        *(undefined8 *)(unaff_x20 + 0x324) = 0;
                                        uVar24 = DAT_01df4ba0;
                                        uVar23 = DAT_01df4b58;
                                        FUN_0a188128(DAT_01df4a0c,DAT_01df4ba0,DAT_01df4b58,unaff_s8
                                                     ,uVar38,DAT_01df45dc,0x3f800000,
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
                                            thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x21 + 0xb8));
                                            lVar60 = thunk_FUN_04983f60(*unaff_x21);
                                            OVRPlugin_BodyJointLocation__get_OrientationValid();
                                            lVar61 = FUN_04947fd0(*unaff_x22,0x1a);
                                            FUN_0a188128(DAT_01df4cdc,unaff_s12,unaff_s13,0,0,0,
                                                         0x3f800000,&stack0x00000740,0);
                                            if (lVar61 != 0) {
                                              if (*(int *)(lVar61 + 0x18) != 0) {
                                                *(undefined8 *)(lVar61 + 0x2c) = 0;
                                                *(undefined8 *)(lVar61 + 0x24) = 0;
                                                *(undefined8 *)(lVar61 + 0x38) = 0;
                                                *(undefined8 *)(lVar61 + 0x30) = 0;
                                                *(undefined4 *)(lVar61 + 0x20) = 1;
                                                FUN_0a188128(0,0,0,0,0,0,0x3f800000,&stack0x00000700
                                                             ,0);
                                                if ((*(uint *)(lVar61 + 0x18) & 0xfffffffe) != 0) {
                                                  *(undefined4 *)(lVar61 + 0x40) = 0xffffffff;
                                                  *(undefined8 *)(lVar61 + 0x4c) = 0;
                                                  *(undefined8 *)(lVar61 + 0x44) = 0;
                                                  uVar20 = DAT_01df4dbc;
                                                  *(undefined8 *)(lVar61 + 0x58) = 0;
                                                  *(undefined8 *)(lVar61 + 0x50) = 0;
                                                  FUN_0a188128(uVar20,unaff_s10,unaff_s11,
                                                               DAT_01df4ba4,DAT_01df4a10,
                                                               DAT_01df4850,DAT_01df4570,
                                                               &stack0x000006c0,0);
                                                  if (2 < *(uint *)(lVar61 + 0x18)) {
                                                    *(undefined4 *)(lVar61 + 0x60) = 1;
                                                    *(undefined8 *)(lVar61 + 0x6c) = 0;
                                                    *(undefined8 *)(lVar61 + 100) = 0;
                                                    uVar20 = DAT_01df507c;
                                                    *(undefined8 *)(lVar61 + 0x78) = 0;
                                                    *(undefined8 *)(lVar61 + 0x70) = 0;
                                                    FUN_0a188128(uVar20,DAT_01df4d48,DAT_01df451c,
                                                                 DAT_01df5080,DAT_01df51c4,
                                                                 DAT_01df4a78,DAT_01df494c,
                                                                 &stack0x00000680,0);
                                                    if ((*(uint *)(lVar61 + 0x18) & 0xfffffffc) != 0
                                                       ) {
                                                      *(undefined4 *)(lVar61 + 0x80) = 2;
                                                      *(undefined8 *)(lVar61 + 0x8c) = 0;
                                                      *(undefined8 *)(lVar61 + 0x84) = 0;
                                                      uVar20 = DAT_01df4d4c;
                                                      *(undefined8 *)(lVar61 + 0x98) = 0;
                                                      *(undefined8 *)(lVar61 + 0x90) = 0;
                                                      FUN_0a188128(uVar20,DAT_01df478c,DAT_01df4e5c,
                                                                   DAT_01df4654,DAT_01df4e1c,
                                                                   DAT_01df4c74,DAT_01df4dc0,
                                                                   &stack0x00000640,0);
                                                      if (4 < *(uint *)(lVar61 + 0x18)) {
                                                        *(undefined4 *)(lVar61 + 0xa0) = 3;
                                                        *(undefined8 *)(lVar61 + 0xac) = 0;
                                                        *(undefined8 *)(lVar61 + 0xa4) = 0;
                                                        *(undefined8 *)(lVar61 + 0xb8) = 0;
                                                        *(undefined8 *)(lVar61 + 0xb0) = 0;
                                                        FUN_0a188128(DAT_01df4854,DAT_01df4a14,
                                                                     DAT_01df4950,DAT_01df4574,0,0,
                                                                     0x3f800000,&stack0x00000600,0);
                                                        if (5 < *(uint *)(lVar61 + 0x18)) {
                                                          *(undefined8 *)(lVar61 + 0xcc) = 0;
                                                          *(undefined8 *)(lVar61 + 0xc4) = 0;
                                                          *(undefined8 *)(lVar61 + 0xd8) = 0;
                                                          *(undefined8 *)(lVar61 + 0xd0) = 0;
                                                          *(undefined4 *)(lVar61 + 0xc0) = 4;
                                                          FUN_0a188128(DAT_01df4e60,unaff_s14,
                                                                       unaff_s15,0,0,0,0x3f800000,
                                                                       &stack0x000005c0,0);
                                                          if (6 < *(uint *)(lVar61 + 0x18)) {
                                                            *(undefined4 *)(lVar61 + 0xe0) = 1;
                                                            *(undefined8 *)(lVar61 + 0xec) = 0;
                                                            *(undefined8 *)(lVar61 + 0xe4) = 0;
                                                            uVar20 = DAT_01df4a18;
                                                            *(undefined8 *)(lVar61 + 0xf8) = 0;
                                                            *(undefined8 *)(lVar61 + 0xf0) = 0;
                                                            FUN_0a188128(uVar20,uVar4,uVar30,uVar41,
                                                                         DAT_01df4790,DAT_01df4c78,
                                                                         uVar5,&stack0x00000580,0);
                                                            if ((*(uint *)(lVar61 + 0x18) &
                                                                0xfffffff8) != 0) {
                                                              *(undefined4 *)(lVar61 + 0x100) = 6;
                                                              *(undefined8 *)(lVar61 + 0x118) = 0;
                                                              *(undefined8 *)(lVar61 + 0x110) = 0;
                                                              *(undefined8 *)(lVar61 + 0x10c) = 0;
                                                              *(undefined8 *)(lVar61 + 0x104) = 0;
                                                              FUN_0a188128(DAT_01df5084,DAT_01df4658
                                                                           ,DAT_01df4954,uVar11,
                                                                           DAT_01df4ae4,DAT_01df51c8
                                                                           ,uVar54,&stack0x00000540,
                                                                           0);
                                                              if (8 < *(uint *)(lVar61 + 0x18)) {
                                                                *(undefined4 *)(lVar61 + 0x120) = 7;
                                                                *(undefined8 *)(lVar61 + 0x138) = 0;
                                                                *(undefined8 *)(lVar61 + 0x130) = 0;
                                                                uVar4 = DAT_01df5160;
                                                                *(undefined8 *)(lVar61 + 300) = 0;
                                                                *(undefined8 *)(lVar61 + 0x124) = 0;
                                                                FUN_0a188128(DAT_01df4c1c,uVar55,
                                                                             uVar31,uVar16,uVar4,
                                                                             DAT_01df4ae8,uVar57,
                                                                             &stack0x00000500,0);
                                                                if (9 < *(uint *)(lVar61 + 0x18)) {
                                                                  *(undefined4 *)(lVar61 + 0x140) =
                                                                       8;
                                                                  *(undefined8 *)(lVar61 + 0x158) =
                                                                       0;
                                                                  *(undefined8 *)(lVar61 + 0x150) =
                                                                       0;
                                                                  *(undefined8 *)(lVar61 + 0x14c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar61 + 0x144) =
                                                                       0;
                                                                  FUN_0a188128(DAT_01df4a7c,
                                                                               DAT_01df51cc,
                                                                               DAT_01df465c,0,
                                                                               DAT_01df4ba8,0,
                                                                               0x3f800000,
                                                                               &stack0x000004c0,0);
                                                                  if (10 < *(uint *)(lVar61 + 0x18))
                                                                  {
                                                                    *(undefined4 *)(lVar61 + 0x160)
                                                                         = 9;
                                                                    *(undefined8 *)(lVar61 + 0x178)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar61 + 0x170)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar61 + 0x16c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar61 + 0x164)
                                                                         = 0;
                                                                    FUN_0a188128(DAT_01df4958,uVar25
                                                                                 ,uVar27,0,0,0,
                                                                                 0x3f800000,
                                                                                 &stack0x00000480,0)
                                                                    ;
                                                                    if (0xb < *(uint *)(lVar61 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar61 + 0x180) = 1;
                                                    *(undefined8 *)(lVar61 + 0x198) = 0;
                                                    *(undefined8 *)(lVar61 + 400) = 0;
                                                    uVar4 = DAT_01df4ebc;
                                                    *(undefined8 *)(lVar61 + 0x18c) = 0;
                                                    *(undefined8 *)(lVar61 + 0x184) = 0;
                                                    FUN_0a188128(DAT_01df4520,uVar12,uVar6,uVar32,
                                                                 uVar4,DAT_01df50fc,uVar51,
                                                                 &stack0x00000440,0);
                                                    if (0xc < *(uint *)(lVar61 + 0x18)) {
                                                      *(undefined4 *)(lVar61 + 0x1a0) = 0xb;
                                                      *(undefined8 *)(lVar61 + 0x1b8) = 0;
                                                      *(undefined8 *)(lVar61 + 0x1b0) = 0;
                                                      uVar4 = DAT_01df45e0;
                                                      *(undefined8 *)(lVar61 + 0x1ac) = 0;
                                                      *(undefined8 *)(lVar61 + 0x1a4) = 0;
                                                      FUN_0a188128(DAT_01df495c,uVar13,uVar17,uVar29
                                                                   ,uVar4,DAT_01df5100,uVar18,
                                                                   &stack0x00000400,0);
                                                      if (0xd < *(uint *)(lVar61 + 0x18)) {
                                                        *(undefined4 *)(lVar61 + 0x1c0) = 0xc;
                                                        *(undefined8 *)(lVar61 + 0x1d8) = 0;
                                                        *(undefined8 *)(lVar61 + 0x1d0) = 0;
                                                        uVar4 = DAT_01df4ffc;
                                                        *(undefined8 *)(lVar61 + 0x1cc) = 0;
                                                        *(undefined8 *)(lVar61 + 0x1c4) = 0;
                                                        FUN_0a188128(DAT_01df4794,uVar35,uVar56,
                                                                     uVar45,uVar4,DAT_01df4660,
                                                                     uVar46,&stack0x000003c0,0);
                                                        if (0xe < *(uint *)(lVar61 + 0x18)) {
                                                          *(undefined4 *)(lVar61 + 0x1e0) = 0xd;
                                                          *(undefined8 *)(lVar61 + 0x1f8) = 0;
                                                          *(undefined8 *)(lVar61 + 0x1f0) = 0;
                                                          *(undefined8 *)(lVar61 + 0x1ec) = 0;
                                                          *(undefined8 *)(lVar61 + 0x1e4) = 0;
                                                          FUN_0a188128(DAT_01df4ec0,uVar42,uVar43,
                                                                       uVar38,0xa2800000,
                                                                       0xa3000000a3000000,0x3f800000
                                                                       ,&stack0x00000380,0);
                                                          if ((*(uint *)(lVar61 + 0x18) & 0xfffffff0
                                                              ) != 0) {
                                                            *(undefined4 *)(lVar61 + 0x200) = 0xe;
                                                            *(undefined8 *)(lVar61 + 0x218) = 0;
                                                            *(undefined8 *)(lVar61 + 0x210) = 0;
                                                            *(undefined8 *)(lVar61 + 0x20c) = 0;
                                                            *(undefined8 *)(lVar61 + 0x204) = 0;
                                                            FUN_0a188128(DAT_01df4f28,uVar33,uVar7,0
                                                                         ,0,0,0x3f800000,
                                                                         &stack0x00000340,0);
                                                            if (0x10 < *(uint *)(lVar61 + 0x18)) {
                                                              *(undefined4 *)(lVar61 + 0x220) = 1;
                                                              *(undefined8 *)(lVar61 + 0x238) = 0;
                                                              *(undefined8 *)(lVar61 + 0x230) = 0;
                                                              uVar4 = DAT_01df4e20;
                                                              *(undefined8 *)(lVar61 + 0x22c) = 0;
                                                              *(undefined8 *)(lVar61 + 0x224) = 0;
                                                              FUN_0a188128(DAT_01df4d50,uVar14,uVar9
                                                                           ,uVar21,uVar4,
                                                                           DAT_01df49c4,uVar3,
                                                                           &stack0x00000300,0);
                                                              if (0x11 < *(uint *)(lVar61 + 0x18)) {
                                                                *(undefined4 *)(lVar61 + 0x240) =
                                                                     0x10;
                                                                *(undefined8 *)(lVar61 + 600) = 0;
                                                                *(undefined8 *)(lVar61 + 0x250) = 0;
                                                                uVar4 = DAT_01df4804;
                                                                *(undefined8 *)(lVar61 + 0x24c) = 0;
                                                                *(undefined8 *)(lVar61 + 0x244) = 0;
                                                                FUN_0a188128(DAT_01df4dc4,uVar52,
                                                                             uVar58,uVar53,uVar4,
                                                                             DAT_01df5000,uVar47,
                                                                             &stack0x000002c0,0);
                                                                if (0x12 < *(uint *)(lVar61 + 0x18))
                                                                {
                                                                  *(undefined4 *)(lVar61 + 0x260) =
                                                                       0x11;
                                                                  *(undefined8 *)(lVar61 + 0x278) =
                                                                       0;
                                                                  *(undefined8 *)(lVar61 + 0x270) =
                                                                       0;
                                                                  uVar4 = DAT_01df4dc8;
                                                                  *(undefined8 *)(lVar61 + 0x26c) =
                                                                       0;
                                                                  *(undefined8 *)(lVar61 + 0x264) =
                                                                       0;
                                                                  FUN_0a188128(DAT_01df4a1c,uVar48,
                                                                               uVar36,uVar4,
                                                                               DAT_01df4e24,
                                                                               DAT_01df4f8c,
                                                                               DAT_01df5004,
                                                                               &stack0x00000280,0);
                                                                  if (0x13 < *(uint *)(lVar61 + 0x18
                                                                                      )) {
                                                                    *(undefined4 *)(lVar61 + 0x280)
                                                                         = 0x12;
                                                                    *(undefined8 *)(lVar61 + 0x298)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar61 + 0x290)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar61 + 0x28c)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar61 + 0x284)
                                                                         = 0;
                                                                    uVar4 = DAT_01df508c;
                                                                    FUN_0a188128(DAT_01df4bac,
                                                                                 DAT_01df5088,
                                                                                 DAT_01df51d0,uVar38
                                                                                 ,DAT_01df508c,
                                                                                 0x8800000088000000,
                                                                                 0x3f800000,
                                                                                 &stack0x00000240,0)
                                                                    ;
                                                                    if (0x14 < *(uint *)(lVar61 + 
                                                  0x18)) {
                                                    *(undefined4 *)(lVar61 + 0x2a0) = 0x13;
                                                    *(undefined8 *)(lVar61 + 0x2b8) = 0;
                                                    *(undefined8 *)(lVar61 + 0x2b0) = 0;
                                                    uVar5 = DAT_01df4e64;
                                                    *(undefined8 *)(lVar61 + 0x2ac) = 0;
                                                    *(undefined8 *)(lVar61 + 0x2a4) = 0;
                                                    FUN_0a188128(DAT_01df4798,uVar15,uVar19,uVar22,
                                                                 uVar5,DAT_01df4578,uVar34,
                                                                 &stack0x00000200,0);
                                                    in_stack_000001e0 = 0;
                                                    uStack00000000000001e8 = 0;
                                                    uStack00000000000001ec = 0;
                                                    in_stack_000001f0 = 0;
                                                    if (0x15 < *(uint *)(lVar61 + 0x18)) {
                                                      *(undefined4 *)(lVar61 + 0x2c0) = 1;
                                                      *(undefined8 *)(lVar61 + 0x2d8) = 0;
                                                      *(undefined8 *)(lVar61 + 0x2d0) = 0;
                                                      uVar5 = DAT_01df4d54;
                                                      *(undefined8 *)(lVar61 + 0x2cc) = 0;
                                                      *(undefined8 *)(lVar61 + 0x2c4) = 0;
                                                      in_stack_000001c0 = 0;
                                                      uStack00000000000001c8 = 0;
                                                      uStack00000000000001cc = 0;
                                                      in_stack_000001d8 = 0;
                                                      uStack00000000000001d0 = 0;
                                                      uStack00000000000001d4 = 0;
                                                      FUN_0a188128(DAT_01df4b5c,uVar28,uVar40,uVar37
                                                                   ,uVar5,DAT_01df4bb0,uVar59,
                                                                   &stack0x000001c0,0);
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
                                                      if (0x16 < *(uint *)(lVar61 + 0x18)) {
                                                        *(undefined4 *)(lVar61 + 0x2e0) = 0x15;
                                                        *(undefined8 *)(lVar61 + 0x2f8) =
                                                             uStack00000000000001b4;
                                                        *(ulong *)(lVar61 + 0x2f0) =
                                                             CONCAT44(uStack00000000000001d0,
                                                                      uStack00000000000001cc);
                                                        uVar5 = DAT_01df4e68;
                                                        *(ulong *)(lVar61 + 0x2ec) =
                                                             CONCAT44(uStack00000000000001cc,
                                                                      uStack00000000000001c8);
                                                        *(undefined8 *)(lVar61 + 0x2e4) =
                                                             in_stack_000001c0;
                                                        in_stack_00000180 = 0;
                                                        uStack0000000000000188 = 0;
                                                        uStack000000000000018c = 0;
                                                        in_stack_00000198 = 0;
                                                        uStack0000000000000190 = 0;
                                                        uStack0000000000000194 = 0;
                                                        FUN_0a188128(DAT_01df51d4,uVar8,uVar2,uVar39
                                                                     ,uVar5,DAT_01df5090,uVar49,
                                                                     &stack0x00000180,0);
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
                                                        if (0x17 < *(uint *)(lVar61 + 0x18)) {
                                                          *(undefined4 *)(lVar61 + 0x300) = 0x16;
                                                          *(undefined8 *)(lVar61 + 0x318) =
                                                               uStack0000000000000174;
                                                          *(ulong *)(lVar61 + 0x310) =
                                                               CONCAT44(uStack0000000000000190,
                                                                        uStack000000000000018c);
                                                          uVar5 = DAT_01df45e4;
                                                          *(ulong *)(lVar61 + 0x30c) =
                                                               CONCAT44(uStack000000000000018c,
                                                                        uStack0000000000000188);
                                                          *(undefined8 *)(lVar61 + 0x304) =
                                                               in_stack_00000180;
                                                          in_stack_00000140 = 0;
                                                          uStack0000000000000148 = 0;
                                                          uStack000000000000014c = 0;
                                                          in_stack_00000158 = 0;
                                                          uStack0000000000000150 = 0;
                                                          uStack0000000000000154 = 0;
                                                          FUN_0a188128(DAT_01df4c7c,uVar26,uVar10,
                                                                       uVar44,uVar5,DAT_01df4664,
                                                                       uVar50,&stack0x00000140,0);
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
                                                          if (0x18 < *(uint *)(lVar61 + 0x18)) {
                                                            *(undefined4 *)(lVar61 + 800) = 0x17;
                                                            *(undefined8 *)(lVar61 + 0x338) =
                                                                 uStack0000000000000134;
                                                            *(ulong *)(lVar61 + 0x330) =
                                                                 CONCAT44(uStack0000000000000150,
                                                                          uStack000000000000014c);
                                                            *(ulong *)(lVar61 + 0x32c) =
                                                                 CONCAT44(uStack000000000000014c,
                                                                          uStack0000000000000148);
                                                            *(undefined8 *)(lVar61 + 0x324) =
                                                                 in_stack_00000140;
                                                            in_stack_00000100 = 0;
                                                            uStack0000000000000108 = 0;
                                                            uStack000000000000010c = 0;
                                                            in_stack_00000118 = 0;
                                                            uStack0000000000000110 = 0;
                                                            uStack0000000000000114 = 0;
                                                            FUN_0a188128(DAT_01df4aec,uVar24,uVar23,
                                                                         unaff_s8,unaff_s8,uVar4,
                                                                         0x3f800000,&stack0x00000100
                                                                         ,0);
                                                            if (0x19 < *(uint *)(lVar61 + 0x18)) {
                                                              *(undefined4 *)(lVar61 + 0x340) = 0x18
                                                              ;
                                                              *(ulong *)(lVar61 + 0x358) =
                                                                   CONCAT44(in_stack_00000118,
                                                                            uStack0000000000000114);
                                                              *(ulong *)(lVar61 + 0x350) =
                                                                   CONCAT44(uStack0000000000000110,
                                                                            uStack000000000000010c);
                                                              *(ulong *)(lVar61 + 0x34c) =
                                                                   CONCAT44(uStack000000000000010c,
                                                                            uStack0000000000000108);
                                                              *(undefined8 *)(lVar61 + 0x344) =
                                                                   in_stack_00000100;
                                                              if (lVar60 != 0) {
                                                                *(long *)(lVar60 + 0x10) = lVar61;
                                                                thunk_FUN_049ee3d8((long *)(lVar60 +
                                                                                           0x10),
                                                                                   lVar61);
                                                                plVar62 = (long *)(*(long *)(*
                                                  unaff_x21 + 0xb8) + 8);
                                                  *plVar62 = lVar60;
                                                  thunk_FUN_049ee3d8(plVar62,lVar60);
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
LAB_090c3bb8:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


