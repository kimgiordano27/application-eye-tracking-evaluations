/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 04f94574
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  undefined8 uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined4 unaff_s11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar1 = FUN_05c99d80(unaff_s11);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
    lVar2 = unaff_x22 + (long)unaff_w21 * 0x1c;
    *(undefined4 *)(lVar2 + 0x38) = in_stack_00000028;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000020;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000010;
    FUN_04f948ec(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


