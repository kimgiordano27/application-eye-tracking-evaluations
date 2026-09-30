/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 076ddf90
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar9;
  undefined4 extraout_s0;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 unaff_d9;
  undefined4 uVar18;
  undefined8 unaff_d10;
  float unaff_s11;
  float fVar19;
  undefined8 unaff_d12;
  float fVar20;
  float fVar21;
  float unaff_s14;
  undefined8 unaff_d15;
  float fVar22;
  undefined8 in_stack_00000000;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  
  *(undefined1 *)(unaff_x23 + 3999) = 1;
  fVar15 = (float)unaff_d15;
  fVar22 = (float)((ulong)unaff_d15 >> 0x20);
  fVar20 = (float)unaff_d12 - (float)unaff_d10;
  fVar12 = (float)((ulong)unaff_d10 >> 0x20);
  fVar21 = (float)((ulong)unaff_d12 >> 0x20) - fVar12;
                    /* try { // try from 076ddfac to 077ddfc7 has its CatchHandler @ 076de038 */
  fVar19 = unaff_s8 - unaff_s11;
  fVar9 = unaff_s14 * unaff_s14 + fVar15 * fVar15 + fVar22 * fVar22;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar9) {
    fVar10 = fVar19 * unaff_s14 + fVar20 * fVar15 + fVar21 * fVar22;
    fVar20 = fVar20 - (fVar15 * fVar10) / fVar9;
    fVar21 = fVar21 - (fVar22 * fVar10) / fVar9;
    fVar19 = fVar19 - (unaff_s14 * fVar10) / fVar9;
  }
                    /* try { // try from 076ddffc to 077de02b has its CatchHandler @ 076de03c */
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  puVar3 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar9 = *(float *)(unaff_x20 + 0x2c);
  if (DAT_09539e90 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e90 = '\x01';
  }
  fVar9 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19) / fVar9;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  iVar8 = (int)fVar9;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  bVar2 = false;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0x7f800000;
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  if ((float)(int)fVar9 == INFINITY) {
    iVar8 = 1;
  }
  fVar19 = (float)in_stack_00000000 / (float)iVar8;
  fVar20 = (float)unaff_d9 * fVar19;
  fVar21 = (float)((ulong)unaff_d9 >> 0x20) * fVar19;
  fVar9 = fVar19;
  if (fVar19 <= *(float *)(unaff_x20 + 0x28)) {
    fVar9 = *(float *)(unaff_x20 + 0x28);
  }
  fVar15 = unaff_s11 + in_stack_00000010 * fVar19 * 0.5;
  uVar7 = CONCAT44(fVar12 + fVar21 * 0.5,(float)unaff_d10 + fVar20 * 0.5);
  do {
    uVar5 = FUN_084f21e0(uVar7,uVar7 >> 0x20,fVar15,fVar19 + SQRT(fVar9 * fVar9 + fVar9 * fVar9),
                         &stack0x00000040,*(undefined4 *)(unaff_x20 + 0x34),0);
    fVar12 = in_stack_00000048;
    uVar6 = in_stack_00000040;
    fVar22 = (float)(uVar7 >> 0x20);
    if ((uVar5 & 1) != 0) {
      if (DAT_09539e19 == '\0') {
        FUN_0403162c(puVar3);
        DAT_09539e19 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar10 = (float)uVar6 - (float)uVar7;
      fVar14 = (float)((ulong)uVar6 >> 0x20) - fVar22;
      fVar12 = SQRT((fVar12 - fVar15) * (fVar12 - fVar15) + fVar10 * fVar10 + fVar14 * fVar14);
      if (*(float *)(unaff_x19 + 3) <= fVar12) break;
      *(float *)(unaff_x19 + 3) = fVar12;
      cVar1 = *(char *)(unaff_x24 + 0xe16);
      *unaff_x19 = in_stack_00000040;
      *(float *)(unaff_x19 + 1) = in_stack_00000048;
      if (cVar1 == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x24 + 0xe16) = 1;
      }
      bVar2 = true;
      uVar11 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *(undefined8 *)((long)unaff_x19 + 0xc) = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar11;
    }
    uVar7 = CONCAT44(fVar21 + fVar22,fVar20 + (float)uVar7);
    fVar15 = in_stack_00000010 * fVar19 + fVar15;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (bVar2) {
    uVar16 = *(undefined4 *)unaff_x19;
    uVar17 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar18 = *(undefined4 *)(unaff_x19 + 1);
    uVar11 = uVar17;
    uVar13 = uVar18;
    uVar6 = FUN_076de290(uVar16,uVar17,uVar18);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = unaff_x21[2];
    uVar7 = FUN_076de3d0(uVar16,uVar17,uVar18,extraout_s0,uVar11,uVar13,in_stack_00000000,uVar6,
                         &stack0x00000020);
    if ((uVar7 & 1) != 0) {
      uVar4 = FUN_076de5c8(uVar16,uVar17,uVar18);
      goto LAB_076de25c;
    }
  }
  uVar4 = 0;
LAB_076de25c:
  return uVar4 & 1;
}


