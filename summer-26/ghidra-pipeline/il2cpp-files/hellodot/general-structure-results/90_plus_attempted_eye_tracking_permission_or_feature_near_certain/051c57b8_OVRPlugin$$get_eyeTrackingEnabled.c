/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 051c57b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_06608e00;
  puVar3 = *(undefined8 **)(unaff_x22 + 0xe88);
  puVar4 = *(undefined8 **)(unaff_x23 + 0xe90);
  uVar2 = thunk_FUN_02cea894();
  FUN_03a4bbbc(uVar2,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  uVar2 = thunk_FUN_02cea894(*puVar3);
  FUN_0461115c(uVar2,*puVar4);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  uVar2 = thunk_FUN_02cea894(*puVar3);
  FUN_0461115c(uVar2,*puVar4);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  uVar2 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_051c5840();
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  FUN_05ef8078();
  return;
}


