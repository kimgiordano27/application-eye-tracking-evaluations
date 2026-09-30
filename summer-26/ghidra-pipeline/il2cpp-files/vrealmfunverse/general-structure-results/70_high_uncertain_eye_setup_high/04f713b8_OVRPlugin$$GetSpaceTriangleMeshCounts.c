/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 04f713b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceTriangleMeshCounts
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (*(char *)(unaff_x23 + 0xcaa) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    *(undefined1 *)(unaff_x23 + 0xcaa) = 1;
  }
  if (unaff_x20 != 0) {
    fVar4 = unaff_s9 - unaff_s12;
    param_3 = param_3 - unaff_s13;
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    thunk_FUN_05c9d79c(unaff_s8 - unaff_s11,fVar4,param_3,*(undefined4 *)(lVar1 + 0x18),
                       *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar1 = FUN_05c89340();
    if (lVar1 != 0) {
      fVar2 = (float)FUN_05c9bf94(lVar1,0);
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar5 = fVar4;
        fVar6 = param_3;
        fVar3 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x50),0);
        if (DAT_066c1d99 == '\0') {
          FUN_02b3c81c(PTR_DAT_06312c90);
          DAT_066c1d99 = '\x01';
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (lVar1 = FUN_05c89340(*(long *)(unaff_x19 + 0x48),0), lVar1 != 0)) {
          fVar4 = SQRT((param_3 - fVar6) * (param_3 - fVar6) +
                       (fVar2 - fVar3) * (fVar2 - fVar3) + (fVar4 - fVar5) * (fVar4 - fVar5));
          FUN_05c9c840(fVar4 * *(float *)(unaff_x19 + 100),fVar4 * *(float *)(unaff_x19 + 0x68),
                       fVar4 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


