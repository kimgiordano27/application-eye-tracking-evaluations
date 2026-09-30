/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 079e42d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (in_w8 != 0) {
    unaff_s8 = (float)FUN_079e44b4();
  }
  if (*(char *)(unaff_x20 + 0x1c) != '\0') {
    unaff_s9 = (float)FUN_079e44b4();
  }
  if (*(char *)(unaff_x20 + 0x28) != '\0') {
    param_3 = (float)FUN_079e44b4(param_3,*(undefined4 *)(unaff_x20 + 0x2c),
                                  *(undefined4 *)(unaff_x20 + 0x30));
  }
  fVar4 = unaff_s9 * DAT_01aed080;
  param_3 = param_3 * DAT_01aed080;
  fVar2 = (float)FUN_089b9180(unaff_s8 * DAT_01aed080,0);
  fVar9 = fVar4;
  fVar6 = param_3;
  fVar8 = param_4;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704();
  if ((uVar1 & 1) != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    fVar3 = (float)FUN_089dbd64();
    fVar12 = fVar2 * fVar3;
    fVar10 = fVar2 * fVar6;
    fVar11 = fVar4 * fVar3;
    fVar13 = fVar4 * fVar9;
    fVar5 = fVar2 * fVar9;
    fVar7 = param_3 * fVar6;
    fVar2 = (param_3 * fVar9 + fVar2 * fVar8 + param_4 * fVar3) - fVar4 * fVar6;
    fVar4 = (fVar10 + fVar4 * fVar8 + param_4 * fVar9) - param_3 * fVar3;
    param_3 = (fVar11 + param_3 * fVar8 + param_4 * fVar6) - fVar5;
    param_4 = ((param_4 * fVar8 - fVar12) - fVar13) - fVar7;
  }
  if (DAT_09890f5f == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_09890f5f = '\x01';
  }
  fVar9 = SQRT(param_4 * param_4 + param_3 * param_3 + fVar2 * fVar2 + fVar4 * fVar4);
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar9) {
    fVar2 = fVar2 / fVar9;
  }
  else {
    if (DAT_09885626 == '\0') {
      FUN_04077588(PTR_DAT_09286df8);
      DAT_09885626 = '\x01';
    }
    fVar2 = **(float **)(*(long *)PTR_DAT_09286df8 + 0xb8);
  }
  return fVar2;
}


