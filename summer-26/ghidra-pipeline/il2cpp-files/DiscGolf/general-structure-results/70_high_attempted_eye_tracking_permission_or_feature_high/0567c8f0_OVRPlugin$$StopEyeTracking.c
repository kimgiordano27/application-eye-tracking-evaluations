/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 0567c8f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8(System_Collections_Generic_List<Subsystem>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x6f7) = 1;
  uVar1 = *unaff_x20;
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  FUN_04270804(unaff_x19 + 0x40,uVar1);
  return;
}


