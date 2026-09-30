/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 051c5bd4
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar2 = PTR_DAT_066056b0;
  puVar1 = PTR_DAT_066056a8;
  (*(code *)*param_1)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar3 = FUN_04812268(&stack0x00000020,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
    FUN_050e5bf4();
    FUN_050e5c6c();
  }
  FUN_04812264(&stack0x00000020,*(undefined8 *)puVar1);
  return;
}


