/*
FUNCTION_NAME: OVRPlugin$$CreateSpatialAnchor
ENTRY_POINT: 0315fc90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__CreateSpatialAnchor
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 extraout_d0;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong uVar15;
  float unaff_s11;
  ulong uVar16;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar17;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_w9 == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    *(undefined1 *)(unaff_x23 + 0x45d) = 1;
    param_2 = fStack0000000000000018;
    param_4 = fStack0000000000000014;
  }
  param_2 = unaff_s12 - param_2;
  fVar7 = unaff_s13 * unaff_s13 + unaff_s10 * unaff_s10 + unaff_s14 * unaff_s14;
  fVar17 = unaff_s11 - unaff_s9;
  param_4 = unaff_s8 - param_4;
  if (**(float **)
        (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) <=
      fVar7) {
    fVar11 = param_4 * unaff_s13 + fVar17 * unaff_s10 + param_2 * unaff_s14;
    fVar17 = fVar17 - (unaff_s10 * fVar11) / fVar7;
    param_2 = param_2 - (unaff_s14 * fVar11) / fVar7;
    param_4 = param_4 - (unaff_s13 * fVar11) / fVar7;
  }
  fStack000000000000000c = unaff_s9;
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar7 = *(float *)(unaff_x20 + 0x2c);
  if (DAT_03fed2d9 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed2d9 = '\x01';
  }
  fVar7 = SQRT(fVar17 * fVar17 + param_2 * param_2 + param_4 * param_4) / fVar7;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar6 = -0x80000000;
  if ((float)(int)fVar7 != INFINITY) {
    iVar6 = (int)fVar7;
  }
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  fVar17 = fStack0000000000000010 / (float)iVar6;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0x7f800000;
  fVar11 = fStack000000000000000c + fStack000000000000001c * fVar17 * 0.5;
  fVar7 = fVar17;
  if (fVar17 <= *(float *)(unaff_x20 + 0x28)) {
    fVar7 = *(float *)(unaff_x20 + 0x28);
  }
  fStack0000000000000018 = fStack0000000000000018 + in_stack_00000008 * fVar17 * 0.5;
  bVar1 = false;
  fStack0000000000000014 = fStack0000000000000014 + in_stack_00000000._4_4_ * fVar17 * 0.5;
  do {
    fVar9 = fStack0000000000000018;
    fVar13 = fStack0000000000000014;
    uVar4 = FUN_038d2bfc(fVar11,fStack0000000000000018,fStack0000000000000014,
                         fVar17 + SQRT(fVar7 * fVar7 + fVar7 * fVar7),&stack0x00000040,
                         *(undefined4 *)(unaff_x20 + 0x34),0);
    if ((uVar4 & 1) != 0) {
      fVar8 = (float)FUN_038d292c(&stack0x00000040,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar13 = fVar13 - fStack0000000000000014;
      fVar12 = fVar13 * fVar13;
      fVar9 = SQRT(fVar12 + (fVar8 - fVar11) * (fVar8 - fVar11) +
                            (fVar9 - fStack0000000000000018) * (fVar9 - fStack0000000000000018));
      if (*(float *)(unaff_x19 + 3) <= fVar9) break;
      *(float *)(unaff_x19 + 3) = fVar9;
      uVar10 = FUN_038d292c(&stack0x00000040,0);
      *(undefined4 *)unaff_x19 = uVar10;
      *(float *)((long)unaff_x19 + 4) = fVar12;
      *(float *)(unaff_x19 + 1) = fVar13;
      if (*(char *)(unaff_x24 + 0x25b) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x24 + 0x25b) = 1;
      }
      bVar1 = true;
      uVar10 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *(undefined8 *)((long)unaff_x19 + 0xc) = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar10;
    }
    fVar11 = fStack000000000000001c * fVar17 + fVar11;
    fStack0000000000000018 = in_stack_00000008 * fVar17 + fStack0000000000000018;
    iVar6 = iVar6 + -1;
    fStack0000000000000014 = in_stack_00000000._4_4_ * fVar17 + fStack0000000000000014;
  } while (iVar6 != 0);
  if (bVar1) {
    uVar10 = *(undefined4 *)unaff_x19;
    uVar15 = (ulong)*(uint *)((long)unaff_x19 + 4);
    uVar16 = (ulong)*(uint *)(unaff_x19 + 1);
    uVar4 = uVar15;
    uVar14 = uVar16;
    uVar5 = FUN_0315fffc(uVar10,uVar15,uVar16);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = unaff_x21[2];
    uVar4 = FUN_0316013c(uVar10,uVar15,uVar16,extraout_d0,uVar4,uVar14,fStack0000000000000010,uVar5,
                         &stack0x00000020);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_03160340(uVar10,uVar15,uVar16);
      goto LAB_0315ffc8;
    }
  }
  uVar3 = 0;
LAB_0315ffc8:
  return uVar3 & 1;
}


