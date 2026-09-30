/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 053449b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  iVar1 = unaff_w20 + 0x3f;
  if (-1 < unaff_w20) {
    iVar1 = unaff_w20;
  }
  uVar2 = *unaff_x21;
  *(int *)(unaff_x19 + 0xcc) = (iVar1 >> 6) + 1;
  uVar2 = FUN_02f0880c(uVar2);
  uVar3 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  uVar2 = FUN_02f0880c(uVar3,*(undefined4 *)(unaff_x19 + 0xcc));
  uVar3 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  uVar2 = FUN_02f0880c(uVar3,*(undefined4 *)(unaff_x19 + 0xcc));
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return;
}


