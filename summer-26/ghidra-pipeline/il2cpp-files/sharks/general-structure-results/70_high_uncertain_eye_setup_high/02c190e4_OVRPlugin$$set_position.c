/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 02c190e4
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__set_position(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long unaff_x19;
  
  plVar3 = (long *)FUN_0187f3ac();
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    uVar2 = FUN_02b00b94(*(undefined8 *)(unaff_x19 + 0x20),0);
    return uVar2 ^ uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


