/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 0315fd6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetSpaceComponentStatus(float param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 extraout_d0;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float unaff_s8;
  float unaff_s9;
  float fVar13;
  ulong uVar14;
  float unaff_s11;
  ulong uVar15;
  float unaff_s12;
  float fVar16;
  float unaff_s13;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  fVar13 = *(float *)(unaff_x20 + 0x2c);
  if (*(char *)(unaff_x25 + 0x2d9) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x25 + 0x2d9) = 1;
  }
  fVar13 = SQRT(param_1 + unaff_s12 * unaff_s12 + unaff_s8 * unaff_s8) / fVar13;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar5 = -0x80000000;
  if ((float)(int)fVar13 != INFINITY) {
    iVar5 = (int)fVar13;
  }
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  fVar10 = fStack0000000000000010 / (float)iVar5;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0x7f800000;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + unaff_s11 * fVar10 * 0.5;
  fVar13 = fVar10;
  if (fVar10 <= *(float *)(unaff_x20 + 0x28)) {
    fVar13 = *(float *)(unaff_x20 + 0x28);
  }
  in_stack_00000018 = in_stack_00000018 + unaff_s9 * fVar10 * 0.5;
  fVar16 = unaff_s13 * fVar10;
  bVar1 = false;
  fStack0000000000000014 = fStack0000000000000014 + fVar16 * 0.5;
  fStack000000000000001c = fVar16;
  do {
    fVar7 = in_stack_00000018;
    fVar11 = fStack0000000000000014;
    uVar3 = FUN_038d2bfc(in_stack_00000008._4_4_,in_stack_00000018,fStack0000000000000014,
                         fVar10 + SQRT(fVar13 * fVar13 + fVar13 * fVar13),&stack0x00000040,
                         *(undefined4 *)(unaff_x20 + 0x34),0);
    if ((uVar3 & 1) != 0) {
      fVar6 = (float)FUN_038d292c(&stack0x00000040,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084();
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar16 = fStack000000000000001c;
      fVar11 = fVar11 - fStack0000000000000014;
      fVar9 = fVar11 * fVar11;
      fVar7 = SQRT(fVar9 + (fVar6 - in_stack_00000008._4_4_) * (fVar6 - in_stack_00000008._4_4_) +
                           (fVar7 - in_stack_00000018) * (fVar7 - in_stack_00000018));
      if (*(float *)(unaff_x19 + 3) <= fVar7) break;
      *(float *)(unaff_x19 + 3) = fVar7;
      uVar8 = FUN_038d292c(&stack0x00000040,0);
      *(undefined4 *)unaff_x19 = uVar8;
      *(float *)((long)unaff_x19 + 4) = fVar9;
      *(float *)(unaff_x19 + 1) = fVar11;
      if (*(char *)(unaff_x24 + 0x25b) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x24 + 0x25b) = 1;
      }
      bVar1 = true;
      uVar8 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *(undefined8 *)((long)unaff_x19 + 0xc) = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar8;
    }
    in_stack_00000008._4_4_ = unaff_s11 * fVar10 + in_stack_00000008._4_4_;
    in_stack_00000018 = unaff_s9 * fVar10 + in_stack_00000018;
    iVar5 = iVar5 + -1;
    fStack0000000000000014 = fVar16 + fStack0000000000000014;
  } while (iVar5 != 0);
  if (bVar1) {
    uVar8 = *(undefined4 *)unaff_x19;
    uVar14 = (ulong)*(uint *)((long)unaff_x19 + 4);
    uVar15 = (ulong)*(uint *)(unaff_x19 + 1);
    uVar3 = uVar14;
    uVar12 = uVar15;
    uVar4 = FUN_0315fffc(uVar8,uVar14,uVar15);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = unaff_x21[2];
    uVar3 = FUN_0316013c(uVar8,uVar14,uVar15,extraout_d0,uVar3,uVar12,fStack0000000000000010,uVar4,
                         &stack0x00000020);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_03160340(uVar8,uVar14,uVar15);
      goto LAB_0315ffc8;
    }
  }
  uVar2 = 0;
LAB_0315ffc8:
  return uVar2 & 1;
}


