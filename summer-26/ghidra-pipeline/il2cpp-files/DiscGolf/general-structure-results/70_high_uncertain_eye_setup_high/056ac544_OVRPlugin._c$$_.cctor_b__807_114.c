/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_114
ENTRY_POINT: 056ac544
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056ac59c) */

void OVRPlugin_<>c__<_cctor>b__807_114(long *param_1)

{
  long lVar1;
  long *unaff_x20;
  long *in_stack_00000008;
  
  (**(code **)(*param_1 + 0x178))();
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar1 = *unaff_x20;
  }
  if ((*in_stack_00000008 != 0) && (**(long **)(lVar1 + 0xb8) != 0)) {
    FUN_04ff2f1c(**(long **)(lVar1 + 0xb8),*(undefined8 *)(*in_stack_00000008 + 0x18),
                 *(undefined8 *)Yapp_Interpolate_ToVector3<ControlPoint>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


