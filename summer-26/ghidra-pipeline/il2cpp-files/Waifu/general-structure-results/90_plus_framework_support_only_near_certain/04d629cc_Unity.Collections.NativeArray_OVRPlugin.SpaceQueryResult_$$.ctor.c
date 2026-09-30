/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04d629cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  uint in_w9;
  long in_x10;
  uint in_w11;
  undefined4 in_register_0000405c;
  long lVar1;
  
  if ((in_w9 < in_w11) ||
     (*(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000405c,in_w11) * 8 + -8) != in_x10
     )) {
    return;
  }
  if (*(int *)(DAT_083d1c30 + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* try { // try from 04d62c58 to 04e62c7f has its CatchHandler @ 04d62e14 */
  if (DAT_086d9726 == '\0') {
    FUN_0335b6c8(&DAT_083d1c30,1);
    DataMemoryBarrier(2,3);
    DAT_086d9726 = '\x01';
  }
  if (*(int *)(DAT_083d1c30 + 0xe0) == 0) {
    FUN_033b9870();
  }
                    /* try { // try from 04d62c98 to 04e62cfb has its CatchHandler @ 04d62e18 */
  lVar1 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
  if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083c96c8);
  }
  if (lVar1 != 0) {
    FUN_068bde18(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


