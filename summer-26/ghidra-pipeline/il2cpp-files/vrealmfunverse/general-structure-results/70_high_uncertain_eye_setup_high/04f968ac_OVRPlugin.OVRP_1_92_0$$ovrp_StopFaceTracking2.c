/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StopFaceTracking2
ENTRY_POINT: 04f968ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StopFaceTracking2(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined8 uStack00000000000001d4;
  undefined8 in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  
  uVar5 = DAT_010320c0;
                    /* try { // try from 04f968b8 to 050968bf has its CatchHandler @ 04f96930 */
  uVar10 = *(undefined8 *)(unaff_x21 + 0x94);
  uVar9 = *(undefined8 *)(unaff_x21 + 0x8c);
  *(undefined4 *)(unaff_x20 + 0x8c) = 2;
  *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000508;
  *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000500;
  uVar3 = DAT_01031d3c;
  *(undefined8 *)(unaff_x20 + 0xa4) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x9c) = uVar9;
  uVar8 = DAT_010327bc;
  uVar7 = DAT_010323b0;
  uVar6 = DAT_010323ac;
  uVar4 = DAT_01031dc0;
  uVar2 = DAT_01031cc8;
                    /* try { // try from 04f968f8 to 05096903 has its CatchHandler @ 04f9692c */
                    /* try { // try from 04f96904 to 0509694b has its CatchHandler @ 04f96808 */
  *(undefined4 *)(unaff_x20 + 0xac) = 0;
  FUN_05c99d80(uVar3,uVar6,uVar5,uVar2,uVar8,uVar7,uVar4,&stack0x000004e0,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
  if (4 < uVar1) {
    uVar10 = *(undefined8 *)(unaff_x21 + 0x54);
    uVar9 = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined4 *)(unaff_x20 + 0xb0) = 3;
    *(undefined8 *)(unaff_x20 + 0xbc) = 0;
    *(undefined8 *)(unaff_x20 + 0xb4) = 0;
    *(undefined8 *)(unaff_x20 + 200) = uVar10;
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar9;
    uVar8 = DAT_01032908;
    uVar7 = DAT_010327c0;
    uVar6 = DAT_01032600;
    uVar4 = DAT_010322d0;
    uVar3 = DAT_01031e18;
    uVar2 = DAT_01031c68;
    *(undefined4 *)(unaff_x20 + 0xd0) = 0;
    FUN_05c99d80(uVar8,uVar7,uVar5,uVar4,uVar6,uVar2,uVar3,&stack0x000004a0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
    if (5 < uVar1) {
      uVar10 = *(undefined8 *)(unaff_x21 + 0x14);
      uVar9 = *(undefined8 *)(unaff_x21 + 0xc);
      *(undefined4 *)(unaff_x20 + 0xd4) = 4;
      *(undefined8 *)(unaff_x20 + 0xe0) = 0;
      *(undefined8 *)(unaff_x20 + 0xd8) = 0;
      uVar3 = DAT_01032024;
      *(undefined8 *)(unaff_x20 + 0xec) = uVar10;
      *(undefined8 *)(unaff_x20 + 0xe4) = uVar9;
      uVar8 = DAT_01032844;
      uVar7 = DAT_010326cc;
      uVar6 = DAT_0103266c;
      uVar5 = DAT_010324d4;
      uVar4 = DAT_01032028;
      uVar2 = DAT_01031dc4;
      *(undefined4 *)(unaff_x20 + 0xf4) = 0;
      FUN_05c99d80(uVar3,uVar7,uVar4,uVar8,uVar2,uVar6,uVar5,&stack0x00000460,0);
      if (6 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x104) = 0;
        *(undefined8 *)(unaff_x20 + 0xfc) = 0;
        uVar7 = DAT_010327c4;
        *(undefined8 *)(unaff_x20 + 0x110) = 0;
        *(undefined8 *)(unaff_x20 + 0x108) = 0;
        uVar8 = DAT_01032848;
        uVar6 = DAT_010326d0;
        uVar5 = DAT_01032670;
        uVar4 = DAT_01032468;
        uVar3 = DAT_01031efc;
        uVar2 = DAT_01031dc8;
        *(undefined4 *)(unaff_x20 + 0xf8) = 0;
        *(undefined4 *)(unaff_x20 + 0x118) = 0;
        FUN_05c99d80(uVar3,uVar5,uVar7,uVar6,uVar2,uVar8,uVar4,&stack0x00000420,0);
        if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
          *(undefined4 *)(unaff_x20 + 0x11c) = 6;
          *(undefined8 *)(unaff_x20 + 0x128) = 0;
          *(undefined8 *)(unaff_x20 + 0x120) = 0;
          *(undefined8 *)(unaff_x20 + 0x134) = 0;
          *(undefined8 *)(unaff_x20 + 300) = 0;
          uVar8 = DAT_01032550;
          uVar7 = DAT_01032404;
          uVar6 = DAT_01032400;
          uVar5 = DAT_01032338;
          uVar4 = DAT_010321a4;
          uVar3 = DAT_01031e90;
          uVar2 = DAT_01031e1c;
          *(undefined4 *)(unaff_x20 + 0x13c) = 0;
          FUN_05c99d80(uVar2,uVar6,uVar7,uVar8,uVar5,uVar4,uVar3,&stack0x000003e0,0);
          if (8 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x140) = 7;
            *(undefined8 *)(unaff_x20 + 0x158) = 0;
            *(undefined8 *)(unaff_x20 + 0x150) = 0;
            *(undefined8 *)(unaff_x20 + 0x14c) = 0;
            *(undefined8 *)(unaff_x20 + 0x144) = 0;
            uVar8 = DAT_01032980;
            uVar7 = DAT_010328ac;
            uVar6 = DAT_010324d8;
            uVar5 = DAT_01032408;
            uVar4 = DAT_010323b4;
            uVar3 = DAT_01032138;
            uVar2 = DAT_0103202c;
            *(undefined4 *)(unaff_x20 + 0x160) = 0;
            FUN_05c99d80(uVar5,uVar8,uVar7,uVar6,uVar4,uVar2,uVar3,&stack0x000003a0,0);
            if (9 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined8 *)(unaff_x20 + 0x170) = 0;
              *(undefined8 *)(unaff_x20 + 0x168) = 0;
              uVar3 = DAT_01032208;
              *(undefined8 *)(unaff_x20 + 0x17c) = 0;
              *(undefined8 *)(unaff_x20 + 0x174) = 0;
              uVar8 = DAT_0103284c;
              uVar7 = DAT_01032558;
              uVar6 = DAT_01032554;
              uVar5 = DAT_0103233c;
              uVar4 = DAT_0103225c;
              uVar2 = DAT_01031e94;
              *(undefined4 *)(unaff_x20 + 0x164) = 0;
              *(undefined4 *)(unaff_x20 + 0x184) = 0;
              FUN_05c99d80(uVar3,uVar2,uVar5,uVar6,uVar4,uVar8,uVar7,&stack0x00000360,0);
              if (10 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined4 *)(unaff_x20 + 0x188) = 9;
                *(undefined8 *)(unaff_x20 + 0x194) = 0;
                *(undefined8 *)(unaff_x20 + 0x18c) = 0;
                uVar4 = DAT_0103220c;
                *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
                *(undefined8 *)(unaff_x20 + 0x198) = 0;
                uVar8 = DAT_010328b4;
                uVar7 = DAT_010328b0;
                uVar6 = DAT_010325b4;
                uVar5 = DAT_01032210;
                uVar3 = DAT_01032030;
                uVar2 = DAT_01031f00;
                *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
                FUN_05c99d80(uVar4,uVar2,uVar5,uVar3,uVar6,uVar7,uVar8,&stack0x00000320,0);
                if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
                  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
                  *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
                  uVar8 = DAT_0103290c;
                  uVar7 = DAT_0103274c;
                  uVar6 = DAT_010325b8;
                  uVar5 = DAT_010323b8;
                  uVar4 = DAT_010322d4;
                  uVar3 = DAT_01032260;
                  uVar2 = DAT_01031e98;
                  *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
                  FUN_05c99d80(uVar5,uVar7,uVar4,uVar8,uVar6,uVar3,uVar2,&stack0x000002e0,0);
                  if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
                    uVar5 = DAT_01032910;
                    *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
                    *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
                    uVar6 = DAT_01032984;
                    uVar3 = DAT_01032264;
                    uVar2 = DAT_01031d40;
                    *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
                    uVar4 = DAT_0103240c;
                    *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
                    FUN_05c99d80(uVar3,0,uVar5,uVar2,uVar6,uVar4,DAT_01032750,&stack0x000002a0,0);
                    if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined4 *)(unaff_x20 + 500) = 0xc;
                      *(undefined8 *)(unaff_x20 + 0x200) = 0;
                      *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
                      uVar2 = DAT_01031c6c;
                      *(undefined8 *)(unaff_x20 + 0x20c) = 0;
                      *(undefined8 *)(unaff_x20 + 0x204) = 0;
                      uVar8 = DAT_01032604;
                      uVar7 = DAT_010325bc;
                      uVar6 = DAT_010324dc;
                      uVar5 = DAT_01032410;
                      uVar4 = DAT_01031fac;
                      uVar3 = DAT_01031ccc;
                      *(undefined4 *)(unaff_x20 + 0x214) = 0;
                      FUN_05c99d80(uVar2,uVar3,uVar6,uVar8,uVar5,uVar4,uVar7,&stack0x00000260,0);
                      if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
                        *(undefined8 *)(unaff_x20 + 0x224) = 0;
                        *(undefined8 *)(unaff_x20 + 0x21c) = 0;
                        uVar8 = DAT_01032988;
                        *(undefined8 *)(unaff_x20 + 0x230) = 0;
                        *(undefined8 *)(unaff_x20 + 0x228) = 0;
                        uVar7 = DAT_01032914;
                        uVar6 = DAT_010326d4;
                        uVar5 = DAT_01032674;
                        uVar4 = DAT_0103246c;
                        uVar3 = DAT_010320c4;
                        uVar2 = DAT_01032034;
                        *(undefined4 *)(unaff_x20 + 0x238) = 0;
                        FUN_05c99d80(uVar8,uVar2,uVar3,uVar6,uVar5,uVar7,uVar4,&stack0x00000220,0);
                        if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                          *(undefined8 *)(unaff_x20 + 0x248) = 0;
                          *(undefined8 *)(unaff_x20 + 0x240) = 0;
                          uVar4 = DAT_01032214;
                          *(undefined8 *)(unaff_x20 + 0x254) = 0;
                          *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                          uVar8 = DAT_01032918;
                          uVar7 = DAT_01032850;
                          uVar6 = DAT_010324e0;
                          uVar5 = DAT_01032470;
                          uVar3 = DAT_01031e9c;
                          uVar2 = DAT_01031e20;
                          *(undefined4 *)(unaff_x20 + 0x23c) = 0;
                          *(undefined4 *)(unaff_x20 + 0x25c) = 0;
                          in_stack_000001e0 = 0;
                          uStack00000000000001e8 = 0;
                          uStack00000000000001ec = 0;
                          in_stack_000001f0 = 0;
                          FUN_05c99d80(uVar3,uVar2,uVar4,uVar8,uVar6,uVar5,uVar7,&stack0x000001e0,0)
                          ;
                          uStack00000000000001d4 = 0;
                          uStack00000000000001c8 = uStack00000000000001e8;
                          in_stack_000001c0 = in_stack_000001e0;
                          uStack00000000000001cc = uStack00000000000001ec;
                          uStack00000000000001d0 = in_stack_000001f0;
                          if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
                            *(undefined8 *)(unaff_x20 + 0x278) = 0;
                            *(ulong *)(unaff_x20 + 0x270) =
                                 CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                            *(ulong *)(unaff_x20 + 0x26c) =
                                 CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                            *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
                            FUN_05fb8c84(DAT_01031cd0,DAT_01032268,DAT_0103255c,DAT_010324e4,
                                         DAT_01032038,DAT_010321a8,&stack0x000001a0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


