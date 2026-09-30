/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 036d92c0
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  byte bVar1;
  uint uVar2;
  long in_x9;
  ulong in_x10;
  long in_x11;
  uint in_w12;
  long in_x13;
  uint in_w14;
  long in_x15;
  long *unaff_x22;
  
  if (*(long *)(in_x15 + (in_x10 & 0xffffffff) * 8 + -8) == param_1) {
    uVar2 = FUN_036daf90();
  }
  else if ((in_w14 < in_w12) || (*(long *)(*(long *)(in_x9 + 200) + in_x13 * 8) != in_x11)) {
    bVar1 = *(byte *)(*unaff_x22 + 300);
    if ((in_w14 < bVar1) ||
       (*(long *)(*(long *)(in_x9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170();
    }
    uVar2 = FUN_036db22c();
  }
  else {
    uVar2 = FUN_036db12c();
  }
  return uVar2 & 1;
}


