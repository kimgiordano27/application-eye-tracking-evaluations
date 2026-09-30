/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetSkeleton3
ENTRY_POINT: 04f96bf4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetSkeleton3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool in_ZR;
  bool in_CY;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined8 uStack00000000000001d4;
  undefined8 in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  
  *(long *)(unaff_x21 + 0x14) = param_2._8_8_;
  *(long *)(unaff_x21 + 0xc) = param_2._0_8_;
  if (in_CY && !in_ZR) {
    uVar9 = *(undefined8 *)(unaff_x21 + 0x14);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xc);
    *(long *)(unaff_x20 + 0x170) = param_1._8_8_;
    *(long *)(unaff_x20 + 0x168) = param_1._0_8_;
    uVar2 = DAT_01032208;
    *(undefined8 *)(unaff_x20 + 0x17c) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x174) = uVar8;
    uVar7 = DAT_0103284c;
    uVar6 = DAT_01032558;
    uVar5 = DAT_01032554;
    uVar4 = DAT_0103233c;
    uVar3 = DAT_0103225c;
    uVar1 = DAT_01031e94;
    *(undefined4 *)(unaff_x20 + 0x164) = 0;
    *(undefined4 *)(unaff_x20 + 0x184) = 0;
    FUN_05c99d80(uVar2,uVar1,uVar4,uVar5,uVar3,uVar7,uVar6,&stack0x00000360,0);
    if (10 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x188) = 9;
      *(undefined8 *)(unaff_x20 + 0x194) = 0;
      *(undefined8 *)(unaff_x20 + 0x18c) = 0;
      uVar3 = DAT_0103220c;
      *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
      *(undefined8 *)(unaff_x20 + 0x198) = 0;
      uVar7 = DAT_010328b4;
      uVar6 = DAT_010328b0;
      uVar5 = DAT_010325b4;
      uVar4 = DAT_01032210;
      uVar2 = DAT_01032030;
      uVar1 = DAT_01031f00;
      *(undefined4 *)(unaff_x20 + 0x1a8) = 0;
      FUN_05c99d80(uVar3,uVar1,uVar4,uVar2,uVar5,uVar6,uVar7,&stack0x00000320,0);
      if (0xb < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x1ac) = 10;
        *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
        *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
        *(undefined8 *)(unaff_x20 + 0x1c4) = 0;
        *(undefined8 *)(unaff_x20 + 0x1bc) = 0;
        uVar7 = DAT_0103290c;
        uVar6 = DAT_0103274c;
        uVar5 = DAT_010325b8;
        uVar4 = DAT_010323b8;
        uVar3 = DAT_010322d4;
        uVar2 = DAT_01032260;
        uVar1 = DAT_01031e98;
        *(undefined4 *)(unaff_x20 + 0x1cc) = 0;
        FUN_05c99d80(uVar4,uVar6,uVar3,uVar7,uVar5,uVar2,uVar1,&stack0x000002e0,0);
        if (0xc < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
          *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
          uVar4 = DAT_01032910;
          *(undefined8 *)(unaff_x20 + 0x1dc) = 0;
          *(undefined8 *)(unaff_x20 + 0x1d4) = 0;
          uVar5 = DAT_01032984;
          uVar2 = DAT_01032264;
          uVar1 = DAT_01031d40;
          *(undefined4 *)(unaff_x20 + 0x1d0) = 0;
          uVar3 = DAT_0103240c;
          *(undefined4 *)(unaff_x20 + 0x1f0) = 0;
          FUN_05c99d80(uVar2,0,uVar4,uVar1,uVar5,uVar3,DAT_01032750,&stack0x000002a0,0);
          if (0xd < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 500) = 0xc;
            *(undefined8 *)(unaff_x20 + 0x200) = 0;
            *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
            uVar1 = DAT_01031c6c;
            *(undefined8 *)(unaff_x20 + 0x20c) = 0;
            *(undefined8 *)(unaff_x20 + 0x204) = 0;
            uVar7 = DAT_01032604;
            uVar6 = DAT_010325bc;
            uVar5 = DAT_010324dc;
            uVar4 = DAT_01032410;
            uVar3 = DAT_01031fac;
            uVar2 = DAT_01031ccc;
            *(undefined4 *)(unaff_x20 + 0x214) = 0;
            FUN_05c99d80(uVar1,uVar2,uVar5,uVar7,uVar4,uVar3,uVar6,&stack0x00000260,0);
            if (0xe < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x218) = 0xd;
              *(undefined8 *)(unaff_x20 + 0x224) = 0;
              *(undefined8 *)(unaff_x20 + 0x21c) = 0;
              uVar7 = DAT_01032988;
              *(undefined8 *)(unaff_x20 + 0x230) = 0;
              *(undefined8 *)(unaff_x20 + 0x228) = 0;
              uVar6 = DAT_01032914;
              uVar5 = DAT_010326d4;
              uVar4 = DAT_01032674;
              uVar3 = DAT_0103246c;
              uVar2 = DAT_010320c4;
              uVar1 = DAT_01032034;
              *(undefined4 *)(unaff_x20 + 0x238) = 0;
              FUN_05c99d80(uVar7,uVar1,uVar2,uVar5,uVar4,uVar6,uVar3,&stack0x00000220,0);
              if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                *(undefined8 *)(unaff_x20 + 0x248) = 0;
                *(undefined8 *)(unaff_x20 + 0x240) = 0;
                uVar3 = DAT_01032214;
                *(undefined8 *)(unaff_x20 + 0x254) = 0;
                *(undefined8 *)(unaff_x20 + 0x24c) = 0;
                uVar7 = DAT_01032918;
                uVar6 = DAT_01032850;
                uVar5 = DAT_010324e0;
                uVar4 = DAT_01032470;
                uVar2 = DAT_01031e9c;
                uVar1 = DAT_01031e20;
                *(undefined4 *)(unaff_x20 + 0x23c) = 0;
                *(undefined4 *)(unaff_x20 + 0x25c) = 0;
                in_stack_000001e0 = 0;
                uStack00000000000001e8 = 0;
                uStack00000000000001ec = 0;
                in_stack_000001f0 = 0;
                FUN_05c99d80(uVar2,uVar1,uVar3,uVar7,uVar5,uVar4,uVar6,&stack0x000001e0,0);
                uStack00000000000001d4 = 0;
                uStack00000000000001c8 = uStack00000000000001e8;
                in_stack_000001c0 = in_stack_000001e0;
                uStack00000000000001cc = uStack00000000000001ec;
                uStack00000000000001d0 = in_stack_000001f0;
                if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
                  *(undefined8 *)(unaff_x20 + 0x278) = 0;
                  *(ulong *)(unaff_x20 + 0x270) = CONCAT44(in_stack_000001f0,uStack00000000000001ec)
                  ;
                  *(ulong *)(unaff_x20 + 0x26c) =
                       CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                  *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
                  FUN_05fb8c84(DAT_01031cd0,DAT_01032268,DAT_0103255c,DAT_010324e4,DAT_01032038,
                               DAT_010321a8,&stack0x000001a0);
                  return;
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


