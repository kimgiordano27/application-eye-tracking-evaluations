/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 05d3cfa0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x58);
  if (lVar2 != 0) {
    uVar1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb7268);
    FUN_051110bc();
    FUN_05cc016c(lVar2,uVar1,0);
  }
  thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb7268);
  FUN_051110bc();
  FUN_05cc00bc();
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
  thunk_FUN_03048534((long *)(unaff_x20 + 0x58));
  return;
}


