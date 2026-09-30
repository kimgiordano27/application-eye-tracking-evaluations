/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 047a888c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_2[1];
  uStack0000000000000000 = *param_2;
  uStack0000000000000010 = param_2[2];
                    /* try { // try from 047a88b4 to 048a88c3 has its CatchHandler @ 047a88c4 */
                    /* catch() { ... } // from try @ 047a8834 with catch @ 047a88c4
                       catch() { ... } // from try @ 047a88b4 with catch @ 047a88c4 */
                    /* try { // try from 047a88c8 to 048a88cb has its CatchHandler @ 047a88d4 */
  uVar1 = FUN_03ffaffc(*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 047a88cc to 048a88d7 has its CatchHandler @ 047a8754 */
  if (-1 < (int)uVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a88c8 with catch @ 047a88d4
                        */
                    /* try { // try from 047a88d8 to 048a8bfb has its CatchHandler @ 047a88d8
                       catch() { ... } // from try @ 047a88d8 with catch @ 047a88d8
                       catch() { ... } // from try @ 047a8cec with catch @ 047a88d8
                       catch() { ... } // from try @ 047a8db0 with catch @ 047a88d8
                       catch() { ... } // from try @ 047a8e04 with catch @ 047a88d8 */
    FUN_047a8bb4(param_1,uVar1);
  }
  return ~uVar1 >> 0x1f;
}


