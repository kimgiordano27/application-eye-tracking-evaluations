/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$AsReadOnly
ENTRY_POINT: 047a50a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_RoomFace>__AsReadOnly(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
                    /* try { // try from 047a50b0 to 048a50c3 has its CatchHandler @ 047a50d0 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
                    /* try { // try from 047a50c4 to 048a50e7 has its CatchHandler @ 047a5070 */
  return **(undefined8 **)(lVar1 + 0xb8);
}


