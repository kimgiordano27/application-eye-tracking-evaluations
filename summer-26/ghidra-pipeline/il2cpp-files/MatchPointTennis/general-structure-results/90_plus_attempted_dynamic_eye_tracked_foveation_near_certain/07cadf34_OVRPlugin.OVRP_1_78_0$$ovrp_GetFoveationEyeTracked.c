/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 07cadf34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x07cadfd4) */

void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  thunk_FUN_044a54b4();
  if (DAT_0a526ad1 == '\0') {
    FUN_04447ba8(PTR_DAT_09f511b8);
    DAT_0a526ad1 = '\x01';
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *unaff_x22;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0x38);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07cad1d4(uVar1);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_04455fec();
  }
  return;
}


