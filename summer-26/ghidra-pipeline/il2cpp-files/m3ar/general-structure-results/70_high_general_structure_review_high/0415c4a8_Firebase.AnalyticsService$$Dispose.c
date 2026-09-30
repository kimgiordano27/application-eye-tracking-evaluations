/*
FUNCTION_NAME: Firebase.AnalyticsService$$Dispose
ENTRY_POINT: 0415c4a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Firebase_AnalyticsService__Dispose(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint uVar28;
  int unaff_w26;
  int unaff_w27;
  uint uVar29;
  int unaff_w28;
  float fVar30;
  float unaff_s8;
  undefined4 uVar31;
  float unaff_s9;
  float fVar32;
  float unaff_s10;
  float unaff_s11;
  undefined4 unaff_s12;
  float unaff_s13;
  undefined4 unaff_s14;
  float unaff_s15;
  uint uStack0000000000000008;
  float fStack000000000000000c;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  long *in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  uint uStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  
code_r0x0415c4a8:
  FUN_05766938();
  lVar14 = *(long *)(unaff_x25 + 0x10);
                    /* try { // try from 0415c4c4 to 0425c4cf has its CatchHandler @ 0415c508 */
  *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
                    /* try { // try from 0415c4d0 to 0425c523 has its CatchHandler @ 0415c3f4 */
  if (lVar14 == 0) {
LAB_0415eb88:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  do {
    uVar17 = *(uint *)(unaff_x25 + 0x18);
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
      *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w28;
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    }
    else {
      FUN_05766938();
      lVar14 = *(long *)(unaff_x25 + 0x10);
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_0415eb88;
    }
    uVar17 = *(uint *)(unaff_x25 + 0x18);
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
      *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w26;
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    }
    else {
      FUN_05766938();
      lVar14 = *(long *)(unaff_x25 + 0x10);
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_0415eb88;
    }
    uVar17 = *(uint *)(unaff_x25 + 0x18);
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_0415c6a8;
    *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
    *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w27;
