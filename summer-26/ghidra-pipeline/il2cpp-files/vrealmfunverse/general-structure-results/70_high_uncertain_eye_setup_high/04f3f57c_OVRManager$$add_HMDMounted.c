/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 04f3f57c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_HMDMounted(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  double dVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(**(long **)(param_1 + 0x438) + 0xb8);
  fVar7 = *(float *)(lVar2 + 0x18);
  fVar8 = *(float *)(lVar2 + 0x1c);
  fVar6 = *(float *)(lVar2 + 0x20);
  if (DAT_066c1f09 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1f09 = '\x01';
  }
  puVar1 = PTR_DAT_06312c90;
  if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar5 = 0.0;
  fVar3 = SQRT((unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9) *
               (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8));
  if (DAT_01031c1c <= fVar3) {
    fVar3 = (unaff_s8 * fVar6 + unaff_s10 * fVar7 + unaff_s9 * fVar8) / fVar3;
    fVar6 = 1.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3;
    }
    fVar7 = -1.0;
    if (-1.0 <= fVar3) {
      fVar7 = fVar6;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    dVar4 = acos((double)fVar7);
    fVar5 = (float)dVar4 * DAT_01032280;
  }
  return fVar5 <= *(float *)(unaff_x19 + 0x30);
}


