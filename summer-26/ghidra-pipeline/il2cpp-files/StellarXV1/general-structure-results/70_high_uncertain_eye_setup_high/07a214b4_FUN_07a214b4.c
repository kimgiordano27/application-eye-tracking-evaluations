/*
FUNCTION_NAME: FUN_07a214b4
ENTRY_POINT: 07a214b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07a214b4(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar2 = PTR_DAT_092b7110;
  if ((DAT_0989518b & 1) == 0) {
    FUN_04077588(PTR_DAT_09285bb0);
    FUN_04077588(PTR_DAT_092b7110);
    DAT_0989518b = 1;
  }
  puVar1 = PTR_DAT_09285bb0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar6 = (float)FUN_089d9cf0(param_5,0);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  fVar10 = param_2;
  fVar17 = param_3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_089ca704(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_4 + 0x30) == 0)
    goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange;
    param_2 = param_5[1];
    fVar7 = param_5[2];
    fVar6 = *param_5;
    fVar8 = (float)FUN_089db960(*(long *)(param_4 + 0x30),0);
    fVar11 = fVar10;
    fVar12 = fVar17;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar9 = (float)FUN_089d9dd0(param_5,0);
    if (DAT_098854e6 == '\0') {
      FUN_04077588(PTR_DAT_09285d58);
      DAT_098854e6 = '\x01';
    }
    fVar6 = fVar6 - fVar8;
    param_2 = param_2 - fVar10;
    param_3 = fVar7 - fVar17;
    fVar10 = fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11;
    fVar17 = fVar7;
    if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar10) {
      fVar7 = param_3 * fVar12 + fVar6 * fVar9 + param_2 * fVar11;
      fVar17 = (fVar9 * fVar7) / fVar10;
      fVar6 = fVar6 - fVar17;
      param_2 = param_2 - (fVar11 * fVar7) / fVar10;
      param_3 = param_3 - (fVar12 * fVar7) / fVar10;
    }
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar10 = SQRT(param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2);
    if (fVar10 <= DAT_01aecf88) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
      fVar6 = *pfVar4;
      param_2 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar6 = fVar6 / fVar10;
      param_2 = param_2 / fVar10;
      param_3 = param_3 / fVar10;
    }
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    fVar11 = param_5[1];
    fVar7 = param_5[2];
    fVar8 = *(float *)(*(long *)(param_4 + 0x40) + 0x60);
    fVar12 = *param_5;
    fVar10 = fVar7;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar13 = (float)FUN_089d9dd0(param_5,0);
    fVar20 = *(float *)(param_4 + 0x58);
    fVar9 = fVar10;
    fVar18 = fVar17;
    uVar14 = FUN_089d9dd0(param_5,0);
    fVar16 = param_2;
    fVar19 = param_3;
    uVar15 = FUN_089b941c(fVar6,param_2,param_3,uVar14,fVar9,fVar18,0);
    if (*(long *)(param_4 + 0x38) != 0) {
      FUN_089dc964((fVar12 - fVar6 * fVar8) + fVar13 * fVar20,
                   (fVar11 - param_2 * fVar8) + fVar10 * fVar20,
                   (fVar7 - param_3 * fVar8) + fVar17 * fVar20,uVar15,fVar16,fVar19,uVar14,
                   *(long *)(param_4 + 0x38),0);
      return;
    }
  }
OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


