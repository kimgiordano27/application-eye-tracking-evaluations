/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 07a3e25c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(void)

{
  long lVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x21 + 0x2a7) = 1;
  lVar1 = thunk_FUN_040b4e00(unaff_x19[7],*unaff_x20);
  unaff_x19[8] = lVar1;
  thunk_FUN_040ec700(unaff_x19 + 8,lVar1);
                    /* WARNING: Could not recover jumptable at 0x07a3e2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x188))();
  return;
}


