/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$ovrp_SetWideMotionModeHandPoses
ENTRY_POINT: 04f96d7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_possible_biometrics_hits_2
*/


void OVRPlugin_OVRP_1_93_0__ovrp_SetWideMotionModeHandPoses(void)

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
  
  FUN_05c99d80();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
  if (0xc < uVar1) {
    uVar9 = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x1e8) = *(undefined8 *)(unaff_x21 + 0x54);
    *(undefined8 *)(unaff_x20 + 0x1e0) = uVar9;
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
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
    if (0xd < uVar1) {
      uVar10 = *(undefined8 *)(unaff_x21 + 0x14);
      uVar9 = *(undefined8 *)(unaff_x21 + 0xc);
      *(undefined4 *)(unaff_x20 + 500) = 0xc;
      *(undefined8 *)(unaff_x20 + 0x200) = 0;
      *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
      uVar2 = DAT_01031c6c;
      *(undefined8 *)(unaff_x20 + 0x20c) = uVar10;
      *(undefined8 *)(unaff_x20 + 0x204) = uVar9;
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
          FUN_05c99d80(uVar3,uVar2,uVar4,uVar8,uVar6,uVar5,uVar7,&stack0x000001e0,0);
          uStack00000000000001d4 = 0;
          uStack00000000000001c8 = uStack00000000000001e8;
          in_stack_000001c0 = in_stack_000001e0;
          uStack00000000000001cc = uStack00000000000001ec;
          uStack00000000000001d0 = in_stack_000001f0;
          if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
            *(undefined8 *)(unaff_x20 + 0x278) = 0;
            *(ulong *)(unaff_x20 + 0x270) = CONCAT44(in_stack_000001f0,uStack00000000000001ec);
            *(ulong *)(unaff_x20 + 0x26c) = CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
            *(undefined8 *)(unaff_x20 + 0x264) = in_stack_000001e0;
            FUN_05fb8c84(DAT_01031cd0,DAT_01032268,DAT_0103255c,DAT_010324e4,DAT_01032038,
                         DAT_010321a8,&stack0x000001a0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


