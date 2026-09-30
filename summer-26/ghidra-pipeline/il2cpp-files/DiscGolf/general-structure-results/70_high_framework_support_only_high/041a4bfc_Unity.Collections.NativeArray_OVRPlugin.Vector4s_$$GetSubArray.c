/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 041a4bfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray(long param_1,long param_2)

{
  uint uVar1;
  
                    /* try { // try from 041a4c08 to 042a4c1b has its CatchHandler @ 041a4c28 */
                    /* try { // try from 041a4c1c to 042a4c3f has its CatchHandler @ 041a4bc8 */
  uVar1 = FUN_038e8b20(*(undefined8 *)(param_2 + 0x10),0,*(undefined4 *)(param_2 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xd0) + 0x20) +
                                  0xc0) + 0x148));
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 041a4c08 with catch @ 041a4c28
                        */
  if (-1 < (int)uVar1) {
    FUN_041a4e90(param_2,uVar1);
  }
                    /* try { // try from 041a4c40 to 042a4c57 has its CatchHandler @ 041a4c90 */
  return ~uVar1 >> 0x1f;
}


