/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 074026b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  FUN_051c31f4(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_03d233cc();
  uVar1 = FUN_03c8f97c(*unaff_x22,5);
  FUN_0701f51c(uVar1,*unaff_x21,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_03d233cc(puVar2,uVar1);
  return;
}


