/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 0469ae34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (long param_1,undefined8 param_2)

{
  uint in_w9;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined4 unaff_w23;
  
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02feb2c4(param_1);
  }
  FUN_0469aea8(unaff_w19,unaff_w23,param_2,**(undefined8 **)(param_1 + 0xc0));
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
                    /* try { // try from 0469ae78 to 0479ae7f has its CatchHandler @ 0469af50 */
                    /* try { // try from 0469ae80 to 0479af2f has its CatchHandler @ 0469ac94 */
  FUN_0469b7e8();
  return;
}


