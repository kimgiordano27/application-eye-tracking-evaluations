/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 068c0d00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar2;
  
  thunk_FUN_03afed3c();
  FUN_068e3694();
  uVar2 = *(undefined4 *)(unaff_x19 + 0xd4);
  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_0574689c(uVar1,1,uVar2,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar1;
  thunk_FUN_03afed3c(unaff_x19 + 0x100,uVar1);
  uVar2 = *(undefined4 *)(unaff_x19 + 0xd8);
  uVar1 = thunk_FUN_03ac74bc(*unaff_x25);
  FUN_05748f30(uVar2,uVar1,2,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar1;
  thunk_FUN_03afed3c(unaff_x19 + 0x108,uVar1);
  uVar2 = *(undefined4 *)(unaff_x19 + 0xdc);
  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_0574689c(uVar1,3,uVar2,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
  thunk_FUN_03afed3c(unaff_x19 + 0x110,uVar1);
  return;
}


