/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_IsCreated
ENTRY_POINT: 036d8abc
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated(void)

{
  byte bVar1;
  bool in_ZR;
  uint in_w8;
  long in_x9;
  
  if (in_ZR) {
    FUN_036cf930();
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d8f138 + 300);
    if ((in_w8 < bVar1) || (*(long *)(in_x9 + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d8f138))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170();
    }
    FUN_036d04e0();
  }
  return;
}


