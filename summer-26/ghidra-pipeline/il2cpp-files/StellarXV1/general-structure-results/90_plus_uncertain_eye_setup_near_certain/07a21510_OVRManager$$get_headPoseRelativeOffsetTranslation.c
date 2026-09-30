/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 07a21510
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_headPoseRelativeOffsetTranslation
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  ulong uVar2;
  float *pfVar3;
  long unaff_x19;
  float *unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar1 = PTR_DAT_09285bb0;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar5 = (float)FUN_089d9cf0();
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  fVar9 = param_2;
  fVar16 = param_3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089ca704(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0)
    goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange;
    param_2 = unaff_x20[1];
    fVar6 = unaff_x20[2];
    fVar5 = *unaff_x20;
    fVar7 = (float)FUN_089db960(*(long *)(unaff_x19 + 0x30),0);
    fVar10 = fVar9;
    fVar11 = fVar16;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar8 = (float)FUN_089d9dd0();
    if (DAT_098854e6 == '\0') {
      FUN_04077588(PTR_DAT_09285d58);
      DAT_098854e6 = '\x01';
    }
    fVar5 = fVar5 - fVar7;
    param_2 = param_2 - fVar9;
    param_3 = fVar6 - fVar16;
    fVar9 = fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
    fVar16 = fVar6;
    if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar9) {
      fVar6 = param_3 * fVar11 + fVar5 * fVar8 + param_2 * fVar10;
      fVar16 = (fVar8 * fVar6) / fVar9;
      fVar5 = fVar5 - fVar16;
      param_2 = param_2 - (fVar10 * fVar6) / fVar9;
      param_3 = param_3 - (fVar11 * fVar6) / fVar9;
    }
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar9 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    if (fVar9 <= DAT_01aecf88) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
      fVar5 = *pfVar3;
      param_2 = pfVar3[1];
      param_3 = pfVar3[2];
    }
    else {
      fVar5 = fVar5 / fVar9;
      param_2 = param_2 / fVar9;
      param_3 = param_3 / fVar9;
    }
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar10 = unaff_x20[1];
    fVar6 = unaff_x20[2];
    fVar7 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar11 = *unaff_x20;
    fVar9 = fVar6;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar12 = (float)FUN_089d9dd0();
    fVar19 = *(float *)(unaff_x19 + 0x58);
    fVar8 = fVar9;
    fVar17 = fVar16;
    uVar13 = FUN_089d9dd0();
    fVar15 = param_2;
    fVar18 = param_3;
    uVar14 = FUN_089b941c(fVar5,param_2,param_3,uVar13,fVar8,fVar17,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_089dc964((fVar11 - fVar5 * fVar7) + fVar12 * fVar19,
                   (fVar10 - param_2 * fVar7) + fVar9 * fVar19,
                   (fVar6 - param_3 * fVar7) + fVar16 * fVar19,uVar14,fVar15,fVar18,uVar13,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


