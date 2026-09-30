/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 01f83f10
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 unaff_w20;
  undefined4 uVar3;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01279b34();
  *(undefined1 *)(unaff_x22 + 0xfb6) = 1;
  puVar1 = PTR_DAT_027ba7e8;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = System_Int32__TryParse();
    uVar3 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f64e2c(unaff_w20,uVar2,uVar3);
  return;
}


