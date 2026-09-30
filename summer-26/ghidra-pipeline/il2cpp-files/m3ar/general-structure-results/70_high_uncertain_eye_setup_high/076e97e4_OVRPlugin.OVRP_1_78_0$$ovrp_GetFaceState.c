/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceState
ENTRY_POINT: 076e97e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceState
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  float *pfVar1;
  long unaff_x19;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s15;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  fVar13 = fStack0000000000000030;
  fStack0000000000000010 = param_1;
  fVar2 = (float)FUN_08598884(param_4,0);
  fVar5 = param_2;
  fVar10 = param_3;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = (float)FUN_08596b90(&stack0x00000030,0);
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar13 = fVar13 - fVar2;
  param_2 = unaff_s15 - param_2;
  param_3 = fStack0000000000000010 - param_3;
  fVar4 = fVar10 * fVar10 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar2 = fStack0000000000000010;
  if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar4) {
    fVar9 = param_3 * fVar10 + fVar13 * fVar3 + param_2 * fVar5;
    fVar2 = (fVar3 * fVar9) / fVar4;
    fVar13 = fVar13 - fVar2;
    param_2 = param_2 - (fVar5 * fVar9) / fVar4;
    param_3 = param_3 - (fVar10 * fVar9) / fVar4;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar5 = SQRT(param_3 * param_3 + fVar13 * fVar13 + param_2 * param_2);
  if (fVar5 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar13 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar13 = fVar13 / fVar5;
    param_2 = param_2 / fVar5;
    param_3 = param_3 / fVar5;
  }
  fVar5 = in_stack_00000038;
  fVar3 = *(float *)(unaff_x19 + 0x94);
  fStack000000000000000c = fStack0000000000000034;
  fStack0000000000000010 = fStack0000000000000030;
  fVar10 = fStack0000000000000030;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar6 = (float)FUN_08596b90(&stack0x00000030,0);
  fVar14 = *(float *)(unaff_x19 + 0x90);
  fVar4 = fVar10;
  fVar11 = fVar2;
  uVar7 = FUN_08596b90(&stack0x00000030,0);
  fVar9 = param_2;
  fVar12 = param_3;
  uVar8 = FUN_08575d1c(fVar13,param_2,param_3,uVar7,fVar4,fVar11,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_085995ac((fStack0000000000000010 - fVar13 * fVar3) + fVar6 * fVar14,
                 (fStack000000000000000c - param_2 * fVar3) + fVar10 * fVar14,
                 (fVar5 - param_3 * fVar3) + fVar2 * fVar14,uVar8,fVar9,fVar12,uVar7,
                 *(long *)(unaff_x19 + 0x48),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


