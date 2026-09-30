/*
FUNCTION_NAME: Liv.NativeGalleryBridge.NativeGallery.<>c__DisplayClass22_0$$<RequestPermissionAsync>b__0
ENTRY_POINT: 026fc9e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8
Liv_NativeGalleryBridge_NativeGallery_<>c__DisplayClass22_0__<RequestPermissionAsync>b__0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 unaff_w20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char cStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar1 = FUN_026f401c();
  FUN_026fcffc(&stack0x00000048,uVar1);
  do {
    FUN_026fd048(&stack0x000001c0);
    in_stack_00000028 = in_stack_00000008;
    _cStack0000000000000020 = in_stack_00000000;
    uVar1 = _cStack0000000000000020;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    cStack0000000000000020 = (char)in_stack_00000000;
    _cStack0000000000000020 = uVar1;
    if (cStack0000000000000020 == '\x01') {
      uVar2 = FUN_026fd3dc(&stack0x00000048,unaff_w20);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      break;
    }
    uVar2 = FUN_026fd2cc(&stack0x00000048,&stack0x00000020);
  } while ((uVar2 & 1) != 0);
  FUN_026fcec8();
  return 0;
}


