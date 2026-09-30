/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 076e2810
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics(float param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  float unaff_s10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float unaff_s13;
  float fVar12;
  float fStack0000000000000004;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  fVar8 = unaff_s13 * unaff_s10 + unaff_s11 * unaff_s8 + unaff_s12 * unaff_s9;
  fVar9 = unaff_s8 - (unaff_s11 * fVar8) / param_1;
  fVar10 = unaff_s9 - (unaff_s12 * fVar8) / param_1;
  fVar8 = unaff_s10 - (unaff_s13 * fVar8) / param_1;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  puVar3 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar2 = PTR_DAT_08f65568;
  fVar1 = DAT_01a2ef28;
  fStack000000000000000c = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
  if (fStack000000000000000c <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar9 = *pfVar5;
    fVar10 = pfVar5[1];
    fStack000000000000000c = pfVar5[2];
  }
  else {
    fVar9 = fVar9 / fStack000000000000000c;
    fVar10 = fVar10 / fStack000000000000000c;
    fStack000000000000000c = fVar8 / fStack000000000000000c;
  }
  fVar8 = unaff_s12 * fStack000000000000000c;
  fVar11 = unaff_s11 * fStack000000000000000c;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  fVar8 = unaff_s13 * fVar10 - fVar8;
  fVar11 = fVar11 - unaff_s13 * fVar9;
  fVar12 = unaff_s12 * fVar9 - unaff_s11 * fVar10;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = fStack000000000000000c;
  fVar12 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar11 * fVar11);
  if (fVar12 <= fVar1) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar8 = *pfVar5;
    fVar11 = pfVar5[1];
  }
  else {
    fVar8 = fVar8 / fVar12;
    fVar11 = fVar11 / fVar12;
  }
  fStack0000000000000004 = fVar11;
  FUN_0419f7f0(fVar9,fVar10,fVar4,uStack000000000000001c,uStack0000000000000018,
               in_stack_00000010._4_4_,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_0852b5fc(*(long *)(unaff_x20 + 0x40),0);
    FUN_08575c64(0);
    fVar9 = (float)FUN_08575f94(0);
    if (fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar6 = FUN_08596b90();
      uVar7 = FUN_08575d1c(fVar9,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar7;
      *(float *)(unaff_x19 + 0x10) = fVar8;
      *(float *)(unaff_x19 + 0x14) = fVar11;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


