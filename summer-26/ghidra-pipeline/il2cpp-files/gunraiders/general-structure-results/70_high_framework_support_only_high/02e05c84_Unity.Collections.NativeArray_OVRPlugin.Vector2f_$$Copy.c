/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 02e05c84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  
  if (param_5 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_024851c4(*(undefined8 *)(param_1 + 0x10),param_2,param_3,0,param_5,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0)
                                                        + 0xd0) + 0x20) + 0xc0) + 0x150));
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}


