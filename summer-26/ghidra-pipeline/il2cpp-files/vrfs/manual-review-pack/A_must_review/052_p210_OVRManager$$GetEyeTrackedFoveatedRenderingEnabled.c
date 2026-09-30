/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02fc73a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x02fc73c4) */

undefined8 OVRManager__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  long lVar1;
  undefined4 in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  undefined4 unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x20 + 0x20) = in_w8;
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(uint *)(unaff_x26 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  lVar1 = unaff_x26 + (long)(int)unaff_w22 * 0x10;
  *(undefined4 *)(lVar1 + 0x20) = unaff_w27;
  *(int *)(lVar1 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar1 + 0x28) = in_stack_00000008._4_4_;
  *(undefined4 *)(lVar1 + 0x2c) = unaff_w19;
  *unaff_x28 = unaff_w22 + 1;
  return 1;
}


