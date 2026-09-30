/*
FUNCTION_NAME: OVRPlugin.Media$$IsCastingToRemoteClient
ENTRY_POINT: 076dc9a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_Media__IsCastingToRemoteClient(void)

{
  undefined8 uVar1;
  bool in_ZR;
  uint uVar2;
  long unaff_x20;
  undefined8 *unaff_x21;
  float fVar3;
  undefined8 in_d3;
  undefined4 unaff_s8;
  undefined8 uVar4;
  float fVar5;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  undefined8 uStack0000000000000034;
  float fStack000000000000003c;
  
  fVar9 = (float)((ulong)in_d3 >> 0x20);
  if (((in_ZR) && (fVar9 == 0.0)) && (unaff_s11 == 0.0)) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    FUN_0861a62c(&stack0x00000010,*(long *)(unaff_x20 + 0x20),0);
    fVar9 = in_stack_00000018;
    uVar1 = in_stack_00000010;
    uVar4 = *unaff_x21;
    fVar6 = *(float *)(unaff_x21 + 1);
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    fVar3 = (float)uVar4;
    fVar7 = (float)uVar1 - fVar3;
    fVar5 = (float)((ulong)uVar4 >> 0x20);
    fVar8 = (float)((ulong)uVar1 >> 0x20) - fVar5;
    fVar9 = fVar9 - fVar6;
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    unaff_d9 = CONCAT44(fVar5 - fVar8,fVar3 - fVar7);
    unaff_s10 = fVar6 - fVar9;
    fVar6 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
    if (fVar6 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      uStack0000000000000034 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fStack000000000000003c = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fStack000000000000003c = fVar9 / fVar6;
      uStack0000000000000034 = CONCAT44(fVar8 / fVar6,fVar7 / fVar6);
    }
    unaff_s8 = 0x7f7fffff;
  }
  else {
    if (DAT_09539e18 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e18 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    fVar3 = (float)in_d3;
    fVar6 = SQRT(unaff_s11 * unaff_s11 + fVar3 * fVar3 + fVar9 * fVar9);
    if (fVar6 <= DAT_01a2ef28) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(PTR_DAT_08f65568);
        DAT_09539c10 = '\x01';
      }
      uStack0000000000000034 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
      fStack000000000000003c = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    }
    else {
      fStack000000000000003c = unaff_s11 / fVar6;
      uStack0000000000000034 = CONCAT44(fVar9 / fVar6,fVar3 / fVar6);
    }
  }
  in_stack_00000028 = unaff_d9;
  in_stack_00000030 = unaff_s10;
  uVar2 = FUN_076dc894(unaff_s8);
  return uVar2 & 1;
}


