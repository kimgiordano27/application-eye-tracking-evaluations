/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 076e9878
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled
               (float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar15;
  float fVar16;
  float fStack000000000000000c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  param_3 = param_3 + param_2;
  if (*param_1 <= param_3) {
    fVar7 = unaff_s10 * unaff_s12 + unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11;
    param_4 = (unaff_s13 * fVar7) / param_3;
    unaff_s8 = unaff_s8 - param_4;
    unaff_s9 = unaff_s9 - (unaff_s11 * fVar7) / param_3;
    unaff_s10 = unaff_s10 - (unaff_s12 * fVar7) / param_3;
  }
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar7 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar7 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar15 = *pfVar3;
    fVar14 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fVar15 = unaff_s8 / fVar7;
    fVar14 = unaff_s9 / fVar7;
    fVar7 = unaff_s10 / fVar7;
  }
  fVar2 = in_stack_00000038;
  fVar1 = fStack0000000000000030;
  fVar16 = *(float *)(unaff_x19 + 0x94);
  fStack000000000000000c = fStack0000000000000034;
  fVar8 = fStack0000000000000030;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = (float)FUN_08596b90(&stack0x00000030,0);
  fVar13 = *(float *)(unaff_x19 + 0x90);
  fVar9 = fVar8;
  fVar11 = param_4;
  uVar5 = FUN_08596b90(&stack0x00000030,0);
  fVar10 = fVar14;
  fVar12 = fVar7;
  uVar6 = FUN_08575d1c(fVar15,fVar14,fVar7,uVar5,fVar9,fVar11,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_085995ac((fVar1 - fVar15 * fVar16) + fVar4 * fVar13,
                 (fStack000000000000000c - fVar14 * fVar16) + fVar8 * fVar13,
                 (fVar2 - fVar7 * fVar16) + param_4 * fVar13,uVar6,fVar10,fVar12,uVar5,
                 *(long *)(unaff_x19 + 0x48),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