LAB_0415c6b8:
    do {
      fVar30 = in_stack_000000a0._4_4_ + unaff_s9;
      fVar32 = unaff_s13 + unaff_s15;
      if ((in_stack_00000048._4_1_ & 1) == 0) {
        if (unaff_x21 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(unaff_s10,in_stack_000000a0._4_4_);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(unaff_s10,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(unaff_s10,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(unaff_s10,in_stack_000000a0._4_4_);
        }
        if (unaff_x22 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a34048;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0xbf800000,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a34048;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0xbf800000,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a34048;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0xbf800000,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a34048;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0xbf800000,0);
        }
        if (unaff_x23 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000a8;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          FUN_0586e158(fStack00000000000000a8,fVar30);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000a8;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          FUN_0586e158(fStack00000000000000a8,fVar32);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000ac;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          FUN_0586e158(fStack00000000000000ac,fVar32);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          param_2 = (ulong)(uint)fStack00000000000000ac;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000ac;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          param_2 = (ulong)(uint)fVar30;
          FUN_0586e158(fStack00000000000000ac);
        }
        if (unaff_x24 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        uVar31 = unaff_s14;
        if (in_stack_00000090._4_4_ == 0) {
          uVar31 = unaff_s12;
        }
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          unaff_s14 = 0;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = unaff_s12;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(uVar31,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          unaff_s14 = 0;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = unaff_s12;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(uVar31,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        if (unaff_x25 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x25 + 0x10);
        iVar27 = *(int *)(unaff_x21 + 0x18);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -3;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -1;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
        }
        else {
          FUN_05766938();
        }
      }
      if (uStack0000000000000074 != 0) {
        if (unaff_x21 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(fStack00000000000000bc,in_stack_000000a0._4_4_);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(fStack00000000000000bc,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(fStack00000000000000bc,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(fStack00000000000000bc,in_stack_000000a0._4_4_);
        }
        if (unaff_x22 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a332c8;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0x3f800000,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a332c8;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0x3f800000,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a332c8;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0x3f800000,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        uVar3 = DAT_01a332c8;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
          *(undefined4 *)(lVar14 + 0x28) = 0;
        }
        else {
          param_3 = 0;
          FUN_05873228(0x3f800000,0);
        }
        if (unaff_x23 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000ac;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          FUN_0586e158(fStack00000000000000ac,fVar30);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000ac;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          FUN_0586e158(fStack00000000000000ac,fVar32);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000a8;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          FUN_0586e158(fStack00000000000000a8,fVar32);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          param_2 = (ulong)(uint)fStack00000000000000a8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000a8;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          param_2 = (ulong)(uint)fVar30;
          FUN_0586e158(fStack00000000000000a8);
        }
        if (unaff_x24 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        uVar31 = unaff_s14;
        if (in_stack_00000090._4_4_ == 0) {
          uVar31 = unaff_s12;
        }
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          unaff_s14 = 0;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = unaff_s12;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(uVar31,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          unaff_s14 = 0;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = unaff_s12;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(uVar31,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        if (unaff_x25 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x25 + 0x10);
        iVar27 = *(int *)(unaff_x21 + 0x18);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -3;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -1;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
        }
        else {
          FUN_05766938();
        }
      }
      if (uStack0000000000000070 != 0) {
        if (unaff_x21 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(unaff_s10,in_stack_000000a0._4_4_);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(unaff_s10,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(fStack00000000000000bc,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = unaff_s8;
        }
        else {
          param_3 = (ulong)(uint)unaff_s8;
          FUN_05873228(fStack00000000000000bc,in_stack_000000a0._4_4_);
        }
        if (unaff_x22 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0xbf800000;
        }
        else {
          param_3 = 0xbf800000;
          FUN_05873228(0,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0xbf800000;
        }
        else {
          param_3 = 0xbf800000;
          FUN_05873228(0,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0xbf800000;
        }
        else {
          param_3 = 0xbf800000;
          FUN_05873228(0,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0xbf800000;
        }
        else {
          param_3 = 0xbf800000;
          FUN_05873228(0,0);
        }
        if (unaff_x23 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s11;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          FUN_0586e158(unaff_s11,fVar30);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s11;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          FUN_0586e158(unaff_s11,fVar32);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = in_stack_000000b0;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          FUN_0586e158(in_stack_000000b0,fVar32);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          param_2 = (ulong)(uint)in_stack_000000b0;
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = in_stack_000000b0;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          param_2 = (ulong)(uint)fVar30;
          FUN_0586e158(in_stack_000000b0);
        }
        if (unaff_x24 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        if (in_stack_00000090._4_4_ == 0) {
          unaff_s14 = unaff_s12;
        }
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined4 *)(lVar14 + 0x20) = unaff_s14;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = unaff_s12;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(unaff_s14,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined4 *)(lVar14 + 0x20) = unaff_s14;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = unaff_s12;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(unaff_s14,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        if (unaff_x25 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x25 + 0x10);
        iVar27 = *(int *)(unaff_x21 + 0x18);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -3;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -1;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
        }
        else {
          FUN_05766938();
        }
      }
      if (in_stack_00000068._4_4_ != 0) {
        if (unaff_x21 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(fStack00000000000000bc,in_stack_000000a0._4_4_);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(fStack00000000000000bc,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = unaff_s13;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(unaff_s10,unaff_s13);
        }
        lVar14 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x21 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s10;
          *(float *)(lVar14 + 0x24) = in_stack_000000a0._4_4_;
          *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
        }
        else {
          param_3 = (ulong)(uint)fStack00000000000000b8;
          FUN_05873228(unaff_s10,in_stack_000000a0._4_4_);
        }
        if (unaff_x22 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0x3f800000;
        }
        else {
          param_3 = 0x3f800000;
          FUN_05873228(0,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0x3f800000;
        }
        else {
          param_3 = 0x3f800000;
          FUN_05873228(0,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0x3f800000;
        }
        else {
          param_3 = 0x3f800000;
          FUN_05873228(0,0);
        }
        lVar14 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0xc;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0x3f800000;
        }
        else {
          param_3 = 0x3f800000;
          FUN_05873228(0,0);
        }
        if (unaff_x23 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          param_2 = (ulong)(uint)in_stack_000000b0;
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = in_stack_000000b0;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          param_2 = (ulong)(uint)fVar30;
          FUN_0586e158(in_stack_000000b0);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = in_stack_000000b0;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          param_2 = (ulong)(uint)fVar32;
          FUN_0586e158(in_stack_000000b0);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s11;
          *(float *)(lVar14 + 0x24) = fVar32;
        }
        else {
          param_2 = (ulong)(uint)fVar32;
          FUN_0586e158(unaff_s11);
        }
        lVar14 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x23 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 8;
          *(uint *)(unaff_x23 + 0x18) = uVar17 + 1;
          *(float *)(lVar14 + 0x20) = unaff_s11;
          *(float *)(lVar14 + 0x24) = fVar30;
        }
        else {
          param_2 = (ulong)(uint)fVar30;
          FUN_0586e158(unaff_s11);
        }
        if (unaff_x24 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        uVar31 = 0;
        if (in_stack_00000090._4_4_ == 0) {
          uVar31 = 0x3f800000;
        }
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = 0x3f800000;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(uVar31,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = 0x3f800000;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(uVar31,0,0,0x3f800000);
        }
        lVar14 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        uVar4 = _UNK_01a302a8;
        uVar3 = _DAT_01a302a0;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x24 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar17 * 0x10;
          *(uint *)(unaff_x24 + 0x18) = uVar17 + 1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x20) = uVar3;
        }
        else {
          param_2 = 0;
          param_3 = 0;
          FUN_05729b5c(0,0,0,0x3f800000);
        }
        if (unaff_x25 == 0) goto LAB_0415eb88;
        lVar14 = *(long *)(unaff_x25 + 0x10);
        iVar27 = *(int *)(unaff_x21 + 0x18);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -3;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -1;
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        }
        else {
          FUN_05766938();
          lVar14 = *(long *)(unaff_x25 + 0x10);
          *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0415eb88;
        }
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        if (uVar17 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
          *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -4;
        }
        else {
          FUN_05766938();
        }
      }
      do {
        unaff_s9 = (float)param_2;
        unaff_x20 = unaff_x20 + 1;
        uVar16 = in_stack_00000040;
        if (unaff_x20 == 100) {
          in_stack_00000038 = in_stack_00000038 + 1;
          if (in_stack_00000040 == 0x32) {
            in_stack_00000028 = in_stack_00000028 + 1;
            in_stack_00000018 = in_stack_00000018 + 1;
            if (in_stack_00000010 == 100) {
              if ((*(long *)(in_stack_00000098 + 0x28) != 0) &&
                 (FUN_0855d908(), *(long *)(in_stack_00000098 + 0x28) != 0)) {
                FUN_0855db34();
                if ((*(long *)(in_stack_00000098 + 0x28) != 0) &&
                   ((FUN_0855e048(*(long *)(in_stack_00000098 + 0x28),0),
                    *(long *)(in_stack_00000098 + 0x28) != 0 &&
                    (FUN_0855dd14(), *(long *)(in_stack_00000098 + 0x28) != 0)))) {
                  FUN_0855f55c();
                  if (*(long *)(in_stack_00000098 + 0x28) != 0) {
                    FUN_0855fc78(*(long *)(in_stack_00000098 + 0x28),0);
                    if (*(long *)(in_stack_00000098 + 0x28) != 0) {
                      FUN_0855fdf8(*(long *)(in_stack_00000098 + 0x28),0);
                      if (*(long *)(in_stack_00000098 + 0x30) != 0) {
                        FUN_08558578(*(long *)(in_stack_00000098 + 0x30),
                                     *(undefined8 *)(in_stack_00000098 + 0x28),0);
                        *(undefined1 *)(in_stack_00000098 + 0x20) = 0;
                        return;
                      }
                    }
                  }
                }
              }
              goto LAB_0415eb88;
            }
            fStack000000000000000c = (float)(int)in_stack_00000010;
            in_stack_00000020._4_4_ = (int)in_stack_00000010 - 1;
            in_stack_00000088 = in_stack_00000010;
            in_stack_00000010 = in_stack_00000010 + 1;
            in_stack_00000040 = 0;
            in_stack_00000038 = 1;
          }
          unaff_x20 = 0;
          in_stack_00000030._4_4_ = (float)(int)in_stack_00000040;
          uStack0000000000000008 = (int)in_stack_00000040 - 1;
          uVar16 = in_stack_00000040 + 1;
          in_stack_00000080 = in_stack_00000040;
        }
        in_stack_00000040 = uVar16;
        lVar14 = *in_stack_00000078;
        if (lVar14 == 0) goto LAB_0415eb88;
        puVar15 = *(uint **)(lVar14 + 0x10);
        if (((*puVar15 <= in_stack_00000088) ||
            ((*(ulong *)(puVar15 + 4) & 0xffffffff) <= in_stack_00000080)) ||
           ((*(ulong *)(puVar15 + 8) & 0xffffffff) <= unaff_x20)) goto LAB_0415eb8c;
      } while (*(char *)(lVar14 + *(ulong *)(puVar15 + 8) *
                                  (in_stack_00000080 + in_stack_00000088 * *(ulong *)(puVar15 + 4))
                         + unaff_x20 + 0x20) == '\0');
      fVar30 = *(float *)(in_stack_00000098 + 0x48);
      lVar14 = FUN_085849e0(in_stack_00000098,0);
      if (lVar14 == 0) goto LAB_0415eb88;
      fVar32 = (float)FUN_08598884(lVar14,0);
      lVar14 = FUN_085849e0(in_stack_00000098,0);
      if (lVar14 == 0) goto LAB_0415eb88;
      in_stack_000000b0 = (float)FUN_08598884(lVar14,0);
      lVar14 = FUN_085849e0(in_stack_00000098,0);
      if (lVar14 == 0) goto LAB_0415eb88;
      FUN_08598884(lVar14,0);
      unaff_s15 = unaff_s9;
      lVar14 = FUN_085849e0(in_stack_00000098,0);
      if (lVar14 == 0) goto LAB_0415eb88;
      FUN_08598884(lVar14,0);
      lVar14 = FUN_085849e0(in_stack_00000098,0);
      if (lVar14 == 0) goto LAB_0415eb88;
      FUN_08598884(lVar14,0);
      fStack00000000000000ac = (float)param_3;
      lVar14 = FUN_085849e0(in_stack_00000098,0);
      if (lVar14 == 0) goto LAB_0415eb88;
      FUN_08598884(lVar14,0);
      lVar14 = *in_stack_00000078;
      if (in_stack_00000088 == 0) {
        if (lVar14 == 0) goto LAB_0415eb88;
        bVar5 = false;
LAB_0415b630:
        puVar15 = *(uint **)(lVar14 + 0x10);
        uVar20 = (ulong)*puVar15;
        if (((uVar20 <= in_stack_00000010) ||
            (uVar16 = *(ulong *)(puVar15 + 4), (uVar16 & 0xffffffff) <= in_stack_00000080)) ||
           (uVar19 = *(ulong *)(puVar15 + 8), (uVar19 & 0xffffffff) <= unaff_x20))
        goto LAB_0415eb8c;
        bVar12 = *(byte *)(lVar14 + uVar19 * (in_stack_00000080 + in_stack_00000018 * uVar16) +
                           unaff_x20 + 0x20) ^ 1;
      }
      else {
        if (lVar14 == 0) goto LAB_0415eb88;
        puVar18 = *(ulong **)(lVar14 + 0x10);
        if ((((uint)*puVar18 <= in_stack_00000020._4_4_) ||
            (uVar16 = puVar18[2], (uVar16 & 0xffffffff) <= in_stack_00000080)) ||
           (uVar19 = puVar18[4], (uVar19 & 0xffffffff) <= unaff_x20)) goto LAB_0415eb8c;
        bVar5 = *(char *)(lVar14 + uVar19 * (in_stack_00000080 + in_stack_00000028 * uVar16) +
                          unaff_x20 + 0x20) != '\0';
        if (in_stack_00000088 != 99) goto LAB_0415b630;
        uVar20 = *puVar18 & 0xffffffff;
        bVar12 = 1;
      }
      lVar21 = in_stack_00000038 + in_stack_00000088 * uVar16;
      if (in_stack_00000080 == 0) {
LAB_0415b6b8:
        if (((uVar20 <= in_stack_00000088) || ((uVar16 & 0xffffffff) <= in_stack_00000040)) ||
           ((uVar19 & 0xffffffff) <= unaff_x20)) goto LAB_0415eb8c;
        bVar2 = false;
        in_stack_00000090._4_4_ =
             (uint)(*(char *)(lVar14 + uVar19 * lVar21 + unaff_x20 + 0x20) != '\0');
      }
      else {
        if (((uVar20 <= in_stack_00000088) || ((uint)uVar16 <= uStack0000000000000008)) ||
           ((uVar19 & 0xffffffff) <= unaff_x20)) goto LAB_0415eb8c;
        if (in_stack_00000080 != 0x31) goto LAB_0415b6b8;
        in_stack_00000090._4_4_ = 0;
        bVar2 = true;
      }
      lVar25 = in_stack_00000080 + in_stack_00000088 * uVar16;
      iVar27 = (int)unaff_x20;
      uVar17 = (uint)uVar19;
      if (unaff_x20 == 0) {
        bVar6 = false;
LAB_0415b758:
        if (((uVar20 <= in_stack_00000088) || ((uVar16 & 0xffffffff) <= in_stack_00000080)) ||
           ((uVar19 & 0xffffffff) <= unaff_x20 + 1)) goto LAB_0415eb8c;
        bVar7 = *(char *)(lVar14 + uVar19 * lVar25 + unaff_x20 + 0x21) != '\0';
        if (!bVar5) goto LAB_0415b73c;
LAB_0415b78c:
        bVar8 = false;
        if (in_stack_00000088 != 0 && unaff_x20 != 0) {
          bVar8 = bVar6;
        }
        if (bVar8) {
          if ((((uint)uVar20 <= in_stack_00000020._4_4_) ||
              ((uVar16 & 0xffffffff) <= in_stack_00000080)) || (uVar17 <= iVar27 - 1U))
          goto LAB_0415eb8c;
          bVar8 = *(char *)(lVar14 + uVar19 * (in_stack_00000080 + in_stack_00000028 * uVar16) +
                            unaff_x20 + 0x1f) != '\0';
        }
        else {
          bVar8 = true;
        }
        if (bVar7) {
          if (in_stack_00000088 == 0) goto LAB_0415b740;
          if ((((uint)uVar20 <= in_stack_00000020._4_4_) ||
              ((uVar16 & 0xffffffff) <= in_stack_00000080)) ||
             ((uVar19 & 0xffffffff) <= unaff_x20 + 1)) goto LAB_0415eb8c;
          bVar9 = *(char *)(lVar14 + uVar19 * (in_stack_00000080 + in_stack_00000028 * uVar16) +
                            unaff_x20 + 0x21) != '\0';
          goto joined_r0x0415b848;
        }
        bVar10 = true;
        bVar9 = true;
        in_stack_00000048._4_1_ = true;
        bVar11 = true;
        if (bVar12 == 0) goto LAB_0415b898;
LAB_0415b94c:
        uStack0000000000000074 = *(uint *)(in_stack_00000098 + 0x40) >> 1 & 1;
        bVar13 = false;
        if (!bVar6) goto LAB_0415b924;
LAB_0415b960:
        uStack0000000000000070 = 0;
        if (bVar7) goto LAB_0415b968;
LAB_0415b930:
        in_stack_00000068._4_4_ = *(uint *)(in_stack_00000098 + 0x40) >> 3 & 1;
        if (!bVar5) goto LAB_0415b93c;
LAB_0415b970:
        uStack00000000000000b4 = 0;
      }
      else {
        if (((uVar20 <= in_stack_00000088) || ((uVar16 & 0xffffffff) <= in_stack_00000080)) ||
           (uVar17 <= iVar27 - 1U)) goto LAB_0415eb8c;
        bVar6 = *(char *)(lVar14 + uVar19 * lVar25 + unaff_x20 + 0x1f) != '\0';
        if (unaff_x20 != 99) goto LAB_0415b758;
        bVar7 = false;
        if (bVar5) goto LAB_0415b78c;
LAB_0415b73c:
        bVar8 = true;
LAB_0415b740:
        bVar9 = true;
joined_r0x0415b848:
        if (bVar12 == 0) {
          if (bVar7) {
            if (((uVar20 <= in_stack_00000010) || ((uVar16 & 0xffffffff) <= in_stack_00000080)) ||
               ((uVar19 & 0xffffffff) <= unaff_x20 + 1)) goto LAB_0415eb8c;
            bVar10 = *(char *)(lVar14 + uVar19 * (in_stack_00000080 + in_stack_00000018 * uVar16) +
                               unaff_x20 + 0x21) != '\0';
          }
          else {
            bVar10 = true;
          }
LAB_0415b898:
          bVar11 = (bool)(bVar6 ^ 1);
          if (unaff_x20 == 0) {
            bVar11 = true;
          }
          if (bVar11) {
            bVar13 = true;
            goto LAB_0415b900;
          }
          if (((uVar20 <= in_stack_00000010) || ((uVar16 & 0xffffffff) <= in_stack_00000080)) ||
             (uVar17 <= iVar27 - 1U)) goto LAB_0415eb8c;
          bVar11 = *(char *)(lVar14 + uVar19 * (in_stack_00000080 + in_stack_00000018 * uVar16) +
                             unaff_x20 + 0x1f) != '\0';
          bVar13 = true;
          if (!bVar5) goto LAB_0415b8f0;
LAB_0415b908:
          uVar17 = 0;
        }
        else {
          bVar13 = false;
          bVar10 = true;
LAB_0415b900:
          bVar11 = true;
          if (bVar5) goto LAB_0415b908;
LAB_0415b8f0:
          uVar17 = *(uint *)(in_stack_00000098 + 0x40) & 1;
        }
        in_stack_00000048._4_1_ = uVar17 == 0;
        if (!bVar13) goto LAB_0415b94c;
        uStack0000000000000074 = 0;
        bVar13 = true;
        if (bVar6) goto LAB_0415b960;
LAB_0415b924:
        uStack0000000000000070 = *(uint *)(in_stack_00000098 + 0x40) >> 2 & 1;
        if (!bVar7) goto LAB_0415b930;
LAB_0415b968:
        in_stack_00000068._4_4_ = 0;
        if (bVar5) goto LAB_0415b970;
LAB_0415b93c:
        uStack00000000000000b4 = *(uint *)(in_stack_00000098 + 0x44) & 1;
      }
      if (bVar13) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(uint *)(in_stack_00000098 + 0x44) >> 1 & 1;
      }
      if (bVar6) {
        uVar29 = 0;
        if (!bVar7) goto LAB_0415b9a0;
LAB_0415b9ec:
        uVar28 = 0;
        if (bVar8) goto LAB_0415b9f4;
LAB_0415b9b0:
        if ((*(uint *)(in_stack_00000098 + 0x44) & 1) != 0) {
          uVar26 = 1;
          goto joined_r0x0415b9f8;
        }
        uVar26 = *(uint *)(in_stack_00000098 + 0x44) >> 2 & 1;
        if (bVar9) goto LAB_0415b9fc;
LAB_0415b9c4:
        if ((*(uint *)(in_stack_00000098 + 0x44) >> 1 & 1) != 0) {
          uVar24 = 1;
          goto joined_r0x0415ba24;
        }
        uVar24 = *(uint *)(in_stack_00000098 + 0x44) >> 3 & 1;
        if (!bVar10) goto LAB_0415ba28;
LAB_0415ba04:
        uVar23 = 0;
joined_r0x0415ba38:
        if (bVar11) goto LAB_0415ba0c;
LAB_0415ba3c:
        if ((*(uint *)(in_stack_00000098 + 0x44) >> 3 & 1) == 0) {
          uVar22 = *(uint *)(in_stack_00000098 + 0x44) >> 2 & 1;
        }
        else {
          uVar22 = 1;
        }
      }
      else {
        uVar29 = *(uint *)(in_stack_00000098 + 0x44) >> 2 & 1;
        if (bVar7) goto LAB_0415b9ec;
LAB_0415b9a0:
        uVar28 = *(uint *)(in_stack_00000098 + 0x44) >> 3 & 1;
        if (!bVar8) goto LAB_0415b9b0;
LAB_0415b9f4:
        uVar26 = 0;
joined_r0x0415b9f8:
        if (!bVar9) goto LAB_0415b9c4;
LAB_0415b9fc:
        uVar24 = 0;
joined_r0x0415ba24:
        if (bVar10) goto LAB_0415ba04;
LAB_0415ba28:
        if ((*(uint *)(in_stack_00000098 + 0x44) >> 2 & 1) == 0) {
          uVar23 = *(uint *)(in_stack_00000098 + 0x44) >> 3 & 1;
          goto joined_r0x0415ba38;
        }
        uVar23 = 1;
        if (!bVar11) goto LAB_0415ba3c;
LAB_0415ba0c:
        uVar22 = 0;
      }
      unaff_s10 = fVar30 * fStack000000000000000c + -0.5;
      unaff_s8 = fVar30 * (float)iVar27 + -0.5;
      in_stack_000000a0._4_4_ = fVar30 * in_stack_00000030._4_4_ + -0.5;
      fStack00000000000000bc = fVar30 + unaff_s10;
      unaff_s11 = unaff_s10 + fVar32;
      fStack00000000000000b8 = fVar30 + unaff_s8;
      param_2 = (ulong)(uint)fStack00000000000000b8;
      unaff_s13 = fVar30 + in_stack_000000a0._4_4_;
      fStack00000000000000ac = unaff_s8 + fStack00000000000000ac;
      unaff_s14 = 0;
      in_stack_000000b0 = fStack00000000000000bc + in_stack_000000b0;
      unaff_s12 = 0x3f800000;
      fStack00000000000000a8 = fStack00000000000000b8 + (float)param_3;
      if (bVar2) break;
      if (((uVar20 <= in_stack_00000088) || ((uVar16 & 0xffffffff) <= in_stack_00000040)) ||
         ((uVar19 & 0xffffffff) <= unaff_x20)) {
LAB_0415eb8c:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
    } while (*(char *)(lVar14 + uVar19 * lVar21 + unaff_x20 + 0x20) != '\0');
    if (unaff_x21 == 0) goto LAB_0415eb88;
    lVar14 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = unaff_s10;
      *(float *)(lVar14 + 0x24) = unaff_s13;
      *(float *)(lVar14 + 0x28) = unaff_s8;
    }
    else {
      param_3 = (ulong)(uint)unaff_s8;
      FUN_05873228(unaff_s10,unaff_s13);
    }
    lVar14 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = unaff_s10;
      *(float *)(lVar14 + 0x24) = unaff_s13;
      *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
    }
    else {
      param_3 = (ulong)(uint)fStack00000000000000b8;
      FUN_05873228(unaff_s10,unaff_s13);
    }
    lVar14 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
      *(float *)(lVar14 + 0x24) = unaff_s13;
      *(float *)(lVar14 + 0x28) = fStack00000000000000b8;
    }
    else {
      param_3 = (ulong)(uint)fStack00000000000000b8;
      FUN_05873228(fStack00000000000000bc,unaff_s13);
    }
    lVar14 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = fStack00000000000000bc;
      *(float *)(lVar14 + 0x24) = unaff_s13;
      *(float *)(lVar14 + 0x28) = unaff_s8;
    }
    else {
      param_3 = (ulong)(uint)unaff_s8;
      FUN_05873228(fStack00000000000000bc,unaff_s13);
    }
    if (unaff_x22 == 0) goto LAB_0415eb88;
    lVar14 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + 0x20) = in_stack_00000060;
      *(undefined4 *)(lVar14 + 0x28) = 0;
    }
    else {
      param_3 = 0;
      FUN_05873228(0,0x3f800000);
    }
    lVar14 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + 0x20) = in_stack_00000060;
      *(undefined4 *)(lVar14 + 0x28) = 0;
    }
    else {
      param_3 = 0;
      FUN_05873228(0,0x3f800000);
    }
    lVar14 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + 0x20) = in_stack_00000060;
      *(undefined4 *)(lVar14 + 0x28) = 0;
    }
    else {
      param_3 = 0;
      FUN_05873228(0,0x3f800000);
    }
    lVar14 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + 0x20) = in_stack_00000060;
      *(undefined4 *)(lVar14 + 0x28) = 0;
    }
    else {
      param_3 = 0;
      FUN_05873228(0,0x3f800000);
    }
    if (unaff_x23 == 0) goto LAB_0415eb88;
    lVar14 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 8;
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = unaff_s11;
      *(float *)(lVar14 + 0x24) = fStack00000000000000ac;
    }
    else {
      FUN_0586e158(unaff_s11,fStack00000000000000ac);
    }
    lVar14 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 8;
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = unaff_s11;
      *(float *)(lVar14 + 0x24) = fStack00000000000000a8;
    }
    else {
      FUN_0586e158(unaff_s11,fStack00000000000000a8);
    }
    lVar14 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 8;
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = in_stack_000000b0;
      *(float *)(lVar14 + 0x24) = fStack00000000000000a8;
    }
    else {
      FUN_0586e158(in_stack_000000b0,fStack00000000000000a8);
    }
    lVar14 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar1 * 8;
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(float *)(lVar14 + 0x20) = in_stack_000000b0;
      *(float *)(lVar14 + 0x24) = fStack00000000000000ac;
    }
    else {
      FUN_0586e158(in_stack_000000b0,fStack00000000000000ac);
    }
    uVar31 = 0;
    if ((uStack00000000000000b4 != 0 || uVar26 != 0) || uVar29 != 0) {
      uVar31 = unaff_s12;
    }
    if (unaff_x24 == 0) goto LAB_0415eb88;
    lVar14 = *(long *)(unaff_x24 + 0x10);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar26 = *(uint *)(unaff_x24 + 0x18);
    if (uVar26 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar26 * 0x10;
      *(uint *)(unaff_x24 + 0x18) = uVar26 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uVar31;
      *(undefined4 *)(lVar14 + 0x24) = 0;
      *(undefined4 *)(lVar14 + 0x28) = 0;
      *(undefined4 *)(lVar14 + 0x2c) = 0x3f800000;
    }
    else {
      param_3 = 0;
      FUN_05729b5c(uVar31,0,0,0x3f800000);
    }
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    lVar14 = *(long *)(unaff_x24 + 0x10);
    uVar31 = 0;
    if ((uStack00000000000000b4 != 0 || uVar24 != 0) || uVar28 != 0) {
      uVar31 = 0x3f800000;
    }
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar26 = *(uint *)(unaff_x24 + 0x18);
    if (uVar26 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar26 * 0x10;
      *(uint *)(unaff_x24 + 0x18) = uVar26 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uVar31;
      *(undefined4 *)(lVar14 + 0x24) = 0;
      *(undefined4 *)(lVar14 + 0x28) = 0;
      *(undefined4 *)(lVar14 + 0x2c) = 0x3f800000;
    }
    else {
      param_3 = 0;
      FUN_05729b5c(uVar31,0,0,0x3f800000);
    }
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    lVar14 = *(long *)(unaff_x24 + 0x10);
    uVar31 = 0;
    if ((uVar17 != 0 || uVar23 != 0) || uVar28 != 0) {
      uVar31 = 0x3f800000;
    }
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar26 = *(uint *)(unaff_x24 + 0x18);
    if (uVar26 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar26 * 0x10;
      *(uint *)(unaff_x24 + 0x18) = uVar26 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uVar31;
      *(undefined4 *)(lVar14 + 0x24) = 0;
      *(undefined4 *)(lVar14 + 0x28) = 0;
      *(undefined4 *)(lVar14 + 0x2c) = 0x3f800000;
    }
    else {
      param_3 = 0;
      FUN_05729b5c(uVar31,0,0,0x3f800000);
    }
    param_2 = 0;
    unaff_s14 = 0;
    unaff_s12 = 0x3f800000;
    lVar14 = *(long *)(unaff_x24 + 0x10);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    uVar31 = 0;
    if ((uVar17 != 0 || uVar22 != 0) || uVar29 != 0) {
      uVar31 = 0x3f800000;
    }
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar26 = *(uint *)(unaff_x24 + 0x18);
    if (uVar26 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar26 * 0x10;
      *(uint *)(unaff_x24 + 0x18) = uVar26 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uVar31;
      *(undefined4 *)(lVar14 + 0x2c) = 0x3f800000;
      *(undefined4 *)(lVar14 + 0x24) = 0;
      *(undefined4 *)(lVar14 + 0x28) = 0;
    }
    else {
      param_3 = 0;
      FUN_05729b5c();
    }
    iVar27 = *(int *)(unaff_x21 + 0x18);
    unaff_w26 = iVar27 + -4;
    if ((uVar28 & uStack00000000000000b4) == 0 && (uVar29 & uVar17) == 0) {
      if (unaff_x25 == 0) goto LAB_0415eb88;
      lVar14 = *(long *)(unaff_x25 + 0x10);
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_0415eb88;
      uVar17 = *(uint *)(unaff_x25 + 0x18);
      if (uVar17 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
        *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w26;
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      }
      else {
        FUN_05766938();
        lVar14 = *(long *)(unaff_x25 + 0x10);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
      }
      uVar17 = *(uint *)(unaff_x25 + 0x18);
      if (uVar17 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
        *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -3;
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      }
      else {
        FUN_05766938();
        lVar14 = *(long *)(unaff_x25 + 0x10);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
      }
      uVar17 = *(uint *)(unaff_x25 + 0x18);
      if (uVar17 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
        *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      }
      else {
        FUN_05766938();
        lVar14 = *(long *)(unaff_x25 + 0x10);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
      }
      uVar17 = *(uint *)(unaff_x25 + 0x18);
      if (uVar17 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
        *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      }
      else {
        FUN_05766938();
        lVar14 = *(long *)(unaff_x25 + 0x10);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
      }
      uVar17 = *(uint *)(unaff_x25 + 0x18);
      if (uVar17 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
        *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -1;
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      }
      else {
        FUN_05766938();
        lVar14 = *(long *)(unaff_x25 + 0x10);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_0415eb88;
      }
      uVar17 = *(uint *)(unaff_x25 + 0x18);
      if (uVar17 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
        *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w26;
      }
      else {
LAB_0415c6a8:
        FUN_05766938();
      }
      goto LAB_0415c6b8;
    }
    if (unaff_x25 == 0) goto LAB_0415eb88;
    lVar14 = *(long *)(unaff_x25 + 0x10);
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0415eb88;
    uVar17 = *(uint *)(unaff_x25 + 0x18);
    unaff_w27 = iVar27 + -3;
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
      *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w27;
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    }
    else {
      FUN_05766938();
      lVar14 = *(long *)(unaff_x25 + 0x10);
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_0415eb88;
    }
    uVar17 = *(uint *)(unaff_x25 + 0x18);
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
      *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = iVar27 + -2;
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    }
    else {
      FUN_05766938();
      lVar14 = *(long *)(unaff_x25 + 0x10);
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_0415eb88;
    }
    uVar17 = *(uint *)(unaff_x25 + 0x18);
    unaff_w28 = iVar27 + -1;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto code_r0x0415c4a8;
    *(uint *)(unaff_x25 + 0x18) = uVar17 + 1;
    *(int *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) = unaff_w28;
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
  } while( true );
}


