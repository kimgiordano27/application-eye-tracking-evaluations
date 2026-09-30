/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 039a7758
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_3;
  uVar1 = FUN_03389dfc(*(undefined8 *)(param_4 + 0x10),param_5,0,*(undefined4 *)(unaff_x19 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xd0) + 0x20) +
                                  0xc0) + 0x150));
  if (-1 < (int)uVar1) {
    FUN_039a7a6c();
  }
  return ~uVar1 >> 0x1f;
}


