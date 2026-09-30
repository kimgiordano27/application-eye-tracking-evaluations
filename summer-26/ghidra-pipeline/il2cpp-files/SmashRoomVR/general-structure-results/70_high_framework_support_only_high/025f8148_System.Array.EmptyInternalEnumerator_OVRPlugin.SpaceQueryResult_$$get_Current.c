/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 025f8148
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  long unaff_x19;
  undefined4 unaff_w20;
  
  FUN_03062488();
  FUN_03062488(*(undefined8 *)(unaff_x19 + 8),0,unaff_w20,0);
  FUN_03062488(*(undefined8 *)(unaff_x19 + 0x10),0,unaff_w20,0);
  FUN_03062488(*(undefined8 *)(unaff_x19 + 0x18),0,unaff_w20,0);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_026a8124(*(long *)(unaff_x19 + 0x28),*(undefined8 *)StringLiteral_3517);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


