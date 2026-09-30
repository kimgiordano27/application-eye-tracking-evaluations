/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 07479cc0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__GetHandTrackingEnabled(float *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float fVar7;
  
  if (param_2 <= *param_1 * param_3) {
    param_2 = *param_1 * param_3;
  }
  if (param_2 <= ABS(unaff_s9 - unaff_s8)) {
    fVar5 = *(float *)(unaff_x20 + 0xa8);
    fVar6 = *(float *)(unaff_x19 + 0x28);
    fVar7 = *(float *)(unaff_x20 + 0xa0);
    fVar2 = (float)FUN_08a5a0a8(0);
    fVar4 = fVar7 * fVar2;
    fVar3 = fVar4;
    if (fVar6 - fVar5 < 0.0) {
      fVar3 = -(fVar7 * fVar2);
    }
    fVar3 = fVar5 + fVar3;
    if (ABS(fVar6 - fVar5) <= fVar4) {
      fVar3 = fVar6;
    }
    *(float *)(unaff_x20 + 0xa8) = fVar3;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
                    /* catch() { ... } // from try @ 07479a1c with catch @ 07479d38 */
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),0);
                    /* catch() { ... } // from try @ 07479a84 with catch @ 07479d3c */
    uVar1 = 1;
                    /* catch() { ... } // from try @ 07479a20 with catch @ 07479d40 */
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  else {
    uVar1 = 0;
    *(undefined1 *)(unaff_x20 + 0xa4) = 0;
  }
  return uVar1;
}


