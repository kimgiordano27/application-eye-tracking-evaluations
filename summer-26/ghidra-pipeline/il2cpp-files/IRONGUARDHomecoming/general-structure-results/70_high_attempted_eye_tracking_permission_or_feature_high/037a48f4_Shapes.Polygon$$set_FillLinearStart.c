/*
FUNCTION_NAME: Shapes.Polygon$$set_FillLinearStart
ENTRY_POINT: 037a48f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void Shapes_Polygon__set_FillLinearStart(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x19;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x6e0);
  uStack0000000000000028 = 0;
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_StartEyeTracking";
  uStack0000000000000018 = 0x15;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_01f11a88();
  *(code **)(unaff_x19 + 0x2c8) = pcVar1;
  (*pcVar1)();
  return;
}


