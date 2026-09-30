/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 03b605f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor
               (long param_1,long param_2,undefined8 param_3)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  FUN_03b5eedc(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x148));
  if (param_2 != 0) {
    FUN_04f53d58(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(param_2 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(param_2 + 0x18) = unaff_w19;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


