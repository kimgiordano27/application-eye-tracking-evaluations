/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector3f>
ENTRY_POINT: 01e1d454
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector3f>
               (undefined1 *param_1,void *param_2,size_t param_3)

{
  void *unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    memmove(unaff_x20,unaff_x19,0x9c);
    memcpy(unaff_x19,&stack0x00000000,0x9c);
    unaff_x19 = (void *)((long)unaff_x19 + -0x9c);
    if (unaff_x19 <= unaff_x21) break;
    param_3 = 0x9c;
    param_1 = (undefined1 *)register0x00000008;
    param_2 = unaff_x21;
    unaff_x20 = unaff_x21;
    unaff_x21 = (void *)((long)unaff_x21 + 0x9c);
  }
  return;
}


