/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 04f712d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (*(char *)(unaff_x20 + 0xd9d) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    *(undefined1 *)(unaff_x20 + 0xd9d) = 1;
  }
  puVar2 = PTR_DAT_06312c90;
  fVar8 = unaff_s8 - unaff_s11;
  fVar9 = unaff_s9 - unaff_s12;
  fVar10 = unaff_s10 - unaff_s13;
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = PTR_DAT_06312438;
  fVar6 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar7 = DAT_01032864;
  if (fVar6 <= DAT_01032864) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  lVar3 = FUN_05c89340();
  lVar4 = FUN_05c89340();
  if (lVar4 != 0) {
    fVar6 = (float)FUN_05c9bf94(lVar4,0);
    if (DAT_066c1caa == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1caa = '\x01';
    }
    if (lVar3 != 0) {
      fVar7 = fVar7 - fVar9;
      param_3 = param_3 - fVar10;
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      thunk_FUN_05c9d79c(fVar6 - fVar8,fVar7,param_3,*(undefined4 *)(lVar4 + 0x18),
                         *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),lVar3,0);
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        return;
      }
      lVar3 = FUN_05c89340();
      if (lVar3 != 0) {
        fVar8 = (float)FUN_05c9bf94(lVar3,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar9 = fVar7;
          fVar10 = param_3;
          fVar6 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_066c1d99 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312c90);
            DAT_066c1d99 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if ((*(long *)(unaff_x19 + 0x48) != 0) &&
             (lVar3 = FUN_05c89340(*(long *)(unaff_x19 + 0x48),0), lVar3 != 0)) {
            fVar8 = SQRT((param_3 - fVar10) * (param_3 - fVar10) +
                         (fVar8 - fVar6) * (fVar8 - fVar6) + (fVar7 - fVar9) * (fVar7 - fVar9));
            FUN_05c9c840(fVar8 * *(float *)(unaff_x19 + 100),fVar8 * *(float *)(unaff_x19 + 0x68),
                         fVar8 * *(float *)(unaff_x19 + 0x6c),lVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


