/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 079e41ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke
                (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar1 = PTR_DAT_09285bb0;
  fVar8 = param_2;
  fVar4 = param_3;
  if ((DAT_09894f4a & 1) == 0) {
    FUN_04077588(PTR_DAT_09285bb0);
    DAT_09894f4a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089ca704(param_6,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_6 == 0) goto LAB_079e44b0;
    FUN_089dbd64(param_6,0);
    fVar3 = (float)FUN_089b8e60(0);
    fVar11 = param_1 * fVar3;
    fVar7 = param_1 * fVar4;
    fVar9 = param_2 * fVar3;
    fVar12 = param_2 * fVar8;
    fVar5 = param_1 * fVar8;
    fVar6 = param_3 * fVar4;
    param_1 = (param_3 * fVar8 + param_1 * param_4 + unaff_s11 * fVar3) - param_2 * fVar4;
    param_2 = (fVar7 + param_2 * param_4 + unaff_s11 * fVar8) - param_3 * fVar3;
    param_3 = (fVar9 + param_3 * param_4 + unaff_s11 * fVar4) - fVar5;
    unaff_s11 = ((unaff_s11 * param_4 - fVar11) - fVar12) - fVar6;
  }
  fVar4 = (float)FUN_089b9218(param_1,param_2,param_3,unaff_s11,0);
  param_2 = param_2 * DAT_01aec2c8;
  param_3 = param_3 * DAT_01aec2c8;
  fVar8 = DAT_01aec2c8;
  fVar4 = (float)FUN_089b98cc(fVar4 * DAT_01aec2c8,0);
  if (param_5 != 0) {
    if (*(char *)(param_5 + 0x10) != '\0') {
      fVar4 = (float)FUN_079e44b4(fVar4,*(undefined4 *)(param_5 + 0x14),
                                  *(undefined4 *)(param_5 + 0x18));
    }
    if (*(char *)(param_5 + 0x1c) != '\0') {
      param_2 = (float)FUN_079e44b4(param_2,*(undefined4 *)(param_5 + 0x20),
                                    *(undefined4 *)(param_5 + 0x24));
    }
    if (*(char *)(param_5 + 0x28) != '\0') {
      param_3 = (float)FUN_079e44b4(param_3,*(undefined4 *)(param_5 + 0x2c),
                                    *(undefined4 *)(param_5 + 0x30));
    }
    param_2 = param_2 * DAT_01aed080;
    param_3 = param_3 * DAT_01aed080;
    fVar6 = (float)FUN_089b9180(fVar4 * DAT_01aed080,0);
    fVar4 = param_2;
    fVar3 = param_3;
    fVar5 = fVar8;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar2 = FUN_089ca704(param_6,0,0);
    if ((uVar2 & 1) != 0) {
      if (param_6 == 0) goto LAB_079e44b0;
      fVar7 = (float)FUN_089dbd64(param_6,0);
      fVar13 = fVar6 * fVar7;
      fVar12 = fVar6 * fVar3;
      fVar10 = param_2 * fVar7;
      fVar14 = param_2 * fVar4;
      fVar9 = fVar6 * fVar4;
      fVar11 = param_3 * fVar3;
      fVar6 = (param_3 * fVar4 + fVar6 * fVar5 + fVar8 * fVar7) - param_2 * fVar3;
      param_2 = (fVar12 + param_2 * fVar5 + fVar8 * fVar4) - param_3 * fVar7;
      param_3 = (fVar10 + param_3 * fVar5 + fVar8 * fVar3) - fVar9;
      fVar8 = ((fVar8 * fVar5 - fVar13) - fVar14) - fVar11;
    }
    if (DAT_09890f5f == '\0') {
      FUN_04077588(PTR_DAT_09285d58);
      DAT_09890f5f = '\x01';
    }
    fVar8 = SQRT(fVar8 * fVar8 + param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2);
    if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar8) {
      fVar6 = fVar6 / fVar8;
    }
    else {
      if (DAT_09885626 == '\0') {
        FUN_04077588(PTR_DAT_09286df8);
        DAT_09885626 = '\x01';
      }
      fVar6 = **(float **)(*(long *)PTR_DAT_09286df8 + 0xb8);
    }
    return fVar6;
  }
LAB_079e44b0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


