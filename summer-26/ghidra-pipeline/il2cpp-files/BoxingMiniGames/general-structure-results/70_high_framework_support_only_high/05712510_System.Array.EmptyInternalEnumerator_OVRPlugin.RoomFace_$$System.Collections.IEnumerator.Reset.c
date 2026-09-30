/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.RoomFace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05712510
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_RoomFace>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(*(undefined8 **)(param_1 + 0xc0))[2])(param_2,0,**(undefined8 **)(param_1 + 0xc0));
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18))();
  *(undefined4 *)(unaff_x20 + 0x24) = unaff_w19;
  return;
}


