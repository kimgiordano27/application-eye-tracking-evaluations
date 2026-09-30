/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 07c5c644
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  float fVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float unaff_s12;
  float fVar12;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack000000000000006c;
  
  fVar9 = param_3;
  if (*(int *)(param_4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fStack000000000000001c = (float)FUN_09538070();
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  fVar4 = param_3 * param_3 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11;
  fVar12 = param_2;
  fVar8 = fVar9;
  fVar10 = fStack000000000000001c;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar4) {
    fVar8 = param_3 * fVar9 + unaff_s12 * fStack000000000000001c + unaff_s11 * param_2;
    fVar10 = fStack000000000000001c - (unaff_s12 * fVar8) / fVar4;
    fVar12 = param_2 - (unaff_s11 * fVar8) / fVar4;
    fVar8 = fVar9 - (param_3 * fVar8) / fVar4;
  }
  fStack0000000000000014 = fVar9;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar9 = DAT_01c7607c;
  fVar4 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar12 * fVar12);
  if (fVar4 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fStack000000000000006c = *pfVar3;
    fVar12 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fStack000000000000006c = fVar10 / fVar4;
    fVar12 = fVar12 / fVar4;
    fVar8 = fVar8 / fVar4;
  }
  fVar10 = param_3 * fStack000000000000006c;
  fVar4 = unaff_s11 * fStack000000000000006c;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  fVar11 = param_3 * fVar12 - unaff_s11 * fVar8;
  fVar10 = unaff_s12 * fVar8 - fVar10;
  fVar4 = fVar4 - unaff_s12 * fVar12;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar2 = fStack000000000000006c;
  fVar4 = SQRT(fVar4 * fVar4 + fVar11 * fVar11 + fVar10 * fVar10);
  if (fVar4 <= fVar9) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    fVar11 = **(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar10 = (*(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8))[1];
  }
  else {
    fVar11 = fVar11 / fVar4;
    fVar10 = fVar10 / fVar4;
  }
  fStack0000000000000004 = fVar10;
  FUN_0770668c(fVar2,fVar12,fVar8,fStack000000000000001c,param_2,fStack0000000000000014,0);
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_094bab0c(*(long *)(unaff_x20 + 0x40),0);
    FUN_09516af4(0);
    uVar7 = FUN_09516eb8(0);
    if (fVar10 * fVar10 + (float)uVar7 * (float)uVar7 + fVar11 * fVar11 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar5 = FUN_09538150();
      uVar6 = FUN_09516bac(uVar7,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar6;
      *(float *)(unaff_x19 + 0x10) = fVar11;
      *(float *)(unaff_x19 + 0x14) = fVar10;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


