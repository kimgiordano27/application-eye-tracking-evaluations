/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.RoomFace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0426c8cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_RoomFace>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  int *in_x10;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  (**(code **)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138))();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc(*(long *)(unaff_x20 + 0x20));
  }
  FUN_03159758();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_0315dc8c();
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


