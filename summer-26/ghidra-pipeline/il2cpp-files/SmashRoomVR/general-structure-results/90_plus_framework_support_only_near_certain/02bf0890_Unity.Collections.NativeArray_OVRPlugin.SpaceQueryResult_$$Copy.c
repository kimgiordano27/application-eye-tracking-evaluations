/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 02bf0890
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
    FUN_0306273c(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(unaff_x22 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(unaff_x22 + 0x18) = unaff_w19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


